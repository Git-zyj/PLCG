/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = ((338479422749359009 ? 37 : (arr_4 [i_1] [i_1] [i_1])));
                arr_7 [i_1] = (arr_6 [i_0] [i_0]);
            }
        }
    }
    var_13 = var_9;

    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_14 = (((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_9 [16])));
        var_15 = ((((((arr_10 [i_2]) ? (arr_8 [i_2] [i_2]) : (arr_9 [i_2])))) ? ((((((arr_10 [i_2]) ? (arr_10 [i_2]) : (arr_10 [i_2])))) ? (((arr_9 [i_2]) ? (arr_10 [i_2]) : (arr_10 [i_2]))) : ((2594 ? 0 : -2734)))) : (arr_10 [i_2])));
        arr_11 [i_2] [i_2] = (((arr_8 [i_2] [i_2]) ? (((arr_8 [i_2] [i_2]) ? (arr_10 [i_2]) : (((arr_9 [i_2]) ? (arr_8 [16] [i_2]) : (arr_8 [i_2] [i_2]))))) : (arr_10 [i_2])));
        var_16 = arr_10 [i_2];
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = (arr_12 [i_3] [i_3]);
        arr_15 [i_3] [i_3] = ((((((arr_13 [i_3] [5]) ? (arr_12 [i_3] [i_3]) : (((arr_12 [i_3] [i_3]) ? (arr_13 [i_3] [i_3]) : (arr_12 [i_3] [i_3])))))) ? (((arr_9 [i_3]) ? (((arr_13 [i_3] [i_3]) ? (arr_13 [i_3] [i_3]) : (arr_13 [i_3] [i_3]))) : (arr_13 [i_3] [4]))) : ((((((arr_12 [i_3] [i_3]) ? (arr_13 [i_3] [i_3]) : (arr_13 [i_3] [i_3])))) ? (((arr_10 [i_3]) ? (arr_10 [i_3]) : (arr_8 [i_3] [i_3]))) : (arr_13 [i_3] [i_3])))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = ((-2761 ? (arr_5 [i_4]) : (arr_17 [i_4])));
        arr_19 [i_4] [10] = (((((((((arr_13 [i_4] [i_4]) ? -12529 : -105))) ? (arr_2 [i_4]) : (arr_10 [1])))) ? (arr_10 [1]) : (arr_12 [i_4] [i_4])));
        var_17 = arr_5 [i_4];
        var_18 = (min(var_18, ((((arr_4 [i_4] [1] [i_4]) ? (arr_6 [i_4] [i_4]) : (arr_13 [i_4] [i_4]))))));
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        var_19 = (arr_21 [i_5] [i_5]);
        var_20 = ((arr_8 [i_5] [i_5]) ? (((arr_13 [i_5] [20]) ? -8123266592372776317 : (arr_20 [i_5]))) : (arr_8 [i_5 + 3] [i_5 + 1]));
        arr_23 [i_5] [i_5 - 2] = (((((((((arr_8 [i_5 - 1] [i_5 + 3]) ? (arr_9 [i_5]) : (arr_10 [2])))) ? (((arr_10 [2]) ? (arr_12 [i_5] [i_5]) : (arr_13 [6] [11]))) : (arr_10 [1])))) ? (((0 ? 17 : ((1 ? 78 : 92))))) : ((((((arr_12 [i_5 - 2] [i_5]) ? (arr_10 [2]) : (arr_13 [i_5 + 2] [i_5 - 1])))) ? (arr_8 [i_5 + 1] [i_5 - 1]) : (((arr_12 [i_5] [i_5 - 2]) ? (arr_21 [i_5] [i_5 + 3]) : (arr_22 [i_5])))))));
        arr_24 [i_5] = ((((((arr_9 [i_5]) ? (arr_21 [i_5 + 2] [i_5 + 2]) : (arr_21 [i_5 + 3] [i_5 + 1])))) ? (((arr_9 [i_5 + 1]) ? ((((arr_9 [i_5]) ? (arr_12 [i_5] [i_5 + 2]) : (arr_12 [i_5] [i_5])))) : (((arr_21 [16] [i_5 + 1]) ? (arr_20 [i_5]) : (arr_21 [i_5] [i_5 + 2]))))) : (arr_20 [i_5])));
    }
    var_21 = ((var_11 ? ((var_5 ? (((var_0 ? var_11 : var_7))) : var_0)) : (((var_1 ? ((240 ? -97 : 183606452)) : var_5)))));
    #pragma endscop
}
