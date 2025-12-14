/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((((max(-982539144, var_8))) ? ((1 ? var_6 : var_5)) : ((var_0 ? var_2 : var_8))))) ? ((var_5 ? (max(13306593181390489310, var_0)) : (((var_5 ? var_2 : -1218250364))))) : ((var_5 ? (13306593181390489294 * var_0) : 1))))));
    var_14 = 13306593181390489323;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 8;i_4 += 1)
                            {
                                var_15 = (max(var_15, ((((arr_2 [i_4 + 1]) * (arr_2 [i_4 - 2]))))));
                                var_16 -= (((arr_4 [i_4] [i_1 - 1]) ? (arr_4 [i_1] [i_1 - 3]) : var_7));
                                var_17 -= (((arr_9 [i_0 - 1] [i_4 + 1] [i_4 + 1] [i_1 + 2]) ? (arr_7 [i_1 - 2] [i_0] [i_0] [i_0]) : (arr_11 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_0 - 1] [i_1 + 1] [i_4 + 1])));
                                var_18 = (min(var_18, (var_8 < 65509)));
                                var_19 *= (3634098606 == 65460);
                            }
                            var_20 = (min(var_20, ((((arr_1 [i_0 + 1]) ? (((min(41, (arr_10 [i_0] [5] [i_2] [i_3]))) * (((min(var_8, var_8)))))) : ((((((136902082560 ? 13306593181390489310 : 2162593946))) ? (((0 ? 1 : -4))) : 4294967273))))))));
                            var_21 = (min(var_21, (((-1674045797 ? 4260469109 : 9223372036854775807)))));
                        }
                    }
                }
                var_22 *= ((var_2 + ((((((arr_4 [i_0] [i_1]) ? var_4 : (arr_8 [i_0] [i_0])))) ? (((max(var_9, 27)))) : -1027085450))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            {
                arr_18 [i_6] = (var_0 ? (max(13306593181390489317, 25338)) : (((((arr_13 [i_6 - 2]) || 1674045797)))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_23 = ((((-1674045811 ? -8125433840055699743 : 1452205631)) - (((var_9 ? ((-1452205620 ? var_5 : var_5)) : -1150804638)))));
                            var_24 = (((((((-1452205632 ? 1 : 2147483638)) + (55776 || 1231674243)))) ? (arr_23 [i_6 - 1] [i_6] [i_8 - 2] [i_6 - 1]) : (((max((arr_24 [i_5] [i_5]), var_7))))));
                            var_25 = ((((((((63488 ? var_4 : (arr_15 [2])))) >= ((var_1 ? 644 : (arr_13 [i_7 + 1])))))) - -1928541060));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
