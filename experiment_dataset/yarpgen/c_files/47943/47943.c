/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(0, (min(70368744177663, ((var_3 ? var_10 : 268435455))))));
    var_21 = var_7;
    var_22 = ((var_11 ? (var_5 || var_6) : (var_6 | 7316451329558152912)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_18 [i_4] [i_4] [i_3] [i_2 - 2] [i_1] [i_0] = (((arr_0 [i_1 + 1] [i_2 + 3]) ? (~var_10) : ((~(max((arr_16 [i_4] [i_3] [i_2] [i_1] [i_0]), (arr_0 [i_0] [i_0])))))));
                                var_23 = ((((arr_15 [i_2 + 3] [i_2] [i_2 + 2] [i_2 - 3]) ? 255 : (arr_15 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 2]))));
                                var_24 = (255 < 4407051447053840410);
                            }
                        }
                    }
                    var_25 = (min(3556614901, ((738352394 ? (arr_13 [i_1 - 1] [i_1] [i_2 + 4] [i_2]) : (min(var_8, 738352396))))));
                    arr_19 [i_0] [i_1] [i_2] = (!(((((min(var_7, 738352416))) ? ((65517 ? var_14 : 1925479349)) : (-1925479336 ^ -1)))));
                    var_26 = var_6;
                }
            }
        }
    }
    #pragma endscop
}
