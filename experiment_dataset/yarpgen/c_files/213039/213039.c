/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_6 ? ((((max(var_5, var_7)) == (var_1 <= 116)))) : ((((var_1 == var_0) == var_10))));
    var_13 ^= (((((((max(58, 0))) ? var_8 : (211 / -2133011437)))) || 192));
    var_14 = (min((max((1 + 255), 245)), 88));
    var_15 ^= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = max(-256, -25);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = (arr_5 [i_0] [i_0]);

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                arr_12 [i_2] [i_1] [i_1] [i_0] [i_1] = (((((arr_11 [i_4] [i_3] [i_2] [i_1] [i_0]) ? (arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]) : var_8))) ? (((arr_11 [i_0] [i_1] [i_2] [i_1] [i_4]) ? (arr_11 [i_4] [8] [8] [8] [i_4]) : -115)) : ((((arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]) == 161))));
                                var_18 = (max(((max((arr_2 [i_1]), var_7))), ((var_2 ? var_4 : ((-(arr_3 [i_4] [i_3])))))));
                                var_19 = (((var_1 ? 106 : ((min(-25, var_6))))) | (((arr_2 [i_0]) % (arr_4 [i_1] [i_3] [i_4]))));
                                var_20 += ((((min(var_4, (arr_7 [i_0] [i_1] [i_2]))) - var_8)));
                                var_21 = (((min((min(2147483633, (arr_5 [i_2] [i_2]))), 1982544037)) >= (((((-(arr_5 [i_0] [i_0])))) ? var_7 : ((max((arr_2 [i_1]), var_6)))))));
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_22 ^= var_0;
                                var_23 -= var_10;
                            }
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                arr_19 [i_1] [i_1] [i_1] [i_1] = (min((!var_1), (((arr_5 [i_6] [i_2]) == ((177 ? 116 : -1132864138))))));
                                var_24 = (max(var_24, ((min(((((min(17, -79))) ^ ((var_4 ? 2 : -17870)))), (~var_9))))));
                                var_25 = (arr_9 [i_1] [i_1] [i_1] [i_1]);
                                var_26 = (var_4 ? (((arr_9 [i_1] [i_1] [i_1] [i_6]) ? (((arr_2 [i_1]) ? (arr_3 [i_1] [i_1]) : var_9)) : (arr_8 [i_6] [i_0]))) : ((((((arr_11 [18] [i_1] [i_6] [i_1] [i_6]) / (arr_3 [i_6] [i_1])))) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                            var_27 = ((min(17, var_1)));
                            var_28 = max(((33554432 ? 200 : (arr_3 [i_0] [i_3]))), ((((~-17221) > 114))));
                            var_29 += (arr_8 [i_3] [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
