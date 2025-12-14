/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((var_7 ? (-var_6 != var_7) : var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_12 = ((((((arr_0 [i_1] [i_0]) ? 245760 : (arr_1 [i_1]))) + (min(1983781260, 9223372036854775807)))));
                    arr_7 [i_1] [i_0] [i_2] [i_0] = ((((var_6 ? 1 : (arr_5 [i_2] [i_1] [i_0 - 1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] [i_4] = -6437377455285834237;
                                var_13 = var_5;
                                var_14 = ((((-4 ? (min((arr_9 [i_4 + 2]), var_7)) : (!var_2))) ^ (3996189900640829153 < 127)));
                            }
                        }
                    }
                    var_15 = (min(var_15, ((((((((var_7 ? (arr_1 [i_0 - 1]) : -536870912))) & (((arr_8 [i_0] [i_1]) ? 3 : 6486163621092250918)))) >= (((arr_2 [i_0 + 1] [i_0 + 1]) ? 3116596913733577338 : (arr_2 [i_0 - 2] [i_0 - 4]))))))));
                }
                for (int i_5 = 4; i_5 < 18;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_16 = (min(var_16, ((((((4 ? 15453 : (arr_3 [i_0] [i_1] [i_6]))) + -20)) * (!var_2)))));
                        arr_20 [i_0 - 4] [i_1] [i_5] = (min((max((arr_6 [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_5 - 3]), (arr_6 [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_5 - 2]))), (min((arr_6 [i_0 - 4] [i_0 - 1] [i_0 - 4] [i_5 - 4]), (arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 4] [i_5 - 3])))));
                        var_17 *= (arr_1 [i_5 - 1]);
                    }
                    arr_21 [i_0] [i_1] [i_5] &= (((((var_7 ? (((((arr_10 [i_5] [i_5] [i_1] [i_0 - 2] [i_0] [i_0]) < (arr_16 [i_5]))))) : ((9160900680163098448 ? 0 : 3036272708562299975))))) ? (arr_10 [i_0] [i_0] [i_1] [i_1] [i_5] [i_5]) : (1 - 536854528)));
                    var_18 += (-9223372036854775807 - 1);
                    var_19 ^= ((-(arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_5 - 3])));
                }
                /* vectorizable */
                for (int i_7 = 4; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    var_20 ^= (-8707850959377215392 && 11);
                    var_21 = (((((8388607 + (arr_11 [i_0 + 1] [i_1] [i_1] [i_0 - 3] [i_7] [i_1] [i_0 - 2])))) ? 22705 : (((-127 - 1) ? 0 : 10106))));
                    var_22 = ((((arr_18 [i_0]) ? 24668 : (arr_0 [i_0 - 2] [i_0 - 2]))) / ((-(arr_22 [i_0] [i_1] [i_1]))));
                }
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_30 [i_0] [i_0] [i_0] [i_0 - 3] [i_0] [i_8] = ((((var_1 || (arr_0 [i_8 + 2] [i_0 - 3]))) ? ((16477507232306469266 ? -4583173017055455140 : 15450)) : (arr_1 [i_0 - 2])));
                                arr_31 [i_0] [i_1] [i_8] = -50;
                            }
                        }
                    }
                }
                var_23 = (arr_25 [i_0] [i_1] [i_1]);
                var_24 += ((((max((arr_22 [i_0 - 1] [i_0] [i_0 + 1]), (arr_22 [i_0 - 2] [i_0] [i_0 - 2])))) ? (((!(arr_22 [i_0 + 1] [i_0] [i_0 + 1])))) : (!6891879331848255907)));
            }
        }
    }
    var_25 = var_7;
    #pragma endscop
}
