/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_3, 39624));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((!((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
                    var_17 = (+((((arr_4 [15] [i_1] [i_0]) ? (arr_1 [i_0]) : 4294967295))));
                    arr_7 [i_2] [15] [i_2] [i_2] = (max((((((4294967295 ? var_9 : (arr_0 [6])))) ? 4294967295 : 13)), 55323145));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        var_18 = (min(var_18, (((-(arr_2 [i_0 + 2] [i_3 - 1] [i_3]))))));
                        arr_11 [i_2] [i_2] [i_1] [i_2] = (((arr_0 [i_0]) ? (((arr_0 [i_0]) ? 3 : var_12)) : (arr_8 [i_0] [i_1] [i_2])));
                        arr_12 [i_2] [i_2] [i_2] = ((arr_1 [i_3 + 1]) ? var_3 : (arr_10 [10] [i_3] [i_2] [i_3] [i_3 - 2] [i_0]));
                        var_19 = (((arr_1 [i_0 + 1]) ? (arr_0 [i_0 + 2]) : 18446744073709551615));
                        var_20 = (min(var_20, (((arr_5 [i_0] [i_0]) ? (arr_2 [i_0 - 2] [i_2] [i_3 - 2]) : 3094440761))));
                    }
                    var_21 ^= ((((max((min(0, 16)), (max(var_13, 55323140))))) ? var_14 : (min((max(4239644181, var_0)), (arr_0 [i_0 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}
