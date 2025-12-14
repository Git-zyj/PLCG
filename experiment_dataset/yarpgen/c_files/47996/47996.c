/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = ((((var_12 <= (arr_3 [i_0 - 1] [i_1 + 1]))) ? (((min(0, var_12)))) : var_10));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_14 = (((((!(arr_0 [i_0 + 1])))) / (arr_0 [i_0 + 1])));
                    arr_7 [i_0] = (((((-(1784382692462920562 | 2485806681)))) ? 255 : (((arr_6 [i_0] [1] [i_2 - 1]) ? -1 : (arr_5 [19])))));
                }
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_3] [i_3 + 3] = (((((-(25652 + 32767)))) ? ((-10 ? (47210 - -10) : 5)) : (((var_3 ? 5 : 42638)))));
                    var_15 &= ((+(min(var_10, ((65535 ? (arr_3 [i_1] [i_3]) : -8))))));
                    var_16 = 72;
                    arr_12 [i_0] [20] [i_0] = ((-(arr_1 [i_0])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_4] [i_5] [i_4] = (-1 | var_12);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_17 = -20064;
                                var_18 -= (min((~var_6), ((((arr_10 [i_4] [i_5] [i_6]) ? var_12 : var_8)))));
                                var_19 = (max(var_19, (((481933824 ? 1308157091 : -3741407352794245222)))));
                                var_20 *= ((((17 <= (arr_21 [i_7] [i_8] [i_7] [4]))) ? ((((arr_21 [i_5] [i_8] [i_7] [i_8]) ^ (arr_21 [i_4] [i_4] [i_7] [i_8])))) : (var_7 - 1308157095)));
                            }
                        }
                    }
                    var_21 = ((!((((arr_19 [i_4] [i_4] [i_6]) & 32767)))));
                    arr_27 [i_4] [i_5] [i_5] [i_4] = ((((150 ? 0 : -1308157117)) / (-7 | 211)));
                    var_22 = (max(var_22, (arr_8 [i_6] [i_5] [i_5] [i_4])));
                }
            }
        }
    }
    #pragma endscop
}
