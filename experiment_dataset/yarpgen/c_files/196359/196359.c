/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(((((var_0 ? var_6 : var_18)) > var_8)))));
    var_20 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [0] &= (min((arr_2 [i_0]), (min((arr_2 [10]), (arr_2 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_1] [i_1] [i_1] [i_1] [8] = (max((((1072693248 >= (((-8335905958476056834 ? 1443846730 : 261)))))), ((var_7 ? var_7 : 249))));
                                arr_16 [i_0] [i_1] = ((((~(arr_14 [i_0] [i_1 + 1])))) ? (((!(arr_14 [i_0] [i_4 - 1])))) : (((arr_14 [i_1] [7]) ^ (arr_14 [i_4 - 1] [i_2]))));
                                var_21 = var_18;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 += var_2;
    var_23 = (((((-1160845827078144476 ? ((0 ? 32761 : 3722025249)) : 35272))) * var_0));
    #pragma endscop
}
