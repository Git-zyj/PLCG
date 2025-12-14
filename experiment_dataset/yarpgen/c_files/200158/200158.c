/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (max(var_8, 97));
    var_20 = (((var_16 + 2147483647) >> ((min(var_2, var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 *= (((arr_2 [i_0 + 1] [i_1 + 3]) ? ((min((arr_2 [i_0 + 1] [i_1 - 1]), (arr_2 [i_0 + 1] [i_1 - 2])))) : ((+(((arr_6 [i_0] [i_0] [i_2]) | 222058181240192915))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_1 - 3] [2] [i_3] [i_1 - 3] [i_0 + 1] = (-(min((var_3 >= var_6), var_9)));
                                var_22 = (min((arr_9 [i_0 + 2] [i_1 + 1] [i_2]), (arr_9 [i_0 + 1] [i_2] [i_2])));
                                var_23 *= (((((((((arr_2 [4] [i_3]) ? 32767 : (arr_0 [i_4 - 1] [i_4 + 1])))) ? (arr_3 [i_0]) : (((65532 ? var_4 : 4294967281)))))) ? (-var_13 >> var_12) : ((222058181240192915 << (4294967285 - 4294967283)))));
                                var_24 = (((arr_3 [i_0]) - (var_7 + var_6)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
