/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_10 = (min((((!((var_6 > (arr_2 [i_0])))))), (arr_1 [8])));
        var_11 = (max(var_11, (((!((!(((var_2 ? 4294967271 : -32755))))))))));
        var_12 = ((+(((arr_1 [i_0]) | (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_12 [1] [i_2 - 2] [i_2] [i_4] = ((min(((4294967266 ? (arr_11 [i_1] [i_3]) : 20)), (arr_8 [i_2] [i_2] [i_2]))));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_16 [i_2] [i_4 - 1] [i_1] [1] [i_2] = ((-((((min(24813, var_3)) > 169)))));
                            var_13 = (arr_9 [1] [i_4] [10] [i_2] [10]);
                        }
                        var_14 = (min(var_14, (((((((-(arr_0 [i_1] [i_1]))))) & ((18446744073709551615 ? ((max((arr_13 [8] [0] [i_1] [i_4 - 1] [i_3]), 1))) : ((32756 | (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]))))))))));
                    }
                }
            }
        }
        var_15 = ((((min(8090506791404647467, (arr_7 [6] [i_1] [i_1])))) ? (((var_7 <= (arr_7 [i_1] [i_1] [i_1])))) : (arr_7 [i_1] [i_1] [i_1])));
    }
    var_16 ^= var_3;
    var_17 = ((((max(10759, 0))) ? var_2 : (((max(var_5, var_7))))));
    var_18 *= (var_0 | 16);
    #pragma endscop
}
