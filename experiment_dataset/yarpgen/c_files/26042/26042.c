/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_13 &= (max(((-(((arr_5 [i_0] [i_1 + 1] [i_2 + 2] [i_2]) ? var_12 : (arr_1 [i_2]))))), 852069028));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = (!23788);
                }
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    arr_11 [i_3] [i_1] [i_1] [i_0] = ((((max(var_7, var_3)))));
                    var_14 = -var_6;
                    arr_12 [i_0] [i_1 - 1] [i_0] |= (((((var_2 ? (arr_9 [15] [i_1 - 2] [i_1 - 2]) : (arr_10 [i_3 + 1])))) ? (arr_10 [i_0]) : -112));
                }
                var_15 &= (arr_7 [i_0] [i_0]);
                var_16 = ((-(((arr_10 [i_0]) | (arr_10 [i_0])))));
                var_17 = 125;
            }
        }
    }
    var_18 = var_3;
    #pragma endscop
}
