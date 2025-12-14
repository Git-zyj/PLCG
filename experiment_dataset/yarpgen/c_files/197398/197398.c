/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [2] [i_0] [i_1] = (((var_14 + var_17) ? (max((((arr_4 [i_0] [i_0] [i_1]) & 3724847113744346155)), 32767)) : var_13));
                var_21 = (((((1 ? 15280 : 12125909))) ? ((var_7 + (arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) : (arr_2 [i_1 + 1] [i_0] [i_0])));
                var_22 ^= (((!1) <= 13807));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_23 = ((((~(max(var_8, var_6)))) + 2147483647));
                        var_24 = (!1);
                        var_25 = ((!(((-13808 ? 3 : -12125931)))));
                        arr_18 [i_2] [i_2 - 1] [i_2 - 2] [i_2 + 1] = 186;
                        var_26 = ((max((var_7 != var_10), (arr_12 [i_2] [i_3] [i_5] [i_5]))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, (((var_11 ? (arr_0 [i_2 - 1]) : (arr_21 [i_4] [i_3] [1] [i_6] [i_2 - 1] [i_6]))))));
                        var_28 = (((arr_7 [1]) ? 726114928898663543 : 446436724));
                        arr_22 [i_2 - 1] [i_3] = var_2;
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_29 = (max(var_29, (((((798393075 ? 895606598 : 2553914908))) ? ((((arr_25 [i_2 - 1] [i_2 - 1]) || -1165809749))) : ((var_3 ? (arr_25 [i_2 - 1] [i_2 - 2]) : (arr_25 [i_2 - 2] [i_2 - 2])))))));
                        arr_26 [i_7] [i_4] = arr_24 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2] [i_2];
                        arr_27 [2] [i_2] [6] [6] = (max(var_17, (254 > var_10)));
                        arr_28 [1] [i_2 - 1] [9] [i_4] [i_4] [i_7] = (((arr_14 [i_2 - 1] [i_2 - 2] [i_2 + 1]) ? 1 : var_8));
                        var_30 = ((0 * (((-2147483647 - 1) ? 9396133257379213619 : -32753))));
                    }
                    var_31 = 1;
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_35 [i_9] = (((~2147483647) & (((((max(var_17, var_1))) && 15768)))));
                                var_32 ^= (((((1729818331 ? 1 : (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) ? ((var_2 ? (arr_21 [i_10] [i_9] [i_8] [10] [i_3] [i_2]) : (arr_29 [i_10] [7] [i_2 - 2]))) : ((var_8 - (arr_21 [i_3] [i_3] [i_8] [i_8] [1] [i_8])))));
                                var_33 = (arr_19 [i_9 - 2] [i_8]);
                            }
                        }
                    }
                    arr_36 [i_2] = (((((19536 ? 19541 : 42565))) ? ((5695672144617425738 ? 12125915 : -23905)) : 1));
                    var_34 ^= ((min((arr_25 [i_2 - 1] [i_2 + 1]), (arr_25 [i_2] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_35 = var_3;
                                var_36 = (max(var_36, ((((159 != 3097410276) ? ((-(arr_16 [i_2 - 2] [5]))) : (min(-3, (arr_16 [i_2 - 1] [i_2]))))))));
                                arr_41 [i_2] [i_11] [i_11] = (min(15213, var_9));
                            }
                        }
                    }
                }
                arr_42 [i_2 - 2] = (arr_20 [i_2] [5]);
            }
        }
    }
    #pragma endscop
}
