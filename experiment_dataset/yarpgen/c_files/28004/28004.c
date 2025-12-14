/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((!(arr_3 [i_1 + 1] [i_1 - 3])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = ((((((arr_7 [i_1 + 2] [i_1 + 1] [i_1]) ? (arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 1]) : (arr_7 [i_1 - 2] [i_1 - 1] [i_1])))) * ((((((arr_7 [i_0] [i_0] [i_0]) / -571473452))) / ((var_5 ? (arr_0 [i_4 - 1]) : (arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))));
                                var_16 = (min(var_16, ((max((min(((((arr_10 [i_0] [i_0] [i_0] [i_0]) >> (((arr_7 [i_0] [i_0] [i_0]) + 708810565))))), var_2)), ((((max(4101328140, (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & var_1)) : (((min((arr_2 [i_4] [i_2]), -73)))))))))));
                            }
                        }
                    }
                }
                var_17 = (+(((3332696274610941537 ? (arr_8 [i_1 + 1]) : (arr_3 [i_0] [i_0])))));
                var_18 = (!3332696274610941556);
                arr_13 [i_0] = ((~((((arr_9 [i_0] [i_0] [i_0]) ? 1722795204 : (arr_12 [i_1] [i_0]))))));
            }
        }
    }
    var_19 = var_8;
    #pragma endscop
}
