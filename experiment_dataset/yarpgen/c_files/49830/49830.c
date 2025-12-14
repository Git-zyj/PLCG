/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((var_2 ? ((-25550 ? var_3 : var_5)) : -var_1)), ((var_8 ? ((max(-89, 251))) : (var_4 == 51)))));
    var_13 = (max(-123, 96));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 += ((max((max(131, 120)), (arr_0 [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_9 [i_3] [i_3] = (var_1 >= 1);

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            arr_12 [i_3] = (min(25557, -128));
                            arr_13 [i_0] [i_4] [17] [i_4] [i_3] = ((((5 >> (var_4 - 48))) != (arr_5 [4])));
                            arr_14 [i_0] [i_4 + 1] [i_0] [i_0] [i_4 + 1] [i_3] = var_5;
                            var_15 = max((((arr_0 [i_0]) * ((((arr_6 [i_3]) > var_9))))), ((205 ? ((131 ? var_8 : (arr_8 [i_4 + 1] [i_1] [i_1]))) : ((81 ? 240 : var_3)))));
                            var_16 = (max(var_16, (((((-((188 ? 131 : var_4))))) ? ((~((max((arr_6 [i_0]), 255))))) : (((((124 ? var_0 : 13)) > (var_3 ^ -81))))))));
                        }
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            var_17 &= ((((max((arr_15 [i_5] [i_5 + 2] [i_5] [i_5] [i_5 + 1] [i_2]), (arr_15 [i_5 + 1] [i_5 + 1] [i_0] [i_5 + 1] [i_5 + 1] [i_0])))) ? 34586 : 114));
                            var_18 -= ((((max(var_1, (max(32736, 58))))) ? (~33790) : var_2));
                            arr_17 [i_0] [i_3] [i_2] [i_3] [i_5] = ((((max(((((arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] [i_5 - 1]) || var_1))), var_11))) & 238));
                            arr_18 [i_5] [i_1] [i_3] [i_1] [i_2] = max(106, ((max(1, 195))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            var_19 = (!217);
                            arr_21 [i_0] [i_1] [i_3] = (((arr_16 [i_6 - 1] [i_6 - 1] [i_6 + 1]) ? 32811 : -57321));
                            var_20 = var_8;
                        }
                        var_21 = (min(var_11, (((((max((arr_4 [i_2] [i_2]), 0))) || ((max(137, 1))))))));
                        arr_22 [i_2] [i_3] [7] [i_1] [i_3] [i_0] = 4;
                    }
                }
            }
        }
        var_22 = ((-(min(var_0, var_8))));
    }
    #pragma endscop
}
