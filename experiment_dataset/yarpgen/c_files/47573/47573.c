/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (((((7099450841785387108 ? 811160567 : 0))) ? 45398 : (max(4194302, 45401))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_10 &= ((-((min((!1), (min(var_6, (arr_4 [i_3] [i_3] [i_3]))))))));
                            arr_14 [16] [i_1] = (((arr_5 [i_2 + 2] [i_2] [i_2 - 1]) ? (arr_8 [i_2] [i_1] [i_2 - 1] [i_2 + 1]) : ((((arr_5 [17] [i_2] [i_2 - 1]) && (arr_8 [i_2] [i_1] [i_2 - 1] [i_2]))))));
                            arr_15 [i_0] [i_1] [i_2] [i_0] [i_1] &= ((((~(((arr_10 [i_3]) << (var_2 - 47181))))) > (((~1) ? 0 : (arr_5 [i_0] [i_0] [i_0])))));
                            var_11 = (min(var_11, (arr_10 [i_2])));
                        }
                    }
                }
                arr_16 [i_0] [i_0] [i_1] = (((((-(arr_2 [i_0] [i_1 + 2])))) ? (((0 ? 65532 : 60077))) : (min((arr_11 [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1] [i_1 - 1]), (arr_5 [i_0] [i_1 + 1] [i_1 + 1])))));
            }
        }
    }
    var_12 = ((-(max((~var_1), (!var_1)))));

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_13 = (!var_9);
        var_14 = (min(var_14, ((((((min(var_0, 240)))) || ((min(((max((arr_0 [i_4] [i_4]), (arr_10 [i_4])))), ((var_6 ? (arr_1 [i_4]) : var_2))))))))));
        arr_19 [i_4] = ((var_5 ? ((~(((arr_9 [i_4] [8] [i_4]) ? (arr_17 [i_4] [i_4]) : (arr_10 [18]))))) : var_4));
        var_15 = ((((((arr_18 [i_4]) ? (!-12629) : (arr_1 [i_4])))) | (min(((min(1, 210))), (~var_7)))));
    }
    #pragma endscop
}
