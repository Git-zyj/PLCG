/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = ((var_2 ? 5 : (((-(arr_1 [i_0]))))));
                var_16 = (min(var_16, (((((((18446744073709551598 ? -1662876000 : var_7))) || 1527502139))))));
                var_17 = arr_4 [i_0] [i_1] [i_1];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_18 = (var_7 ? (min((max(var_13, (arr_4 [i_0] [i_1] [i_0]))), var_12)) : (max(((var_6 ? 14624375059529199654 : -1210459542)), (arr_6 [i_0] [i_1] [i_4 + 1]))));
                                var_19 = ((-34120028 || ((!(arr_12 [i_4 - 3] [i_4] [i_4 - 2] [i_4] [i_4] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (var_10 ? 9564556945578769586 : ((((((!(-2147483647 - 1))) || var_7)))));
    #pragma endscop
}
