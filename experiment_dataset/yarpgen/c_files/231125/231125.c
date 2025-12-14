/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = ((((((var_6 ? 1971555889218376753 : 1971555889218376733)) + (((2517463162 >> (1174743888 - 1174743862)))))) <= ((((var_3 ^ var_8) ? (min(var_0, var_4)) : (~-110513972))))));
    var_13 = (~var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [0] [i_0] = (arr_4 [i_0] [i_1] [i_2] [i_2]);

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_9 [i_0] = (((((-1 || ((max(var_6, var_5)))))) > (arr_3 [i_1 + 1] [i_1 - 1])));
                        arr_10 [i_2] [i_1] [i_2] [i_3] &= (((max((arr_5 [i_1 - 3] [i_1 - 3] [i_1 - 1]), -88562618)) - 1216258015));
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] = -88562618;
                        var_14 = (arr_4 [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        arr_14 [i_0] [10] = ((1971555889218376744 ? (((arr_2 [i_0]) ? 1971555889218376758 : (arr_0 [i_0]))) : -90));
                        var_15 = ((112 && ((!(arr_13 [i_0] [i_1 - 3] [i_2] [i_4 + 1])))));
                    }
                }
            }
        }
    }
    var_16 *= 88562626;
    #pragma endscop
}
