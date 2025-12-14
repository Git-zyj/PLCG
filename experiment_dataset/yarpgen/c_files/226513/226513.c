/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((min((min(15, 813983112)), (((21299 >> (var_1 - 1642083724)))))), ((min((~-21292), -13666)))));
    var_15 = 268427264;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] &= ((!((min(5460, (max((arr_5 [i_1]), 21290)))))));
        var_16 = ((0 ? (((!(((-(arr_4 [i_1] [i_1]))))))) : (~1)));
        var_17 = (arr_4 [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {

                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_23 [i_2] [i_3] [i_3] [i_4 + 1] [i_4] [i_5] [i_4 + 1] = max((((~18446744073709551615) ? (arr_8 [i_2] [i_6 - 1]) : -2147483647)), 950705096454692981);
                                arr_24 [i_2 + 1] [9] [9] [i_2 + 1] [12] [i_3] [i_2 + 1] = 40940;
                                var_18 = ((-9522 ? ((max(((24604 ? (arr_14 [i_2] [1]) : 1)), 0))) : ((min(1, 0)))));
                                arr_25 [i_2] [i_2] [i_2 + 1] [i_2] [i_3] = (((21149 ? ((60 >> (159 - 129))) : 1111449201)));
                            }
                        }
                    }
                    var_19 = (min(var_19, (arr_6 [7])));
                }
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    var_20 = (min(var_20, ((min(4, -4)))));
                    arr_29 [i_3] [12] = ((((9223372036854775788 << (((((-1 | 1) + 55)) - 54)))) > 1));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_21 = ((!((((~5) ? -11167 : (((-114 ? 1 : -1111449201))))))));
                                arr_36 [i_7] [i_7] [i_3] = (min(((-(((-32767 - 1) ? -13666 : 8)))), ((max((arr_13 [i_2] [i_2 + 1]), (arr_4 [i_2] [i_8 + 1]))))));
                                arr_37 [i_3] [i_3] = (max((arr_10 [i_8] [i_9]), (min((max((arr_19 [i_2] [i_2] [i_2] [i_8 - 2] [i_9 - 3]), (arr_6 [i_2 - 1]))), ((((arr_0 [i_2 - 1]) - -684)))))));
                                var_22 = 109;
                            }
                        }
                    }
                    var_23 = ((((((arr_34 [7] [i_3 - 3] [7] [i_2] [i_7]) ? 735654853 : 13708622709337648966))) ? -30034 : (min(0, (max(1, 1233325037967391877))))));
                }
                var_24 = ((!((min((arr_21 [i_2] [i_3]), -735654856)))));
            }
        }
    }
    #pragma endscop
}
