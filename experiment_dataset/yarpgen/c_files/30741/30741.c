/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    arr_7 [i_2] [i_2 - 1] [i_2 - 1] [i_2] = ((!(arr_1 [i_2 + 1])));
                    arr_8 [i_1] [i_1] [i_2] = ((((((arr_0 [i_2 + 1]) < 0))) < (((arr_1 [i_2 - 1]) ? 8548 : (arr_0 [i_2 + 1])))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    var_11 = (max(var_11, (arr_3 [i_3] [i_1] [i_0])));
                    var_12 = ((-(~13509712374867210849)));
                    arr_11 [i_0] [i_1] [i_0] = (arr_2 [i_3] [i_1] [i_3 + 1]);
                    var_13 = (max(var_13, (arr_10 [1] [1] [1] [i_3])));
                    arr_12 [5] = (((arr_5 [i_3] [i_3 - 1]) < (arr_5 [i_3] [i_3 + 1])));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    arr_15 [i_0] [i_1] [i_0] [i_0] = (arr_10 [i_4 - 1] [i_4] [i_4 - 1] [i_4]);
                    arr_16 [i_4] [i_0] [i_0] = ((-(arr_0 [i_1])));
                    arr_17 [i_4 - 1] [3] [8] = (arr_13 [i_4 + 1] [i_4 + 1] [i_1] [i_4 + 1]);
                    var_14 = 8548;
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_15 -= (min((((((arr_3 [i_0] [i_1] [i_5]) ? -5230055558882279283 : 921274254)) / (arr_19 [i_0] [i_1] [i_5]))), (max(3637221172, -1))));
                    var_16 = ((49753 ? 2053647079 : (min((arr_20 [i_0] [i_1] [i_5]), (arr_2 [i_0] [i_1] [i_5])))));
                }
                arr_21 [7] = (arr_19 [i_0] [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_17 = (arr_0 [i_1]);
                            arr_27 [i_6] &= (!3662961858);
                        }
                    }
                }
            }
        }
    }
    var_18 -= 1297951370;
    var_19 = (min(var_1, (~1)));
    #pragma endscop
}
