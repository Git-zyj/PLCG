/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-2044254086349232373 + 17973167420228281726);
    var_16 = var_6;
    var_17 &= ((!(((((min(var_12, var_10))) ? -19116 : ((623200959 << (var_9 - 131))))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_18 = ((((109 ? 623200959 : 285508392)) ^ (158 != var_8)));
        arr_2 [i_0] = var_8;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0 - 1] [i_0] = ((var_7 - ((var_14 ? 10900420632577985864 : var_4))));
            var_19 = ((var_10 ? (3188992925 * var_6) : (((-1823982882750504210 ? -107 : 1)))));
            var_20 = (((7723041150088600870 ^ 87) >> (var_9 - 99)));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] = ((var_1 % (147 & 124)));
                            var_21 = 2251799813685248;
                            var_22 = (min(var_22, (((((var_9 ? 10900420632577985864 : 33)) >> ((((var_6 ? var_11 : var_13)) - 3347258010957151569)))))));
                        }
                    }
                }
            }
            var_23 = (var_6 / var_11);
        }
        var_24 = ((27198 ? (((230 ? 1442437673 : var_7))) : 15));
    }
    var_25 = ((var_6 ? var_11 : var_4));
    #pragma endscop
}
