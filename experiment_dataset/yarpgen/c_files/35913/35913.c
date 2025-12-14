/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = (max(var_21, var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 = ((((((((arr_0 [i_0]) ? 32767 : 1)) < ((max(var_6, (arr_6 [i_0]))))))) < var_7));
                    arr_7 [i_0] [i_0] [i_0] = ((((((arr_5 [i_2 + 1] [i_0] [20]) + (arr_5 [i_2 + 1] [i_0] [i_2])))) ? var_16 : (arr_2 [i_0])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_17 [i_5] [i_5] [i_3] [i_4] = 2;
                    arr_18 [i_5] [i_4] = (!((max(-var_5, (((arr_0 [12]) * (arr_2 [i_5])))))));
                    var_23 ^= 32767;
                }
            }
        }
    }
    #pragma endscop
}
