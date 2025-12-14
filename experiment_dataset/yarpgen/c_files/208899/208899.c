/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (~(arr_1 [i_0] [i_0]));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_13 = ((((max(((((arr_9 [i_0] [i_0] [i_0] [i_0]) ? var_5 : 209))), (((arr_3 [i_1] [i_2]) ? (arr_6 [i_1] [i_2] [i_3]) : (arr_0 [i_3])))))) ? (((arr_5 [i_0] [i_1] [i_2]) ^ (((arr_4 [5]) << (var_2 - 12396))))) : (arr_11 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0])));
                        arr_12 [i_2] [i_1] [i_1] [i_1] [i_2] [i_1] = ((~(((((((arr_11 [i_0] [i_1] [1] [i_1] [i_2] [i_3]) ? -8192 : (arr_11 [9] [i_1] [9] [i_1] [i_1] [i_1])))) && (((188974144 ? (arr_8 [i_2] [i_1] [i_1] [0]) : 29557))))))));
                    }
                }
            }
        }
        arr_13 [i_0] = (((((1386613481 ? 4105993152 : 4105993152))) ? (((arr_6 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [0] [i_0]) : (arr_6 [i_0] [i_0] [i_0]))) : (((~var_4) ? ((max(var_12, (arr_5 [i_0] [i_0] [i_0])))) : ((var_5 ? (arr_6 [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        var_14 = (min(var_6, -var_0));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_15 = var_12;
        var_16 |= (min((arr_14 [i_4] [i_4]), ((((188974144 + (arr_15 [i_4])))))));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_23 [i_5] = (max(((0 ? (((arr_18 [i_5 + 1] [i_6]) ? (arr_19 [i_5] [i_6] [i_5]) : var_6)) : ((50662 ? 926872625 : var_3)))), 4105993153));
                    var_17 = (max(563560, ((+(max((arr_16 [i_6] [i_5]), -3167619858911429967))))));
                    var_18 = (7718658333866248138 <= 192);
                    var_19 |= (arr_18 [i_7] [i_6]);
                }
            }
        }
        arr_24 [i_5] [i_5] = var_11;
        arr_25 [i_5] [i_5] = var_12;
    }
    var_20 = ((-var_1 ? ((~((1 ? 12 : 15621295005786449551)))) : (var_2 | var_10)));
    #pragma endscop
}
