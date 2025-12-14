/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = ((2146837036 ? 243 : 125));
                                arr_13 [i_0] [7] [i_2] [i_0] [21] = ((((146 ? 4463 : 15462899291530539098))));
                            }
                        }
                    }
                    var_21 = ((-(((157 / 1) / -100))));
                    var_22 = (min(var_22, ((max(((~((-126 ? var_1 : var_14)))), (((1 ? ((~(-32767 - 1))) : var_16))))))));
                }
            }
        }
    }
    var_23 = var_2;
    var_24 = var_9;
    #pragma endscop
}
