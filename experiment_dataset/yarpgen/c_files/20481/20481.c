/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = ((((max((1 ^ var_6), ((((arr_7 [1] [1] [6]) <= 0)))))) ? (((max((((arr_6 [i_0] [18] [i_2] [1]) || (arr_0 [i_2] [i_0]))), (((arr_6 [i_0] [20] [i_2] [i_2]) || (arr_2 [20]))))))) : (43640 | 18446744073709551615)));
                    var_19 = ((((((((arr_2 [i_1]) || 228401732))) >> ((((max((arr_7 [21] [13] [21]), (arr_7 [11] [11] [11])))) - 97))))) ? ((((((arr_0 [1] [1]) - var_13))) ? (var_9 <= 15863459740958067960) : ((min((arr_2 [i_0]), 47856))))) : (max((((arr_3 [i_0] [i_1]) ^ (arr_2 [i_0]))), (47856 - 47858))));
                    var_20 = ((((max(2823559558, 0))) ? (56 <= 0) : ((1 ? var_11 : (arr_1 [i_0 + 2] [i_1 - 3])))));
                }
            }
        }
    }
    var_21 = (min(var_21, (min(((var_8 ? (max(var_16, 2823559558)) : (var_1 >= 1))), (((18446744073709551602 && (192 | 228))))))));
    var_22 = (max(((((var_8 ? 1058230667353806781 : -1082782366)) ^ (60 == -1928451982))), ((max(var_17, var_9)))));
    var_23 = var_0;
    #pragma endscop
}
