/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((149 * ((-((-7225039678620075649 ? var_15 : var_10))))));
    var_19 = (max(var_15, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] = var_11;
                    var_20 += (max((((!172) & ((var_5 ? var_7 : 1)))), ((17 ? (arr_0 [i_1 - 2]) : 14253))));
                    arr_7 [i_0] [i_1 + 1] [i_2 + 1] [i_2] = -7225039678620075649;
                    arr_8 [i_0] [i_2 + 2] |= 8724591961307158994;
                    var_21 = ((((((238 & var_0) ? (arr_0 [i_0 + 1]) : (~var_2)))) | var_6));
                }
            }
        }
    }
    var_22 = ((var_10 ? ((1 ? ((max(-7225039678620075664, -1241237150))) : var_10)) : var_2));
    var_23 = ((~(((var_9 & 63506) << (var_12 - 21838)))));
    #pragma endscop
}
