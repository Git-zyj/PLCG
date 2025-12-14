/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] |= (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_17 &= ((!((max(4150746504, 213)))));
                        arr_11 [i_0] [i_0] = (((min((arr_1 [i_3 - 1]), (arr_10 [3] [i_3 + 1] [i_0 - 2] [i_0])))) ? (max((arr_8 [i_3 - 1] [i_2] [i_0 + 3] [i_0 + 2]), (arr_10 [i_3] [i_3 - 1] [i_0 + 1] [3]))) : ((((arr_8 [i_3 + 1] [i_0] [i_0 + 3] [i_0 + 3]) ? 233 : (arr_10 [i_3] [i_3 + 1] [i_0 - 2] [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_18 = ((((var_13 >= 25) < -29147)) ? (arr_8 [i_0 + 3] [i_1] [1] [i_4]) : 74);
                        arr_16 [i_0] = (((arr_15 [i_0] [i_0] [i_0] [i_4]) != 213));
                        arr_17 [i_0] [1] [i_2] = (((max(-5561677906944006565, -29147))) * (max((max((arr_1 [i_0]), var_13)), -6359049164518420908)));
                        var_19 ^= ((~((var_1 * (arr_14 [i_0 + 1] [i_4])))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((((min(44, (((var_11 || (arr_6 [i_0] [i_0] [0])))))))) & (min(((-212877676 ? 1721613043478542610 : (arr_6 [i_0 + 1] [i_1] [i_2]))), (arr_5 [i_1]))))))));
                                arr_22 [i_6] [i_6] &= (min(((((((~(arr_0 [i_5])))) == ((25 ? -8586153525050225078 : (arr_8 [2] [i_5] [i_2] [i_0])))))), var_2));
                                arr_23 [i_0] [i_0 - 1] [i_0] [i_0] [i_5] = (arr_6 [i_0] [i_1] [i_5]);
                            }
                        }
                    }
                }
            }
        }
        arr_24 [i_0 - 2] = (~(-29147 % 1674102549));
    }
    var_21 = var_11;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_22 = var_11;
        var_23 += (34937 ? 4294967295 : 12856661982734203174);
    }
    #pragma endscop
}
