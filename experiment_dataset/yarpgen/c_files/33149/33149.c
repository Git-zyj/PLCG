/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = var_8;

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0 - 2] [i_1] [i_2] [i_2] = ((-(((var_0 * var_5) ? 4333476876968456423 : (((var_2 ? var_5 : 27896)))))));
                    var_12 = (max(var_12, (((((((arr_0 [i_0 - 1]) ? 65535 : 4333476876968456423))) <= (arr_0 [i_0 + 1]))))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            var_13 &= (((!(arr_11 [i_0] [4] [i_2] [i_0] [i_4]))));
                            var_14 = (arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]);
                            arr_14 [i_0] [i_1] = (((((((arr_4 [i_0 - 1] [i_1] [i_2 - 2]) < var_0)))) == (((arr_3 [i_1] [i_2] [i_3]) - (-5949485851455438092 - -5949485851455438076)))));
                            var_15 = var_7;
                            arr_15 [i_1] = ((-((-47 ? (arr_0 [i_4 - 2]) : -20120))));
                        }
                        var_16 = var_10;
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_21 [i_2] [i_1] [i_1] = var_0;
                            arr_22 [i_1] [i_1] [13] [i_6] = ((((max(17444473153712739145, 241))) ? (arr_10 [i_1] [i_6]) : (((arr_3 [i_1] [i_0 - 2] [9]) ? (arr_13 [i_1] [i_1] [i_2 + 2] [i_2 - 2] [i_0]) : (arr_3 [i_1] [i_0 - 2] [i_2])))));
                            arr_23 [i_6] [i_1] [i_2] [i_1] [i_0] = 2;
                        }

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_17 = var_5;
                            arr_27 [i_7] [i_5] [i_1] [i_1] [i_0] = ((!((((arr_6 [i_0 - 1] [i_1] [i_2 - 2]) ? (arr_17 [i_1] [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_5]) : (-8161 != 241))))));
                            var_18 = (max(var_18, ((min(((max((5949485851455438075 && -27890), ((var_1 ? 65074 : var_9))))), var_6)))));
                            var_19 = ((3295461130 || ((min((arr_17 [i_1] [i_1] [i_0 - 2] [i_2 - 1] [i_2] [10]), (arr_12 [i_0] [i_1] [i_0 + 2] [i_2 - 1] [i_1]))))));
                            var_20 = 56;
                        }
                    }
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        arr_30 [i_0 + 2] [i_1] [i_2] [i_8] = (((((~(~var_2)))) ? (65535 / 53928) : ((((arr_11 [i_0] [i_0 + 1] [i_2] [i_0 + 1] [i_1]) <= (!5949485851455438092))))));

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            var_21 -= (((arr_28 [i_0] [i_8 - 1] [i_0 + 1]) ? (arr_28 [i_0] [i_8 + 1] [i_0 + 2]) : (arr_1 [i_9 - 1])));
                            var_22 = var_1;
                        }
                        var_23 = (((max((arr_9 [i_1] [i_0 + 1] [i_2 - 1]), var_9))) ? (((arr_9 [i_1] [i_0 + 1] [i_2 + 2]) ? var_9 : 32886)) : (((arr_25 [i_1] [i_8] [i_8] [i_8 - 1]) % (arr_25 [i_1] [i_8] [i_8] [i_8 + 1]))));
                    }
                }
            }
        }
    }
    var_24 &= var_5;
    #pragma endscop
}
