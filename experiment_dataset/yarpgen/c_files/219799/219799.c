/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 534773760;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (max(-192, (534773760 && 188)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = (((min(var_14, (max(var_6, var_5)))) * -var_3));
                            var_21 = (((max(var_12, var_12))) / ((var_15 ? (min(var_5, var_13)) : var_14)));
                            var_22 += var_14;
                        }
                    }
                }
            }
        }
    }
    var_23 = ((var_8 ^ ((var_7 << (!var_0)))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_24 = ((!(((((min(2147483636, 0))) / -var_15)))));
                                var_25 = ((-((var_11 ? (((var_1 ? var_9 : var_8))) : ((1 ? 39327 : 30))))));
                                var_26 -= (((!var_11) ? (var_4 || var_13) : (max(192, (-9223372036854775807 - 1)))));
                                arr_25 [i_6 + 1] [i_7] [i_6 + 1] [i_4] [i_4] = (((1 % -1135291854) << (var_7 - 4657579573520203680)));
                            }
                        }
                    }
                    var_27 *= var_15;
                    arr_26 [i_4] [i_5] [i_6] = (((((var_13 - (var_4 < var_6)))) && ((((4294967295 | 39327) ? (((1 ? 1 : 1))) : var_17)))));
                }
            }
        }
    }
    #pragma endscop
}
