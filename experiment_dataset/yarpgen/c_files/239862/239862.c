/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = (((~var_7) < 11963));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 ^= (((~(arr_11 [i_3 - 2] [0] [i_3] [i_3 - 1] [i_3 - 3]))));
                                var_14 = min(((~((var_1 ? (arr_11 [i_0] [i_0] [i_2] [8] [i_4]) : (arr_0 [i_0]))))), -759072493205530914);
                                arr_14 [6] [i_1] [i_1] [9] [i_1] [12] = ((-1728248264 ? -1728248264 : -1809340839));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_18 [i_1] [i_2 + 2] [14] = (((((((((arr_9 [i_0] [6] [i_0] [i_0]) >> (var_2 - 353697252)))) ? ((max(var_0, 956470262))) : (min(var_0, 3864581395501497108))))) / ((min((arr_0 [i_0]), (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                        var_15 = (max(var_15, (((((min(((16252928 ? 2190506717 : 8262)), (arr_12 [i_0] [i_1] [i_2])))) ? (min((arr_17 [12] [i_2 + 1] [i_0] [6] [i_0] [i_0]), (arr_17 [i_2] [i_2 + 2] [5] [i_0] [9] [i_0]))) : ((((arr_8 [12] [4]) ? ((-1728248250 ? (arr_6 [i_0] [16] [i_2] [i_5]) : -1809340839)) : 1123422781))))))));
                        var_16 ^= (min((((arr_3 [i_2 - 1]) ? (arr_0 [i_2 - 1]) : 4075453660)), (min((arr_5 [i_2] [i_2] [i_2 + 1] [i_2]), (17486626121945385948 * -145431088)))));
                        var_17 = (((min((arr_6 [16] [i_2 - 1] [i_2] [i_5]), (arr_10 [8] [i_2 - 3] [i_2 - 3] [i_5]))) < (((arr_6 [i_0] [i_2 - 2] [i_0] [1]) ? (arr_10 [i_0] [i_2 + 1] [i_2 + 1] [i_5]) : (arr_6 [i_0] [i_2 + 1] [13] [i_5])))));
                    }
                }
            }
        }
    }
    var_18 = (((((((-56 + 2147483647) << (((-759072493205530915 + 759072493205530928) - 13))))) ? var_1 : var_5)));
    #pragma endscop
}
