/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_3 << ((((var_0 | var_11) != 27033)))));
    var_17 = ((-((var_9 ? var_8 : (max(var_4, var_12))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_9 [i_2] [1] [i_2] = ((68 != (((arr_8 [i_1] [i_1] [i_1 - 3]) ? (arr_8 [3] [i_1] [i_1 - 1]) : 38502))));
                        var_18 += (arr_3 [1]);

                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            arr_12 [i_0] [i_2] [i_0] [i_0] [i_0] = (min((((!(arr_2 [i_4 - 1])))), (max(((var_10 ? (arr_8 [i_1] [i_2] [11]) : (arr_8 [i_3] [i_3] [i_2]))), (arr_10 [i_0] [i_1] [i_1] [i_3])))));
                            arr_13 [i_0] [i_0] [18] [i_2] [i_0] [i_0] [i_0] = arr_6 [20] [i_4 + 4] [i_1 - 3] [i_3];
                            var_19 = (max(var_19, (arr_6 [i_0] [i_4 + 1] [i_2] [i_1 + 1])));
                            arr_14 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_11 [11] [i_1] [i_1] [i_2] [2]);
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_20 += ((max(68, (arr_7 [i_0] [i_2] [i_3] [i_5 - 1]))));
                            var_21 = (min(var_21, (((((max((arr_15 [1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1] [i_5 - 1]), ((1510538331 ? -420109683 : 15110739077297047329))))) ? (~var_5) : ((max(24, ((((arr_7 [16] [i_2] [i_2] [12]) != (-9223372036854775807 - 1))))))))))));
                            var_22 -= ((!((((arr_4 [i_0] [i_0] [i_0]) % (arr_4 [i_1 - 1] [8] [i_1 - 1]))))));
                            var_23 = (var_14 % -61);
                        }
                    }
                    arr_17 [i_0] [i_2] [i_2] = (((((((arr_6 [i_0] [i_0] [i_2] [i_2]) ? (arr_4 [20] [i_1] [i_2]) : (arr_0 [1]))))) ? (arr_2 [i_0]) : (arr_2 [i_2])));
                    var_24 = (min(var_24, (((~(arr_5 [18] [18] [i_2]))))));
                }
            }
        }
    }
    var_25 = (min((max((min(var_14, var_1)), var_0)), var_11));
    #pragma endscop
}
