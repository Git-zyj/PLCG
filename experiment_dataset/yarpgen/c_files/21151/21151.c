/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = var_8;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((13 ? (~30) : ((134217727 ? 4240507229324903101 : 18446744073709551615))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] = (((arr_8 [i_0] [i_0] [i_0]) ? (arr_8 [i_1] [i_1] [i_1]) : (arr_8 [i_0] [i_0] [i_0])));
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_0]);
                    }
                    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_0] &= (-176641581712340868 | 1);
                        var_10 = (min(var_10, ((((1 < 134217730) << (((((arr_3 [i_0]) ? (min(-16439, (arr_18 [i_0] [i_0] [i_0] [i_0]))) : ((((arr_5 [i_0] [i_0]) ? 0 : (arr_12 [i_0] [i_0] [i_0] [i_0])))))) - 12314085301613763981)))))));
                    }
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_2 [i_1 + 1] [i_5 + 2]) <= (arr_2 [i_1 + 1] [i_5 - 1])));
                        arr_24 [i_2] = max((arr_12 [i_5 + 2] [i_1 - 1] [i_1] [i_1]), (((arr_12 [i_5 + 2] [i_1 - 1] [i_1] [i_1]) ? var_9 : (arr_12 [i_5 + 2] [i_1 - 1] [i_1] [i_1]))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] = (((((-((min(1, 1)))))) ? (((((max((arr_2 [i_0] [i_0]), var_2)))) - (arr_18 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2]))) : ((var_0 ? 1 : (arr_13 [i_1 - 1] [i_5 + 2] [i_1 - 1] [i_1 - 1])))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] = 4240507229324903123;
                    }
                    var_11 = (max(var_11, (((1 ? (arr_8 [i_0] [i_0] [i_0]) : ((2295350309 >> (4160749565 - 4160749546))))))));
                }
            }
        }
    }
    var_12 = var_2;
    var_13 = (!4681055263722983108);
    var_14 = 13;
    #pragma endscop
}
