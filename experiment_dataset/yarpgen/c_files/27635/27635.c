/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (min(((max((arr_3 [i_0]), (arr_3 [i_1])))), (min(var_9, (arr_0 [i_0])))));
                arr_6 [i_0] [i_0] [13] = ((700074334 & (arr_4 [i_0] [i_1])));
                var_15 = -1910774113;
            }
        }
    }
    var_16 = var_8;
    var_17 ^= ((-1910774113 ? ((6076005473737832471 + (!1103863643))) : var_3));
    var_18 = ((~(max((1910774137 | 8589410304), (~var_4)))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_19 = 3191103668;
                arr_14 [i_3] [i_3] [i_2] = arr_0 [i_3];
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_20 = (arr_9 [5] [i_3]);
                            var_21 = (min((var_9 || var_8), ((((arr_10 [i_3] [15]) != (arr_17 [i_2] [i_2] [i_3] [i_3] [i_2] [7]))))));
                            var_22 = ((((((arr_10 [i_5] [i_3]) ? (arr_10 [i_4] [i_3]) : (arr_10 [i_2 - 2] [i_4])))) ? ((var_7 ? (arr_10 [i_4] [14]) : (arr_10 [i_2] [i_5]))) : (((arr_10 [i_3] [i_4]) ? (arr_10 [i_5] [i_3]) : (arr_10 [i_3] [i_5])))));
                        }
                    }
                }
                arr_20 [i_3] = ((~((var_7 ? 1 : -2646606540830965765))));
            }
        }
    }
    #pragma endscop
}
