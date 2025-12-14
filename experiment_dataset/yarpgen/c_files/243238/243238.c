/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max((~-882699218), 64680))) ? (var_9 | var_5) : -882699235));
    var_18 = -119;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    arr_9 [i_2] [i_2] [i_2] [i_2] = (arr_6 [i_0] [21] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] = ((9223372036854775807 ^ (~3599724097)));
                                var_19 = (-8650 || 216);
                            }
                        }
                    }
                    arr_18 [i_0] [i_2] [i_0] = (((((arr_7 [i_2] [i_2] [i_2]) | (arr_6 [i_0] [i_1] [i_1] [i_2]))) * ((var_10 ? (arr_6 [i_0] [i_1] [i_0] [i_2]) : -8650))));

                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        arr_22 [i_2] = (arr_8 [i_5 - 1] [i_1] [i_2] [i_2 + 2]);
                        var_20 = (18220685183753703727 ? 0 : -1);
                    }
                }
                arr_23 [i_0] = (((arr_3 [i_1]) ? ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) || (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((arr_3 [i_1]) & ((min(1, (arr_15 [i_0]))))))));
                arr_24 [i_0] [i_0] = (((((-115 ? ((-(arr_21 [1] [i_1] [1] [i_1] [1] [1]))) : ((((arr_8 [i_0] [i_0] [i_1] [i_0]) <= (arr_4 [i_0] [i_0] [i_0]))))))) & (((((arr_4 [i_0] [i_0] [i_0]) ? var_5 : -17)) - ((min((arr_7 [i_1] [i_1] [i_1]), -882699235)))))));
            }
        }
    }
    #pragma endscop
}
