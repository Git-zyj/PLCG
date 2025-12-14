/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 -= (~-7);
                    var_13 = ((((((arr_5 [i_2]) ? (arr_5 [i_2]) : (arr_5 [i_2])))) || ((max(((var_4 | (arr_0 [i_0 - 2] [i_0 - 2]))), -18)))));
                    var_14 += -7;

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        arr_10 [i_2] [i_1 - 1] [i_2 + 3] = (~7);
                        arr_11 [i_2] [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_3 - 2] = (~-1);
                        arr_12 [i_0] [i_2] [i_2 + 3] = ((min((arr_8 [i_2]), -7)));
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_15 = (min(var_15, ((max((max(var_9, (-3702282622570547969 || -14))), (((!(((var_4 ? var_7 : (arr_16 [i_0] [i_1 - 1] [i_1 - 2] [i_1 - 2]))))))))))));
                        arr_17 [i_2] [i_2] [i_2] [i_4 - 1] = (max(14, 180));
                        var_16 = (min(var_16, (((6 ? 11635625753873792797 : 14)))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_17 = arr_4 [i_2];
                        arr_20 [i_2] [i_2 + 2] [i_1 + 2] [i_2] = 13213845136836411945;
                        arr_21 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_1 + 2] [i_2] = (((((var_1 << (var_2 - 1310374222)))) ? (((arr_6 [i_0 - 2] [i_2 + 2] [i_5]) ? var_0 : (((arr_4 [i_2]) ? (arr_13 [i_0 - 2] [i_1 + 2] [i_2 + 1] [i_2]) : (arr_9 [i_5] [i_0 - 1] [i_0 - 1]))))) : ((((arr_15 [i_2] [i_1 - 1] [i_2 - 1] [i_5]) ^ -23)))));
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        arr_24 [i_0] [i_2 + 1] [i_2 - 1] [i_2] [i_6 + 1] [i_6 + 1] = (8257536 * 0);
                        var_18 = ((-1 ? 159 : -3));
                        var_19 += (min((((arr_6 [i_0 + 1] [i_2 + 1] [i_6 + 1]) ? (((arr_8 [i_0]) ? var_5 : 5848)) : 41)), var_5));
                        var_20 = (arr_6 [i_0 + 1] [i_0 + 1] [i_2 + 2]);
                        arr_25 [i_2 + 2] [i_0] [i_1 - 1] |= ((((-((-14 ? (arr_0 [i_0] [i_1 - 2]) : (arr_1 [i_6 + 1] [i_2 + 3])))))) ? ((-((var_2 ? 52506 : 6187958225597837979)))) : (~13031));
                    }
                }
            }
        }
    }
    var_21 |= var_10;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                var_22 = (-3217844112 / var_9);
                var_23 |= var_11;
            }
        }
    }
    var_24 &= ((var_5 ? (~41) : var_5));
    var_25 ^= var_7;
    #pragma endscop
}
