/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((min(((((((arr_0 [i_0] [8]) >= (arr_5 [i_0] [i_1] [i_2])))) ^ (((arr_2 [1]) ? (arr_4 [i_0] [i_1 - 3] [i_0]) : 7365)))), -1)))));
                    var_19 = ((-15032385536 ? ((-((min(44955, 20584))))) : (((2409968661283463743 ? 44955 : 1)))));
                    var_20 = ((((max((min((arr_2 [i_0]), var_6)), (max(46363, 0))))) ? (min((0 << 0), 1)) : (arr_7 [i_2] [i_1] [i_0])));
                    var_21 = (arr_7 [0] [0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 = (((1 != 3458764513820540928) - ((var_3 ? (arr_11 [i_0] [i_0]) : (arr_11 [i_0] [i_0])))));
                                var_23 = ((5 ? (arr_3 [i_0]) : ((((~1758864391900721269) < (var_9 || var_16))))));
                                var_24 = ((((((var_14 ? (arr_1 [i_0]) : (arr_9 [i_0] [i_0] [i_4]))))) ? ((((max(0, 61240))) ? (((max(17, (arr_1 [i_0]))))) : (var_10 + 822117847823811349))) : var_5));
                                var_25 = (max(((((arr_7 [i_4] [i_2] [i_1]) << ((((max(var_16, (arr_7 [i_3] [i_2] [i_0])))) - 12689))))), (arr_4 [i_0] [i_0 + 1] [i_1 - 1])));
                            }
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = ((((!(~32767))) ? (arr_8 [i_0] [i_0] [i_0 - 1]) : (208 >= 4019249212444322707)));
        var_26 = (arr_7 [i_0] [i_0 - 1] [9]);
    }
    var_27 = ((((max(var_13, var_15)) - var_15)));
    #pragma endscop
}
