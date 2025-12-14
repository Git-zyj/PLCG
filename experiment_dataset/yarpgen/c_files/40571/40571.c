/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40571
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
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_12 += (((((max(var_8, (arr_6 [4])))) ? (arr_6 [2]) : (max((arr_0 [i_3] [i_3]), 2245989138)))));
                        var_13 = (max(var_13, (((((15 == (arr_3 [0]))) || ((max((min(2245989125, (arr_6 [10]))), var_8))))))));
                        var_14 = var_9;
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_15 = ((~(((var_1 == var_5) ? 2245989135 : 1527877387330392570))));
                        arr_13 [i_1] [i_0] = (min(2245989138, ((var_1 * (max(2048978180, var_9))))));
                        var_16 ^= var_6;
                    }
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        arr_17 [i_0] [i_2] [i_0] [i_5 + 1] = ((10428672037476291487 >= (2048978180 * 10428672037476291506)));
                        var_17 ^= var_7;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((arr_4 [i_0 - 1] [i_1] [i_1]) ? (min(((min(2048978180, 2733589177))), ((10428672037476291510 + (arr_8 [i_0] [i_1] [i_2 - 1] [i_6]))))) : (((var_10 == var_10) ? 242 : -var_6)))))));
                                var_19 = 13384;
                                var_20 = (((!(arr_14 [i_7 - 2] [i_7 - 2] [i_2 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_2 ? var_9 : ((min((44030 == var_9), 128)))));
    #pragma endscop
}
