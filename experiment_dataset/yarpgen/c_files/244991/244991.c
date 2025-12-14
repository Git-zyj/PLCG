/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((((((max(var_10, var_11)))) == var_4))), 65535));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_21 *= (arr_0 [i_0 + 1] [i_0 - 3]);
        var_22 = ((!(((arr_1 [i_0]) != (arr_0 [i_0] [i_0])))));
        var_23 &= (arr_1 [i_0 - 3]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        var_24 &= (min((max(((~(arr_12 [i_1] [i_2] [i_3]))), -var_11)), (arr_15 [i_1] [i_1] [i_1] [i_3] [i_4] [2])));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_25 ^= ((max(var_5, (((~(arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                            var_26 = (max((!var_5), var_1));
                            arr_18 [i_1] [i_2] [i_3] [i_1] [0] |= ((!((((arr_13 [i_1] [i_5] [i_3] [i_1] [i_5]) ^ var_4)))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_27 = (((((arr_9 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1]) ^ (arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))) >= (((arr_19 [i_4 - 1] [9] [i_4] [i_4 - 1] [i_4 - 1]) ? (arr_19 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_19 [i_4 - 1] [i_3] [i_3] [i_3] [i_3])))));
                            arr_23 [i_2] [i_2] [i_2] = ((65535 ? (~9223372036854775807) : 21500));
                            arr_24 [i_1] |= ((~(((!(arr_2 [i_1]))))));
                        }
                    }
                }
            }
        }
        arr_25 [i_1] = (max((arr_3 [i_1]), (arr_9 [i_1] [i_1] [i_1] [i_1])));
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            {
                var_28 = ((~(524287 < -4195532628429506678)));
                arr_31 [i_7] = (((!65535) * (max((arr_30 [i_7 + 3] [1]), (arr_30 [i_7] [i_7])))));
            }
        }
    }
    var_29 = var_4;
    #pragma endscop
}
