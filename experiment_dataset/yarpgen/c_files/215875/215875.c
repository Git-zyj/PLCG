/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (((arr_4 [i_0]) - (((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_1 [i_0])))));
                    arr_6 [i_0] = ((!((var_6 <= ((min((arr_1 [i_0]), 9223372036854775805)))))));
                    arr_7 [i_0] [i_0] [i_0] = (((-((-(arr_1 [i_1]))))));
                    var_12 = ((~((+(((arr_5 [i_0] [i_0] [1]) ? (arr_5 [i_0] [i_1] [i_0]) : 1))))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                var_13 = ((-((-(~1)))));
                var_14 = (((min((arr_12 [i_3]), (arr_12 [i_3])))) >= (((var_1 % 127) ? var_2 : ((33049 ? -5735781816164221939 : 0)))));

                for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    arr_18 [i_3] [i_3] [i_4] [i_3] [9] = (arr_16 [i_3 - 2] [i_4] [16] [i_6] [0]);
                    var_15 = (max((((arr_9 [i_5] [i_5]) ? ((((254 && (arr_8 [i_5]))))) : ((20 ^ (arr_8 [i_3]))))), ((max((arr_14 [i_6] [i_5] [i_4] [i_3]), 1)))));
                    arr_19 [i_5] [i_6] = ((((min((arr_15 [i_3 - 1] [i_5]), (((!(arr_9 [i_5] [i_4]))))))) ? (((((arr_14 [i_3] [i_3] [i_3] [i_3]) || 2198989701120)) ? (((var_5 - (arr_12 [i_6])))) : (arr_11 [i_3 - 2]))) : var_0));
                    var_16 &= -7236521103408477098;
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    var_17 = (max((((arr_8 [i_3 - 1]) ? 17 : (arr_8 [i_3 + 1]))), (+-14119)));
                    var_18 |= min(((-20501 ? 13728541598608138822 : (arr_17 [i_3] [i_7] [i_5 - 2] [i_7] [i_5] [i_5]))), (((arr_17 [i_7] [i_7] [i_5 - 2] [i_4] [i_4] [i_7]) ? (arr_17 [i_3] [1] [i_5 - 2] [i_3] [i_3 - 2] [i_3]) : (arr_17 [14] [i_4] [i_5 + 3] [i_7] [i_5] [i_7]))));
                }
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                arr_25 [i_3] [i_3] [i_3] = (((arr_15 [i_8] [i_4]) ? (4718202475101412794 >= var_1) : (((arr_22 [i_3 + 1]) ? (arr_22 [i_3 - 2]) : (arr_22 [i_3 + 2])))));
                var_19 = (max(var_19, -1096582465728150626));
            }
            arr_26 [i_3] [i_3] [i_3] = -var_5;
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_10 = 4; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((((-((min(2, (arr_36 [i_3] [i_9] [i_10] [i_11])))))) | ((~(((!(arr_15 [i_3] [i_9])))))))))));
                            var_21 -= (arr_10 [i_12] [i_12]);
                        }
                    }
                }
            }
            var_22 &= (((var_6 % (arr_12 [i_3 + 3]))));
            var_23 = (min((((!254) * 0)), ((max((arr_23 [i_3] [i_9]), (max(-32761, 203)))))));
            var_24 = (min(32760, 240));
        }
        var_25 = (((!(arr_32 [i_3 + 2]))));
        var_26 = (max(var_26, (((!(((var_6 >> (arr_34 [i_3 + 3] [i_3 + 3])))))))));
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 16;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            {

                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    arr_49 [i_13 - 1] [i_14] [i_15] = ((var_9 ? -31067 : (arr_30 [i_15] [i_15])));
                    var_27 = (arr_34 [i_14] [17]);
                    arr_50 [i_13] = ((!(((2047929368 || var_3) >= ((min((arr_41 [i_15]), var_3)))))));
                    var_28 = 1;
                    var_29 = (((arr_29 [i_15] [8] [i_13 - 1]) & (max((13341979378182743318 ^ var_9), (1 != 0)))));
                }
                arr_51 [i_13 - 1] [i_13 - 1] = var_9;
                arr_52 [5] = (((arr_13 [i_13 + 1] [i_13] [i_13 + 1]) | (min((arr_42 [i_13 + 1]), 0))));
            }
        }
    }
    var_30 = -var_5;
    #pragma endscop
}
