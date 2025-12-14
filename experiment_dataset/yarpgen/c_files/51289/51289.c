/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((((((var_3 << (var_15 - 8484289183279120242))) | 96))) ? (177 ^ 1) : ((1 ? (var_11 % 103) : (max(840651502644244886, 1465794946)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [1] = (((((((var_4 ? 88 : -2756354682890270854))) ? var_5 : (max(var_14, var_13)))) + (2756354682890270849 + -var_6)));
                            var_19 = (((!0) ? ((~((-4021776371531358684 ? 4021776371531358683 : -3710131522424782369)))) : (((((2584983666 ? 0 : -2147483630))) ? ((var_3 ? 4021776371531358687 : var_4)) : (var_16 << 12)))));
                            arr_12 [i_2 - 1] |= ((!(!153)));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = (((((var_0 ? (!var_9) : (!var_8)))) ? (!187) : var_14));
                arr_14 [i_0] [i_1] [i_1] = (((((2147483629 / 44) ? 6624974890376697605 : var_3)) * (((((var_11 << (1779311687 - 1779311681)))) ? (!-462308218603733461) : (var_11 * var_17)))));
                var_20 = var_11;
            }
        }
    }
    #pragma endscop
}
