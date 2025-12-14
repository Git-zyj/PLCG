/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -5625;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_16 = (max(var_16, var_8));
        var_17 = ((((min(4288766190177459612, ((var_4 ? 4288766190177459622 : 4288766190177459611))))) ? 21622 : ((var_2 / (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 4288766190177459601))))));
        arr_2 [i_0 + 2] [i_0] = (max(((~(arr_1 [i_0] [i_0]))), var_9));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [i_2] = (((9187343239835811840 != -4288766190177459612) ? (((!(arr_8 [i_2])))) : (arr_3 [i_1 - 3] [i_1 + 2])));
                    var_18 = max(4288766190177459599, 4288766190177459611);
                    arr_13 [i_2] [i_2] [i_2] = (arr_8 [i_2]);
                    var_19 = (arr_9 [i_1] [i_2] [i_2] [22]);
                }
            }
        }
        arr_14 [i_1] [i_1 - 2] = (((((arr_5 [i_1 + 2] [i_1 - 1]) != (arr_5 [i_1 + 1] [i_1]))) ? (((~(arr_11 [i_1 - 1] [i_1])))) : (((~var_13) | 0))));
        arr_15 [i_1 - 3] = ((((arr_3 [i_1 - 1] [i_1 + 1]) != (min((arr_4 [i_1 - 2]), var_7)))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_20 = var_2;
        var_21 = ((((((arr_3 [i_4] [i_4]) | 12053786014393793263)) & 125)));
        arr_18 [i_4] = (((((((~(arr_5 [i_4] [i_4])))) && ((((arr_4 [i_4]) + (arr_17 [i_4])))))) ? (arr_3 [i_4] [i_4]) : (((arr_9 [i_4] [i_4] [1] [i_4]) ? (((arr_7 [22]) ? 32 : (arr_1 [13] [13]))) : (arr_3 [i_4] [i_4])))));
    }
    #pragma endscop
}
