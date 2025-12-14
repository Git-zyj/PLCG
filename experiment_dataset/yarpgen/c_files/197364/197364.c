/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((638399900348545107 >= 11418760476640490292) >> (17808344173361006509 - 17808344173361006495)))) ? var_10 : (((((7027983597069061323 ? 11418760476640490292 : var_1))) ? ((var_8 ? var_6 : var_8)) : (~-2050312512)))));
    var_14 = var_8;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_15 = ((((max(3669875227280297346, (arr_3 [i_0 - 2])))) || (((~(arr_3 [i_0 - 2]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = ((((max(-2566790931927818461, 7))) ? ((((arr_7 [i_0] [i_1] [i_1] [i_0]) && ((((arr_8 [i_0] [7] [i_1]) ? (arr_5 [i_1] [i_1] [2]) : (arr_6 [i_1] [i_1] [i_2]))))))) : 1));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = (arr_3 [i_0]);
                    var_17 = (max((((min((arr_5 [i_0] [i_0] [i_0]), var_5)) * (max(4294967295, 53714)))), (((~(arr_6 [i_1] [i_0 - 2] [i_1]))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_14 [i_3] = ((((arr_11 [i_3] [i_3]) ? (arr_11 [i_3] [i_3]) : 4294967295)));
        arr_15 [i_3] = (((~(arr_12 [i_3]))));
    }
    var_18 = (max((max(((-43 ? var_8 : 1)), var_4)), ((max(var_0, var_7)))));
    #pragma endscop
}
