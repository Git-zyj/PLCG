/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((!(((9223372036854775807 ? (arr_3 [i_0] [i_1]) : 749308436))))))) ^ (arr_3 [i_0] [i_1 - 2])));
                var_20 = (-((255 ? 2147483647 : (arr_0 [i_0]))));
                var_21 = (~1);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 = (((((arr_2 [i_3 + 1]) ? var_5 : (arr_10 [i_0] [i_1 - 2] [i_2]))) * ((((!((((arr_8 [6] [i_3]) ? var_3 : (arr_9 [i_0]))))))))));
                                arr_14 [9] [i_1] [i_1 + 2] [i_3] [i_3] [3] [i_4] = (8038883777590495113 ? (-9223372036854775807 - 1) : (2147483647 == 2147483647));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_23 = (16867397667851370326 ? 2147483647 : 1);
                            var_24 ^= ((!((((((1352718424580249423 ? 201 : 2762385898050101805))) ? 61 : -6182844695471938670)))));
                            var_25 -= (12736789706824415438 == ((max(2147483647, ((-2762385898050101794 ? 58324 : 9179836175630223091))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = ((((var_5 ? (~26) : ((11908282859696133006 ? -2147483647 : 2645598600209962553)))) - ((((var_9 ? 7831224964766694375 : var_5))))));
    #pragma endscop
}
