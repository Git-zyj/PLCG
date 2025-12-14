/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((var_5 ? (((arr_1 [i_1 - 1]) ? (arr_1 [i_1 - 2]) : var_12)) : ((min(31, var_0)))));
                var_19 = var_14;
            }
        }
    }
    var_20 = (~var_8);
    var_21 = (max(((min(103, 21466))), ((-var_9 ? var_13 : var_18))));
    var_22 = -var_7;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_23 = (((((5937104951516646183 ? var_8 : 1944771290396179986))) < (((~((-(arr_12 [i_2] [i_2]))))))));
                    arr_16 [i_3] [i_3] [i_2] = (max(((var_8 ? (arr_8 [i_2]) : -28)), ((max(var_0, var_8)))));
                }
            }
        }
    }
    #pragma endscop
}
