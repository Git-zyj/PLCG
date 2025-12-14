/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min((max((((arr_1 [i_0] [i_0]) ? 7485090941951279377 : 1617119199)), (((var_1 ? 1617119199 : (arr_2 [i_0] [6])))))), (((((max((arr_0 [i_0]), (arr_3 [i_0])))) < var_5)))));
        arr_5 [i_0] = -7485090941951279377;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (i_1 % 2 == 0) ? ((((((arr_3 [i_1]) + 2147483647)) << (((((arr_3 [i_1]) + 42)) - 6))))) : ((((((arr_3 [i_1]) + 2147483647)) << (((((((((arr_3 [i_1]) + 42)) - 6)) + 90)) - 23)))));
        arr_9 [i_1] = ((((arr_7 [i_1]) || -1128907989)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_21 += (arr_0 [0]);

        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_22 = (arr_20 [i_3 + 1] [i_3 + 1] [i_5] [i_4] [i_4 + 3] [i_4 + 1]);
                            var_23 ^= 96;
                            arr_22 [i_2] [i_5] [i_4 - 2] [i_2] [i_2] = ((arr_3 [i_2]) ? (((arr_2 [i_2] [i_2]) | var_10)) : -608350686);
                            arr_23 [i_2] [i_3] [i_3 - 1] [i_2] [i_3] [i_3] [i_2] = arr_17 [i_2] [i_2] [i_2] [i_2];
                            arr_24 [i_2] [i_3 + 1] [i_4] [i_2] [i_6] = (arr_16 [i_4 - 2] [i_4 + 1] [i_2] [i_4]);
                        }
                    }
                }
            }
            var_24 ^= (((arr_16 [i_3 + 1] [i_3 + 1] [6] [i_3 + 1]) << (((arr_16 [i_3 + 1] [i_3 + 1] [8] [i_3 + 1]) - 211))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            arr_35 [1] [i_7] [i_8] [i_8] [i_9 - 1] [i_2] [i_9 - 1] = (arr_1 [i_9 - 1] [i_9 - 1]);
                            var_25 = (arr_29 [i_9 - 1] [i_9 - 1] [i_9 - 1]);
                            var_26 = var_17;
                        }
                    }
                }
            }
            arr_36 [i_2] [i_2] [i_7] = var_7;
        }
        arr_37 [i_2] = (((arr_12 [i_2] [i_2] [i_2]) >= (arr_12 [i_2] [i_2] [i_2])));
    }
    var_27 ^= ((!((2147483627 || ((min(var_7, var_11)))))));
    #pragma endscop
}
