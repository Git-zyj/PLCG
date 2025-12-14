/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;
    var_13 = ((((!(((212 ? 85 : 111))))) ? ((-108 ? ((min(-78, 13096))) : var_9)) : ((((-97 || var_6) || (((4345668706142393117 ? var_1 : var_7))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((var_1 != ((var_4 ? 0 : 18446744073709551607))));
        arr_4 [i_0] = var_10;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_14 = (max(-79, 11257046460935164888));
                                arr_16 [i_1] [i_2 - 2] [i_3] [i_4] [i_5] = ((((((((arr_6 [i_5]) / 45))) || ((max((arr_6 [i_1]), var_10))))) ? (((((-78 >= (-127 - 1)))) * (arr_12 [i_1] [i_2] [8] [i_2]))) : (arr_9 [i_5])));
                                var_15 = (((-65 % 193) % ((((((arr_5 [14] [i_3]) ? (arr_15 [i_5] [i_5] [i_4] [i_3] [i_1] [i_1] [i_1]) : (arr_10 [i_1])))) ? (max(64, (arr_15 [i_1] [i_5] [5] [i_4] [5] [5] [i_5]))) : (0 != 0)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_21 [i_1] [i_6] [i_7] [i_6] [5] [i_1] = (((-127 - 1) ? var_3 : (arr_14 [i_7 - 1] [i_2 - 3] [i_2 + 2] [i_2 - 2] [i_2 - 3] [i_1])));
                                var_16 = (min(var_16, (((((((arr_18 [i_1] [i_2] [i_1] [i_6] [i_7 + 2]) % (arr_13 [0] [i_2 + 1] [i_3] [i_2 + 1] [i_1])))) ? (max((var_3 ^ 15), (min((arr_19 [i_2] [4]), var_10)))) : -32765)))));
                            }
                        }
                    }
                    arr_22 [i_1] [i_2 + 1] [i_1] [3] = (min(((max(-64, 72))), (arr_5 [i_1] [i_1])));
                    arr_23 [12] [12] = (((((212037758 / 4257810976) ^ (min(7091103719202117515, 520639336)))) < -81));
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_17 = (max(((4 * ((((arr_13 [i_1] [i_1] [i_1] [i_1] [3]) < -2147483631))))), -32753));
                    var_18 = (((((3983536577 ? (arr_18 [15] [15] [15] [14] [11]) : var_9))) != ((((min(97, (arr_12 [i_8] [i_2 - 4] [i_1] [i_1])))) ? (arr_12 [i_1] [i_1] [i_1] [2]) : ((var_3 ? 311430718 : -1584344001))))));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_19 = -100;
                            var_20 = (((min((arr_14 [i_9] [i_9] [i_2 - 2] [i_1] [4] [i_1]), ((111 ? (arr_6 [i_1]) : 111)))) | (!254)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
