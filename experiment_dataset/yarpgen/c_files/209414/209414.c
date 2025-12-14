/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((var_10 >> (var_8 - 2262968948)))) ? ((255 >> (var_17 - 14339727087780273106))) : var_0)) >> (var_13 - 24415)));
    var_21 = ((((((var_19 >> (var_10 - 114))) >> 24)) >> (204 - 191)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [11] = ((((((var_5 >> (var_1 - 1419655898))) >> (var_18 - 408602901936946349))) >> (-var_0 + 48748)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_22 = ((((116 >> ((((max(51271, -26))) - 65488)))) >> (((((var_6 >> var_15) ? ((var_8 >> (var_0 - 48714))) : (max(var_15, var_8)))) - 34512))));
                            var_23 = var_16;
                            var_24 = (((((var_12 ? var_13 : var_12)) >> (175 - 151))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
