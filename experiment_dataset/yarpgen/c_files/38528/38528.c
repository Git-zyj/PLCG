/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((min(0, (var_10 - -494988737))))));
                    var_12 = (((!-44) ? (((var_0 == ((-97 ? 44 : 11))))) : var_5));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                var_13 = (min(var_13, 238));
                var_14 = 238;
                arr_15 [i_3] [i_3] = (max(((((var_10 ? 65535 : var_5)) + (!494988737))), (18 | 127)));
                arr_16 [7] = (max(((var_7 ? 127 : var_7)), (!-44)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_5] [i_5] = var_10;

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_15 = (min(((26 >> (5205241743814076616 - 5205241743814076608))), (min(61514, (2147483647 / var_0)))));
                        var_16 = ((((var_6 > ((var_9 ? 19 : 0))))) << ((var_0 ? var_9 : 16068)));
                    }
                    arr_27 [i_5] [i_6] [i_5] [i_6] = (!-1);
                    arr_28 [13] [13] [i_6] [i_5] = 16068;
                }
            }
        }
    }
    var_17 |= 1266904328;
    var_18 = var_4;
    #pragma endscop
}
