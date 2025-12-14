/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (!25);
    var_18 -= ((var_9 ? (-230 * 233) : 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = ((((-988116840 | var_1) ? ((-3254728545561934025 ? 14461 : -7277321023249121203)) : (13833745719018364340 != var_14))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] [i_0] [i_0] = 65514;
                                var_20 = ((((var_13 + (min(386258910539366849, var_7)))) - (31 + var_5)));
                            }
                        }
                    }
                }
                arr_15 [i_0] [13] [13] = -var_2;
                var_21 = (max(((9 | ((-25 ? 0 : 15)))), 240));
                var_22 = ((-5284014074077434238 ? (((3639122110 ? var_0 : 11))) : -3123779123998813351));
            }
        }
    }
    var_23 += (((((((var_11 ? 979635383 : var_5)) / var_2))) ? 6 : (((min(4820, -21585))))));
    #pragma endscop
}
