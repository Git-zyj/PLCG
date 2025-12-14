/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_10 [i_0] [1] [i_1] [i_0] = -1073741823;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = (min(((((var_1 + var_1) != ((var_2 ? (arr_3 [i_0]) : var_7))))), (max((arr_14 [i_0] [i_4 + 2] [i_4] [i_4 + 1] [i_4] [i_4] [i_4 - 1]), 2))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [1] [i_4] [i_4 + 2] = (~-var_13);
                            }
                        }
                    }
                    var_18 = var_7;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((arr_12 [i_2] [i_2]) ? ((max((arr_12 [14] [i_2]), var_7))) : ((~(arr_1 [1] [0]))))))));
                                var_20 = -80;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_21 ^= (arr_13 [i_0]);
                    var_22 += var_3;
                    var_23 &= -var_6;
                    arr_24 [i_0] [i_0] = (var_3 % var_16);
                    var_24 = ((var_4 ? 15084 : 3732954402));
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    arr_27 [i_0] [i_8] = (((-(arr_6 [i_0] [i_1] [i_8 - 1] [i_0]))));
                    arr_28 [i_0] = ((!(((-(arr_2 [i_1] [i_1]))))));

                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            arr_36 [i_10] [10] [10] [i_0] |= 111;
                            arr_37 [i_0] [i_1] [i_8 - 1] [1] [16] |= ((var_6 ? var_15 : var_2));
                        }
                        var_25 = (((((-(min((arr_23 [i_0] [i_1] [i_1]), (arr_2 [i_9] [1])))))) ? (((~(!6190538496248106523)))) : ((-(arr_8 [i_8 - 1] [i_9 - 1] [0] [i_9 + 1])))));
                        arr_38 [i_0] = ((!(arr_14 [16] [1] [i_0] [i_9 - 1] [7] [14] [i_8 - 1])));
                        var_26 = ((53670 == (~-5004)));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_42 [i_1] [i_0] [i_8] = (((6190538496248106540 || var_16) ? var_13 : ((17981304870734542907 ? (arr_1 [i_0] [i_1]) : -1073741823))));
                        var_27 += 5;
                    }
                    var_28 = max(-6190538496248106510, (((1 ? 128 : 3732954405))));
                }
                var_29 |= ((((((arr_8 [i_0] [i_0] [0] [i_1]) % var_16))) > var_16));
            }
        }
    }
    var_30 = var_13;
    #pragma endscop
}
