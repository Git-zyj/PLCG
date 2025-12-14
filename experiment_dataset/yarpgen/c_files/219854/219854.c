/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_17 = (min(var_17, var_1));
            arr_6 [1] [1] |= ((((!((((arr_0 [8] [i_1 - 1]) / (arr_3 [i_1])))))) ? (arr_0 [8] [i_1]) : ((-(arr_0 [6] [i_1 + 1])))));
            var_18 ^= ((!(var_13 > var_2)));
            var_19 *= ((var_12 ? (1 / -346186123445327110) : (((min(var_6, 21))))));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_20 -= ((max(var_2, (63092 != 1145))) - 38517);
            var_21 &= ((var_3 ? ((var_8 % (min(var_5, (arr_7 [i_0]))))) : ((((!(arr_5 [i_0] [i_2] [4])))))));
        }
        var_22 ^= var_5;

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_23 = (min(var_23, 4055570808));
            var_24 = (min(var_24, (((((!1) ? ((((arr_5 [i_3] [i_3] [1]) || var_6))) : (max((arr_8 [i_0] [10]), var_4))))))));
            var_25 = (max(var_25, (((((min((1759892291 != -8), ((var_3 << (-13021 + 13034)))))) ? (!var_0) : ((min((!1), (min(25244, 21))))))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            var_26 = (min(var_26, ((((~var_13) ? (arr_10 [i_0] [i_4] [i_4]) : var_13)))));
            var_27 -= (var_15 != var_5);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_28 ^= (((arr_8 [i_0] [i_4]) ? (((1 ? var_12 : 4277406334))) : (arr_7 [i_5 + 1])));
                        var_29 &= (((arr_9 [i_5]) != (arr_7 [i_5 + 1])));
                        arr_18 [i_4] [i_0] [i_4] [i_5] [i_6] |= ((~(arr_11 [i_4])));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_7] [i_7] |= var_8;
            var_30 -= (min(-var_1, (((arr_20 [6] [i_7] [i_7]) ? (arr_17 [i_0] [i_7] [i_7] [i_7]) : (max(7671110664614548585, 1))))));
        }
    }
    var_31 ^= (max(var_5, var_11));
    #pragma endscop
}
