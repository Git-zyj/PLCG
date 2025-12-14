/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    var_17 = (max(var_17, (((((~(var_1 > var_10)))) <= (max(2406777482, (~12310093374673509772)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_18 = (((arr_0 [i_0] [i_0]) ^ ((-(arr_0 [i_2] [0])))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_1] [i_1] [i_2] [i_4] [i_4] = (((((((-2539783337889218640 ^ (arr_11 [i_0] [4] [i_2] [i_3]))) | 32768))) & ((((min(var_10, (arr_13 [i_1] [i_2] [i_3] [i_4])))) | (min(15473759278556642809, 32776))))));
                            var_19 = 32757;
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_5] = ((((min(((min(var_12, (arr_6 [i_5] [i_0] [i_1] [i_0])))), (-107 - 173)))) | (arr_4 [i_0] [i_0])));
                            arr_19 [i_0] [i_1] [i_2] [i_5] [i_5] [i_5] = ((+(((arr_10 [i_1] [8] [i_3]) ? (arr_10 [i_0] [i_1] [i_2]) : (arr_10 [i_0] [i_0] [9])))));
                            var_20 = 69;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_21 = -9223372036854775798;
                            var_22 = -18757;
                            var_23 = (arr_17 [i_0] [i_0] [i_6] [0] [i_6]);
                        }
                        arr_22 [i_0] [0] = ((((-19656 ? 108 : (((arr_16 [i_0] [i_0] [i_0] [2] [i_0]) ? (arr_6 [i_1] [i_1] [i_1] [i_1]) : var_4)))) | ((((!(arr_17 [i_0] [i_1] [i_2] [i_3] [2])))))));
                    }
                    for (int i_7 = 1; i_7 < 6;i_7 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_2] [5] = 2875;
                        var_24 ^= (min((arr_17 [8] [i_2] [i_2] [i_0] [i_0]), (((arr_5 [i_7] [i_0]) * (arr_8 [1] [9] [i_7 + 2] [i_7 + 2] [i_7 - 1] [7])))));
                        var_25 = (max(var_25, var_11));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_26 = ((1 <= (~2972984795152908828)));
                                var_27 = 927546790;
                                var_28 = ((var_6 ? ((((((arr_9 [i_9]) / -533874424))) ? (var_12 * 118) : (max(var_14, var_11)))) : 64));
                                var_29 = ((((!(((8 ? (arr_20 [i_0] [i_0] [6] [8] [1] [i_9]) : (arr_13 [i_0] [i_2] [i_8] [i_2])))))) ? (min((arr_27 [4] [8] [6]), (((((arr_0 [i_8] [i_9]) + 9223372036854775807)) << (((arr_4 [i_0] [7]) - 17130957256200649788)))))) : var_10));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = ((~((-36090698 * (6980 / 2359062837)))));
    #pragma endscop
}
