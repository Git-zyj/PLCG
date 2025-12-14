/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 |= var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (((((arr_3 [i_0 + 1] [i_1 - 2]) - 23)) >= ((((36028659580010496 || 18446744073709551592) ? (arr_0 [i_0 - 2] [i_1 - 2]) : (arr_3 [i_0 - 1] [i_0 - 1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] = (((23 ? 18446744073709551592 : (arr_11 [i_4] [8] [i_2] [i_3] [i_1] [i_3 - 2]))));
                                var_18 = (((0 & 262143) << 23));
                                var_19 = (max((((((var_0 ? 1152358554653425664 : (arr_2 [3])))) ? 1152358554653425662 : (18446744073709551597 >= 17294385519056125961))), 23));
                                var_20 += ((((((arr_9 [i_0]) ? ((23 << (4294967295 - 4294967236))) : ((17294385519056125951 % (arr_0 [i_2] [i_2])))))) ? ((23 | (max(18446744073709551593, var_14)))) : ((((arr_9 [i_0 + 1]) % var_11)))));
                            }
                        }
                    }
                }
                var_21 = (((((((2 & 23) <= (((23 ? 31703500 : (arr_7 [4] [i_1] [i_1])))))))) != (max((arr_2 [i_1]), (arr_0 [i_0 - 1] [i_1])))));
            }
        }
    }
    var_22 |= ((-(((1152358554653425664 * 1875071760) << (var_14 - 821435295)))));
    var_23 = ((((23 | 18446744073709551614) + var_3)) * var_8);
    #pragma endscop
}
