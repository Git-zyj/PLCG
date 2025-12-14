/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_15));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_17 = ((!(((-(min((arr_1 [i_0]), (arr_2 [19]))))))));
        var_18 = (min(var_18, 7));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 -= (min((28005 ^ 18446744073709551615), (min((arr_5 [i_0 + 1] [i_0 + 1]), -14201240073923530507))));
                    var_20 = ((4294967295 & (arr_1 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((+(((arr_12 [i_0 - 1] [i_0 - 1] [6] [i_0] [0]) ? (arr_4 [i_4]) : (arr_5 [i_2] [i_1]))))))));
                                var_22 ^= ((((((arr_14 [i_3] [1] [i_3 + 1] [i_3] [i_3]) >= (arr_7 [i_3 + 1] [i_3 + 1] [i_2] [i_2])))) ^ ((((((-(arr_12 [i_0] [i_0] [i_2] [i_2] [i_2])))) == (var_4 ^ 32331))))));
                            }
                        }
                    }
                }
            }
        }
        var_23 = (min(var_23, var_2));
    }
    #pragma endscop
}
