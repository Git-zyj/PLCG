/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 *= ((var_4 ? ((max(var_5, var_2))) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (max(((max((arr_3 [11] [i_1] [i_2 - 1]), (max((arr_9 [i_2] [i_1] [i_2] [i_3] [1] [i_1]), var_8))))), (min((((4294967291 | (arr_9 [i_2] [i_1] [3] [i_3] [i_4] [i_4])))), 18446744073709551604))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] = (!19971);
                                arr_13 [i_2] [i_3] [1] [i_1] [i_0] [i_0] [i_2] = (min((max((arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_4]), ((var_0 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_0 [i_0] [8]))))), (min((arr_7 [i_2 + 1] [i_2] [i_2] [i_2 + 1]), (arr_7 [i_2 - 1] [i_2] [i_3] [2])))));
                            }
                        }
                    }
                    var_17 = arr_8 [1] [i_1] [1] [1] [i_1];
                    var_18 = (((arr_10 [8] [i_1] [i_2]) < ((((min((arr_6 [i_0] [i_1] [i_2]), 41318))) ? (~var_13) : ((((arr_2 [i_0]) << 1)))))));
                }
                arr_14 [1] [i_1] [i_1] = ((6 ? ((-(((arr_10 [1] [i_1] [i_1]) ? (arr_6 [i_0] [i_1] [i_1]) : 32766)))) : ((((((arr_6 [i_1] [i_1] [i_0]) ? var_5 : (arr_8 [i_0] [i_1] [4] [5] [i_1]))) * var_10)))));
            }
        }
    }
    #pragma endscop
}
