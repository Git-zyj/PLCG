/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_6));
    var_14 ^= (min(949847134, 15115048238657084220));
    var_15 += ((15115048238657084220 ? 15115048238657084220 : var_5));
    var_16 &= (0 != 1344171349);

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_17 = (min(210732400, (((((1 ? 1350630432 : -356065106)) > 2147483621)))));
        var_18 = (min(var_18, ((min((max(80235957, var_8)), ((max(var_5, (arr_0 [i_0])))))))));
        arr_4 [i_0 - 2] [i_0] = (15115048238657084221 && -1);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_19 = ((~((((var_3 > (arr_2 [8] [8]))) ? (var_11 || var_0) : var_11))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_20 = ((1072577620 ? -955548368 : 0));
                        arr_18 [i_1] [1] [i_3] [2] = (max(((2147483611 ? 632391502 : 415813591), -1818849263)));
                        arr_19 [7] [i_2] [6] [i_4] = (((-(!-365945339))));
                        var_21 = 481035845;
                        arr_20 [i_1] = (((var_6 ? (arr_15 [i_3 + 1] [i_3] [i_3 - 1] [2] [10] [10]) : (arr_15 [i_3 + 1] [i_3] [i_3 + 2] [i_3 + 2] [6] [i_1]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
