/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 1));
    var_20 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (((~0) ? (arr_0 [i_1 - 2] [i_1 - 1]) : (min((arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 1]), (arr_0 [i_1 - 2] [i_1 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_14 [i_2] = ((~((((min(-1148183634, (arr_5 [i_3])))) ? ((((arr_9 [i_0] [i_1 + 2] [i_2]) <= (arr_10 [i_0] [i_0] [i_0] [i_0])))) : ((0 ? -5919 : 1))))));
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] = (max(((((arr_4 [i_1] [i_1 + 2] [i_1]) ^ (arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 1])))), (min(0, 13501397380070443580))));
                            var_22 = 151316975;
                        }
                    }
                }
                var_23 = (max(var_23, (((((min((arr_12 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_0]), 8160))) && (arr_12 [i_1 - 2] [i_1] [i_1] [i_1 - 2] [i_0] [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_24 = 4143650320;
                            var_25 = (((9837257737125911198 != -15716) + (((!((((arr_25 [i_4]) ? 4143650338 : 1587984416))))))));
                            arr_26 [i_4] [i_5] [i_7] = (((~var_18) < ((((((-(arr_20 [i_4] [i_5] [i_7]))) != (~-1274801187)))))));
                            arr_27 [i_7] [i_6] [i_5] [i_4] = 11137586112352103236;
                        }
                    }
                }
                var_26 = 1;
                arr_28 [i_4] [i_5] [i_5] = ((~(((arr_23 [i_4]) ? 4945346693639108036 : (arr_23 [i_4])))));
                arr_29 [i_4] [i_5] = max((arr_22 [i_4] [i_5] [i_5]), (((~(arr_17 [i_4] [i_4])))));
            }
        }
    }
    var_27 = var_3;
    #pragma endscop
}
