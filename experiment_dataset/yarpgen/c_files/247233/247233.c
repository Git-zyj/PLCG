/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (((arr_0 [i_1]) == ((-2824803607617256920 ? (arr_4 [i_0]) : 65535))));
                var_15 ^= ((arr_2 [i_0] [i_0]) ? ((-((var_0 ? -2824803607617256915 : 0)))) : (var_8 - 3576677425));
                var_16 ^= ((((-((var_6 ? (arr_1 [i_0]) : 65527))))) ? var_0 : (min((arr_0 [i_0 - 1]), (var_1 * var_8))));
                var_17 = (min(var_17, (max(var_9, (((((var_1 ? 65527 : (arr_2 [i_0 + 1] [i_0 + 1])))) ? (max(var_0, 65535)) : (arr_1 [16])))))));
            }
        }
    }
    var_18 = 65525;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_19 |= var_5;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_20 = (arr_4 [i_6 - 1]);
                                var_21 ^= (((((arr_12 [i_2] [8] [i_4] [i_2]) ? ((29434 ? var_6 : (arr_14 [i_2] [i_3] [i_4] [i_5]))) : 16)) == (((-(arr_16 [i_6 + 1] [i_6 + 3] [i_6 + 3] [i_6 + 4] [i_6 - 1] [i_6 + 4]))))));
                            }
                        }
                    }
                }
                var_22 = ((((var_10 ? (arr_11 [i_3] [i_3] [i_2]) : (arr_11 [i_2] [i_2] [i_2]))) / (max((arr_3 [i_2] [i_3] [i_3]), (arr_11 [i_2] [i_2] [i_2])))));
            }
        }
    }
    #pragma endscop
}
