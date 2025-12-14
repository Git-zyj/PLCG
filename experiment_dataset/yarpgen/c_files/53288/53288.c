/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_10 ? (((9225772866158724780 << (var_18 - 15044675344211882648)))) : (min(var_4, (var_7 + 9609005932588001113))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, 843932839384658073));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_22 = (8438921286382615888 / 15382150821744411807);
                                arr_13 [i_0] [i_1] [i_2] [i_4] = ((!((!((max(3012914030406770292, var_4)))))));
                                arr_14 [8] [i_0] [13] [i_2] [9] [13] [i_4] = (var_11 ? ((-(~602856827955236521))) : ((4398045462528 ? 18446744073709551615 : 0)));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_1] [i_2] = ((+((((arr_3 [i_0]) && 18446744073709551615)))));
                }
            }
        }
    }
    #pragma endscop
}
