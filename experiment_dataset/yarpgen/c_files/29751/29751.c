/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_7 || (!var_7)));
    var_12 = (min(var_12, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_1;
                arr_7 [i_1] [i_1] [i_1] = ((~(max((var_6 & var_7), (arr_2 [i_0] [i_1])))));

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    var_13 = (-var_3 & 9223372036854775798);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] = -9223372036854775807;
                                arr_16 [i_1] [i_1] [i_3] [i_1] = (max((((-30271 ? (arr_13 [i_0] [i_1] [i_2] [i_0] [i_2]) : ((76 ? 5 : 4123168604160))))), (var_2 * -105)));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_19 [i_1] [i_1] = (arr_12 [i_0] [i_1] [i_5] [i_5]);
                    var_14 += ((!((max(var_4, -4123168604160)))));
                }

                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    var_15 -= ((-(((arr_9 [i_6] [i_6] [i_6] [i_6]) ? var_0 : (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6 - 1])))));
                    var_16 = (min(var_16, 41564));
                    var_17 = (((((var_0 ? var_7 : 1)) ? (min(9223372036854775798, (-9223372036854775807 - 1))) : var_10)));
                    arr_23 [i_1] [i_6] [i_1] [i_0] = ((max((arr_9 [i_0] [i_0] [i_6 - 1] [i_0]), 230)) | (~var_10));
                }
            }
        }
    }
    #pragma endscop
}
