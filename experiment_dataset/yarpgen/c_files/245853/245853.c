/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_18 = ((!(arr_6 [i_0] [i_0] [2])));
                    var_19 = (arr_3 [12]);
                    var_20 = (max(var_20, ((((~(!var_14)))))));
                }
                var_21 &= (((arr_2 [i_0]) ? (arr_6 [i_0] [i_0] [8]) : ((+((var_0 ? (arr_6 [i_0] [i_0] [12]) : (arr_5 [i_0] [0])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    var_22 = ((~((~(~var_2)))));
                    arr_14 [6] [i_4] [i_4 - 2] = (((~((~(arr_2 [i_5 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
