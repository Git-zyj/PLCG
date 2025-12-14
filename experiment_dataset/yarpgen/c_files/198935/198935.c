/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_4, (~var_14)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((var_18 && 17696163938646158578) ? var_8 : ((max(((var_10 ? var_7 : var_17)), (var_14 ^ var_18))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_11 [i_0] [i_1] [i_1] [i_1] = ((~((-((var_8 ? var_10 : 384))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_20 *= ((((((0 ? -1544994813199282048 : (-127 - 1)))) ? ((var_3 ? var_11 : var_3)) : var_7)));
                        arr_14 [i_1] = (var_9 ? ((-(min(-1544994813199282048, 1)))) : ((var_1 ? 30 : -var_13)));
                        var_21 = (max(var_21, ((min(((1 ? var_7 : 1073741824)), (648635009216007124 < var_17))))));
                    }
                    var_22 = (max(var_22, var_2));
                    var_23 = (max(var_23, (-var_1 - -var_9)));
                    arr_15 [i_1] = var_18;
                }
                arr_16 [i_1] [i_1] = (((-var_9 ? var_3 : (((var_18 ? var_5 : var_18))))));
                var_24 = (max(var_24, var_15));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                arr_23 [i_4] = ((~(~var_11)));
                var_25 = ((((max(var_18, var_11))) ? (((max(var_17, 0)))) : ((20 ? var_10 : 2175314260))));
                var_26 = (max(var_26, (1 * -1920447697)));
            }
        }
    }
    #pragma endscop
}
