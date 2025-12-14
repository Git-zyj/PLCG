/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = ((var_2 && (((7169576733580754794 ? (((-9223372036854775807 - 1) ? 255 : -2346781022624285622)) : -1270002947256064646)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = ((((((arr_2 [i_0] [i_2 + 2]) ? (arr_2 [i_1] [i_1]) : -1515606367421036821))) ? (((arr_2 [i_0] [i_2 + 2]) - 171)) : (((((arr_2 [i_1 - 1] [i_0]) > (arr_2 [16] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_4] = ((((((arr_11 [i_4] [i_1] [i_2] [i_1]) << (var_3 + 2977057474999198924)))) | var_4));
                                arr_16 [i_0] [i_0] [i_3] [i_2] = (((max(var_11, (~0)))) ? -6019509023440746979 : (max(((-221593564899238681 ? -221593564899238681 : var_8)), 63)));
                                arr_17 [i_0] [i_1 - 2] [3] [i_2] [15] = ((arr_7 [i_0] [i_0]) >> (((!(arr_9 [i_1 - 2] [i_2 - 4])))));
                                arr_18 [i_0] [i_0] [21] [i_3] [i_4] [i_2] = 7169576733580754794;
                            }
                        }
                    }
                    arr_19 [i_2] [i_2] [i_2] = 9223372036854775801;
                }
            }
        }
    }
    #pragma endscop
}
