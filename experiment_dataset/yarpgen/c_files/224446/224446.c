/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((1695988670065704693 | ((6580729562159774074 ? 1695988670065704693 : -125))))) ? ((max((!0), 0))) : (var_10 > var_1)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((((max(((((arr_7 [i_0] [i_1] [i_1]) == 12327253108251253389))), (max(var_9, var_10))))) < ((~(arr_8 [i_0] [i_1] [i_2] [i_1])))));
                    var_14 = ((((arr_7 [i_0] [i_1] [i_1]) ? (arr_7 [10] [i_1] [i_1]) : ((409119430395743850 ? (arr_3 [i_1]) : var_0)))));
                    var_15 = ((((min((arr_3 [i_1]), (arr_7 [i_0] [i_0 - 1] [i_1]))) * var_12)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_16 = ((((arr_0 [i_3 + 2]) ^ (((arr_14 [i_3 + 1]) ? (arr_4 [i_3] [1]) : var_3)))));
                var_17 = 1;
                var_18 = 16750755403643846923;
                var_19 = ((((var_3 / (arr_7 [i_3] [i_3] [i_3])))));
            }
        }
    }
    var_20 = (((max(86119898, 140)) / ((var_0 ? (((min(var_5, 1)))) : (max(12846057922684936337, -11351))))));
    var_21 = ((((((!var_1) | (6119490965458298227 | 1)))) && (((-var_5 ? ((max(var_0, 22613))) : var_11)))));
    #pragma endscop
}
