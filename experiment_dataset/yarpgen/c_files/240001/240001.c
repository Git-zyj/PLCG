/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_2] [i_1] = ((!(((~((var_7 ? var_4 : 2147483647)))))));
                                var_15 = (((max(163, 4095)) != (arr_7 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1])));
                                arr_14 [i_0] [i_1] [i_0] [i_1] [i_4] [i_4] [i_2 + 1] = (arr_1 [i_0 - 1]);
                                arr_15 [i_1] [i_4] = (((((arr_4 [i_1]) ? var_7 : (max(1378155936, 1043377327))))) ^ (arr_10 [i_4] [i_1] [i_2 - 3] [i_1] [i_0]));
                                var_16 *= (max(var_0, (max(-1285805708, 255))));
                            }
                        }
                    }
                    var_17 = max(((((-14369 <= 5) & (var_9 / 5)))), -776887397543671813);
                    arr_16 [i_0] [i_1] = 127;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_18 = (max(var_18, -51));
                var_19 = 1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_20 = (((arr_24 [i_7]) ? (arr_27 [i_7]) : ((((max(5, 87))) ? var_8 : (1 < 50)))));
                    var_21 *= ((((-(max(var_2, (arr_24 [i_7]))))) - ((((((arr_28 [i_7]) && -1031719445)))))));
                }
            }
        }
    }
    var_22 = (min(var_22, (((((!(156 || -859804014))) ? 29931 : var_5)))));
    #pragma endscop
}
