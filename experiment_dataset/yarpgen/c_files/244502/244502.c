/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_8 > -907172209) || var_2))) + (var_0 && 1));
    var_18 = (max(var_18, (((3458210592 ? var_14 : ((((var_15 * 0) > var_11))))))));
    var_19 = (min((((~(!var_14)))), var_10));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 = (!-1300676960);
        var_21 = (min(var_21, 0));
        arr_3 [i_0] = (i_0 % 2 == 0) ? ((max((min(((max(0, (arr_1 [i_0])))), (((-127 - 1) & (arr_2 [i_0] [i_0]))))), (((arr_2 [i_0] [i_0]) >> (4833197162497858357 - 4833197162497858330)))))) : ((max((min(((max(0, (arr_1 [i_0])))), (((-127 - 1) & (arr_2 [i_0] [i_0]))))), (((((arr_2 [i_0] [i_0]) + 2147483647)) >> (4833197162497858357 - 4833197162497858330))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (arr_4 [i_0] [1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_22 = ((~(((arr_4 [i_0] [i_2 + 1] [i_0]) ^ (arr_4 [i_0] [i_2 + 1] [i_0])))));
                                var_23 = ((0 << ((((((arr_4 [i_0] [i_0] [1]) < var_5))) * ((min(0, 53843)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((max(((min(1300676960, (arr_14 [i_0] [7] [i_0]))), (4346513879431629948 / var_10)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        var_24 = (arr_16 [i_5 - 2] [i_5 - 1]);
        arr_19 [i_5] = ((arr_16 [i_5] [i_5]) << 1);
    }
    var_25 = (max(var_14, ((((min(14753004545230082246, 0))) ? 105 : 0))));
    #pragma endscop
}
