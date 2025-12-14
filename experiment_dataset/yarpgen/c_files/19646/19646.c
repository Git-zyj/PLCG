/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_10 ? (((var_12 ? ((var_2 ? var_2 : var_4)) : (var_8 == 2352)))) : (min(-1, (((var_12 ? -556991110 : var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 = (1 - 488194998253340652);
                            var_15 &= ((-(var_11 + var_1)));
                            arr_11 [i_0 + 1] [i_1] [i_0] = ((16 && (((var_11 ? var_12 : var_10)))));
                        }
                    }
                }
                arr_12 [i_0] = var_12;

                /* vectorizable */
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    arr_15 [i_0] [12] [i_4 + 1] = (((arr_10 [i_4] [i_0] [i_0] [i_1 - 2]) ? var_5 : 249));
                    arr_16 [21] [i_0] [i_0] = var_0;
                    var_16 = ((var_4 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
                    arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_4] = (1 == -var_8);
                    var_17 = (var_9 ? var_11 : ((var_0 ? var_8 : var_7)));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    var_18 = (((((var_12 && (((var_5 ? (arr_4 [i_0]) : 112)))))) ^ (min(((4516357744155488907 ? var_5 : var_8)), ((var_4 ? var_1 : var_12))))));
                    arr_20 [i_5] [i_0] [i_0] = var_5;
                    arr_21 [i_0] [i_1] [i_0] [i_0] = var_2;
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {
                    arr_24 [i_0] = ((-((var_4 ? (var_5 / var_10) : ((1 + (arr_18 [i_0])))))));
                    var_19 = (i_0 % 2 == 0) ? (((((((var_12 + 2147483647) << (((arr_6 [i_0]) - 8940685059966113510))))) ? (((arr_6 [i_0]) ? (arr_6 [i_0]) : (arr_6 [i_0]))) : (((arr_6 [i_0]) ? (arr_6 [i_0]) : 1))))) : (((((((var_12 + 2147483647) << (((((arr_6 [i_0]) - 8940685059966113510)) - 12146059188726378596))))) ? (((arr_6 [i_0]) ? (arr_6 [i_0]) : (arr_6 [i_0]))) : (((arr_6 [i_0]) ? (arr_6 [i_0]) : 1)))));
                }
                arr_25 [i_0] [i_1] [1] &= (min((!-19100), ((~((var_10 ? var_12 : (arr_7 [i_0] [18] [18] [i_0])))))));
                var_20 = arr_13 [i_1 - 1] [i_0] [i_0] [i_0 - 1];
            }
        }
    }
    var_21 = -var_9;
    #pragma endscop
}
