/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((var_8 == ((var_4 ? var_5 : var_5)))), 1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
                            {
                                var_18 = (var_12 / (var_13 + -3910644495));
                                arr_10 [i_4 + 1] [i_3 + 2] [i_3] [i_3] [i_1] [i_0] = ((!((((((4414198269304770821 ? 6307793047017430635 : 1))) ? (arr_6 [i_3 + 2] [i_3] [i_3] [i_0 - 1]) : (min(var_12, (arr_5 [i_1] [i_1] [i_0]))))))));
                            }
                            for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
                            {
                                var_19 = (((((((arr_11 [i_5 + 1] [i_3] [2] [i_3] [i_0 - 1]) ? var_9 : 65535))) ? (max(3910644495, -8470053562656745656)) : 26)));
                                var_20 = (max(var_20, (((105 <= (max((min(var_15, 2098662821535470644)), (arr_12 [i_1] [i_3 - 2] [i_2] [i_1] [i_1]))))))));
                                var_21 = (((max((((arr_0 [i_3] [i_1]) ? var_12 : (arr_4 [7]))), 1))) ? (max(384322800, ((((arr_7 [i_3] [i_3 - 3] [i_1] [i_3]) ? 1 : 35284))))) : ((((arr_9 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_3 - 3] [i_2] [i_1] [12]) ? (arr_0 [i_5 + 1] [i_1]) : (65535 >= 1)))));
                            }
                            var_22 = ((var_12 ? ((641888821 ? 1 : 6329421776317296800)) : 233));
                        }
                    }
                }
                var_23 += var_3;
                arr_13 [i_1] [i_0 - 1] [i_0] |= max((arr_12 [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1]), var_12);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_24 = (max(18446744073709551615, 1));
                            var_25 += (!var_15);
                            var_26 = var_2;
                            var_27 = (min(var_27, ((max(var_8, (((1 - (arr_11 [i_7 - 1] [i_7] [i_1] [i_7] [i_0 + 1])))))))));
                            arr_21 [i_7] [i_6] = ((30251 ? 9223372036854775796 : 0));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
