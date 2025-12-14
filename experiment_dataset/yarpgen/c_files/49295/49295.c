/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] |= ((((((((var_1 ? var_7 : 64))) ? 0 : (-89 <= 8192)))) || (((-12392 ? 1 : -5021180559371203978)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, ((min(var_1, ((6335000288550326480 ? -1 : var_8)))))));
                            var_14 -= (((((12 * (!56)))) ? (+-65490) : ((76 >> (18257710059773525134 - 31867)))));
                            arr_11 [i_1] [i_1] [i_2] [i_3] = (i_1 % 2 == zero) ? (((((var_4 ? 12391 : (max(var_6, var_0)))) * ((15 >> (((arr_9 [i_3] [i_1] [i_2]) - 9998299080004045480))))))) : (((((var_4 ? 12391 : (max(var_6, var_0)))) * ((15 >> (((((arr_9 [i_3] [i_1] [i_2]) - 9998299080004045480)) - 809526682621327438)))))));
                        }
                    }
                }
                arr_12 [i_1] [i_1] [i_0] = ((var_11 == ((((248 < (!var_2)))))));
            }
        }
    }
    var_15 = (max(var_15, var_4));
    #pragma endscop
}
