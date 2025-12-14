/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((7230663754051245344 + var_13) ? (max(-var_3, (var_5 == var_5))) : var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = ((((-((2147483647 ? var_14 : (arr_3 [i_0]))))) * (arr_2 [i_0 + 1])));
                var_19 = (arr_3 [i_0]);
                arr_6 [11] [0] [11] = (~11216080319658306266);
                var_20 = (~16);

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_21 = (min(var_21, (!var_2)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 = ((((max((arr_10 [i_1 + 1]), 11564))) || (!-11216080319658306289)));
                                var_23 = (max(var_23, (arr_1 [i_0])));
                                var_24 ^= ((((min(var_3, (arr_7 [i_0] [i_0] [i_0 + 1]))) & ((var_15 ^ (arr_12 [i_2] [i_3]))))));
                                arr_15 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_3] = ((((var_11 ? var_3 : 11216080319658306254)) >= (((min((arr_11 [i_3] [i_3] [i_1 + 1] [i_3]), var_13))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 -= (((!54681) != (((11216080319658306246 <= (min(1, var_3)))))));
    var_26 = var_0;
    var_27 = -8742;
    #pragma endscop
}
