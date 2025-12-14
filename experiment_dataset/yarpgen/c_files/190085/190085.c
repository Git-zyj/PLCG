/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (2874037182 != var_4);

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_12 |= -var_10;
                        arr_14 [i_0 - 1] [20] [i_0] [i_3 - 1] [i_1 - 1] [i_2] = ((var_6 ^ (arr_0 [i_0 - 2])));
                        var_13 = ((((10 ? var_9 : var_1)) ^ (~9947)));
                        var_14 = ((-var_11 ? var_0 : (((1 ? (arr_11 [i_2] [2]) : var_6)))));
                        var_15 = ((1420930113 | ((var_3 ? (arr_9 [i_0 + 1] [i_0] [11]) : var_0))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_16 = (min(var_16, ((((2874037161 ? (arr_3 [i_4]) : (arr_3 [i_4])))))));
                        arr_17 [i_0 - 2] [i_1 - 1] [i_2] [i_0] = -var_10;
                    }
                }
            }
        }
    }
    var_17 = (min((var_10 > -var_6), (2874037183 - 2025026140)));
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((((var_5 ? (min(-3296198637165304717, var_3)) : (((4226521080 ? 47697 : 27083)))))) == var_0)))));
                            var_19 = (11636 ? (((~(arr_1 [i_5 - 1])))) : (1420930140 * 27073));
                        }
                    }
                }
                arr_30 [i_5] [i_5] = ((-1 ? (((((-384647846 ? (arr_1 [i_6]) : 27083))) ? (max(var_9, -3)) : -27072)) : -1));
                var_20 *= (min((((((~var_7) + 2147483647)) << (((arr_9 [i_5] [14] [i_6]) ? var_6 : var_10)))), (((arr_0 [i_6]) ^ (arr_0 [i_5 - 1])))));
            }
        }
    }
    #pragma endscop
}
