/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((30698 >> (-108 + 108)));
    var_20 = var_11;
    var_21 = (((((!(0 | var_11)))) & var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_22 = (min((((!(arr_7 [i_0 + 1] [i_0])))), (((arr_7 [i_2] [i_0]) ? -17783977288008944666 : -16992))));
                            var_23 = (max(var_23, ((-3871947215 ? (min((arr_0 [i_0 + 2]), -1908047258)) : ((var_12 ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2])))))));
                            arr_13 [i_0] [i_1] [i_0] [i_0] = (max((((var_1 ^ (arr_4 [i_1] [i_0])))), 9223372036854775799));

                            for (int i_4 = 2; i_4 < 13;i_4 += 1)
                            {
                                arr_16 [i_0] [i_0] [9] [0] = var_7;
                                var_24 = (min(var_24, (arr_7 [i_2] [i_4])));
                            }
                        }
                    }
                }
                var_25 = (min(var_25, (arr_10 [i_0] [1])));
                var_26 -= ((~(arr_8 [1] [1])));
            }
        }
    }
    #pragma endscop
}
