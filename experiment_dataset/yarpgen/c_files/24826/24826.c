/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 ^= (arr_1 [i_1] [i_2]);
                    var_14 = ((((((arr_5 [i_0] [8] [i_2]) ? -7904607643977316215 : ((((arr_1 [i_2] [9]) ? (arr_4 [15]) : -32532)))))) ? (((~var_3) ? (((arr_6 [14] [i_1] [i_0]) ? 7904607643977316222 : 12344895603585057225)) : var_9)) : (((~((~(arr_7 [i_1] [i_1] [i_1]))))))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_15 = (max(var_15, (((+((((arr_6 [i_1] [2] [10]) ? var_5 : -1254543612))))))));
                        var_16 ^= 7904607643977316215;
                    }
                    arr_10 [i_0] [i_1] [i_0] [i_2] = 114;
                    arr_11 [i_1] [i_0] [i_1] [i_1] = ((!((((7904607643977316225 ? var_6 : var_12))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_17 = (max(var_17, 75));
                            arr_21 [4] [2] [i_7] &= (((((((!(arr_7 [i_4] [i_5] [4]))) ? var_10 : 644251133712832917))) ? var_5 : (arr_5 [i_4] [i_4] [i_6])));
                            arr_22 [i_4] [i_4] [6] [i_4] [i_4] = (arr_2 [i_7] [i_6]);
                        }
                    }
                }
                var_18 *= var_1;
                arr_23 [i_4] [i_5 + 2] = (max(((~(arr_13 [i_5 + 1] [i_5 + 1]))), (((arr_16 [i_4] [i_5 + 1]) ? (arr_13 [i_5 + 3] [i_5 - 2]) : -76))));

                for (int i_8 = 2; i_8 < 8;i_8 += 1)
                {
                    var_19 = (arr_19 [i_8] [i_4] [i_4] [2]);
                    var_20 = arr_19 [i_4] [i_4] [i_4] [i_4];
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_21 = (min(var_21, ((((((~(arr_6 [6] [8] [6])))) ? ((max(-1, 15))) : var_1)))));
                    arr_29 [i_4] [i_4] [i_9] = 47810;
                    var_22 = (max(var_22, (((((((-(arr_13 [i_5] [i_9])))) ? 30841 : (arr_8 [0] [i_5] [i_9])))))));
                }
            }
        }
    }
    var_23 = (min(var_23, (!0)));
    #pragma endscop
}
