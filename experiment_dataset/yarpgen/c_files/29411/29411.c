/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (min((var_0 / var_4), ((min((!233), 540283446)))));
    var_16 = (max(18446744073709551600, ((var_14 ? var_2 : (24576 - 7242001004150094653)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_1] = (max((arr_4 [i_1]), (arr_4 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_17 ^= (((((!(-9223372036854775807 - 1))) ? ((0 ? 18446744073709551593 : (arr_9 [i_3] [i_0] [i_1] [6] [i_3]))) : 3563358087)) != (((54 + ((max(var_7, 1)))))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = (max((max(0, 2565468860)), (((0 + (!2803537539))))));
                                var_18 = (max(var_18, (((+(max((arr_1 [i_2 + 2] [i_2 - 1]), (arr_9 [i_3] [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 1]))))))));
                                var_19 = ((((((((arr_2 [i_3] [i_3]) ? 1 : 1)) * (min((arr_6 [9]), -1669741860))))) && ((max(((min(-452662739, (arr_6 [i_0])))), 11241438948490020371)))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                arr_17 [i_1] [10] [i_3] [i_1] = (arr_8 [i_0] [i_1] [i_5]);
                                arr_18 [i_1] [9] [i_0] [i_1] [i_2] [i_0] [i_1] = max(((max(((var_10 / (arr_14 [i_1]))), (arr_1 [i_2 + 1] [i_2 + 2])))), (arr_7 [i_0] [i_2 - 1] [i_3]));
                                arr_19 [i_0] [i_1] [i_1] [i_2 + 2] [i_1] [i_5] = (min((((-882455427 * (arr_9 [i_1] [i_1] [i_2 + 2] [i_3] [i_5])))), ((((2801794857 ? (arr_14 [i_3]) : 32)) - -2057005425))));
                            }
                        }
                    }
                }
                var_20 = (max(((+(((arr_9 [i_1] [i_0] [i_1] [1] [i_1]) * 0)))), (((((((arr_4 [i_1]) > 18170))) + 1)))));
            }
        }
    }
    #pragma endscop
}
