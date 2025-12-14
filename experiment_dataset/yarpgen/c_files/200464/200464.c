/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_10 = ((-0 ? (-17136 / var_5) : (((var_4 + var_3) + var_4))));

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        var_11 = (var_6 ? ((5058 ? (65535 | 14064) : (arr_10 [i_0]))) : ((((-6467700984236138515 >= ((var_3 ? var_0 : 1028436831085836106)))))));
                        arr_13 [i_0] [i_0] [5] [i_2] [i_3] = ((2583411545 ? var_0 : ((-89168902 ? 89168909 : (var_8 & -387189517)))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] = 65535;
                            arr_18 [i_0] [i_0] [i_2] [i_4] [i_4] [i_0 - 1] [i_0] = (min(5060, ((var_9 - (arr_14 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0 - 2])))));
                            arr_19 [i_0] [i_0] [i_4] = (max(1782634861, 17136));
                        }
                        var_12 = 16384;
                        arr_20 [i_0] [i_1] [8] [8] [i_3 + 1] = var_1;
                    }
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        var_13 = ((min(3052462476, 17537583738235785956)));
                        arr_23 [i_0] [i_0] [i_0] [i_0] = -16384;
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, var_0));
    #pragma endscop
}
