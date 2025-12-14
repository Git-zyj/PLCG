/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_4, var_2));
    var_11 = (min(var_11, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [5] = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_12 = (min(var_12, (((-((min(53743, (var_1 != 255)))))))));
                                var_13 = ((0 ? 1 : var_0));
                            }
                            for (int i_5 = 4; i_5 < 9;i_5 += 1)
                            {
                                arr_17 [i_5] [5] [5] [i_1] [1] [i_1] [i_2] = (arr_16 [9] [i_1] [i_2] [i_3] [1]);
                                arr_18 [i_5] [1] [5] [i_1] [5] = (((((-6301253174335476116 ? 1 : (arr_2 [i_0] [i_5]))))) ? 8070450532247928832 : ((205 ? 8070450532247928832 : 1)));
                                arr_19 [i_0] [i_0] [i_0] [1] = ((-(((arr_10 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 3]) ? 105 : (arr_10 [i_5 - 4] [i_5 - 1] [i_5 - 4] [i_5 - 3])))));
                            }
                            for (int i_6 = 3; i_6 < 8;i_6 += 1)
                            {
                                arr_23 [i_1] [i_1] [2] &= (((0 ? var_5 : 1)));
                                arr_24 [i_0] [2] [i_6] [3] [3] = ((((((arr_0 [i_0]) ? var_6 : (arr_2 [i_0] [i_3])))) ? (((min(1, 1)))) : (((arr_8 [i_0] [i_1] [9] [i_2] [5] [0]) ? (arr_8 [i_0] [i_0] [6] [8] [i_0] [i_0]) : (arr_2 [i_0] [i_1])))));
                                var_14 ^= ((((((((var_2 ? var_3 : 1))) ^ ((var_2 ? var_6 : 1))))) ? var_0 : (((((((arr_14 [i_0] [i_0] [i_0] [0] [i_0] [i_0] [1]) + 2147483647)) << (1 - 1))) ^ var_7))));
                            }
                            var_15 += (min(97, var_0));
                            var_16 = min((arr_2 [i_0] [i_0]), (arr_2 [i_2] [i_0]));
                            arr_25 [3] |= var_5;
                            var_17 |= var_2;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
