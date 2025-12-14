/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_5));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_11 = ((!(((~((max(var_7, -1))))))));
                        arr_12 [i_2] [i_1] [i_2] [i_2] = var_7;
                        arr_13 [i_0] = (!((!(((~(arr_1 [i_1])))))));
                        var_12 = var_5;
                    }
                    var_13 |= ((((((arr_2 [i_0 + 1]) ? 8 : 9))) ? ((-614847685 ? 20032 : var_6)) : -21));
                    var_14 ^= (-1644786433 ? (((((min(var_6, 1)) + 9223372036854775807)) << (((max(2957168921638285241, var_3)) - 3228057650228822441)))) : (~-32766));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_15 = var_0;
                                var_16 = (max(1, 4294967293));
                            }
                        }
                    }
                    var_17 = ((((min(1539085808, 235))) ? (68 > var_0) : (((~((min(var_1, var_0))))))));
                }
            }
        }
    }
    var_18 = var_5;
    var_19 *= 201;
    var_20 = (((((var_3 - (1 == var_5)))) ? -72 : (((((-1 ? 2123667044928548611 : 9862980206911115627))) ? (((max(var_1, var_1)))) : ((-32760 ? 1 : var_5))))));
    #pragma endscop
}
