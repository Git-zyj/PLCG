/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((-1494460625 / 750020206) ? (var_2 / -31692) : 1494460624)), var_8));
    var_17 = ((((min(var_6, var_6))) ? -26995 : ((var_4 ? -18074 : (18073 || -1494460639)))));
    var_18 = min(-18074, ((((min(3544947089, -1494460625))) ? (~var_9) : var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] = (-4587039011336848281 >= 252);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (min(((~(arr_2 [i_0] [i_2]))), (((arr_2 [i_0] [i_1]) ? (arr_7 [i_3 + 1] [i_2] [i_1] [7]) : (arr_2 [i_0] [i_0])))));
                                var_20 = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_21 = var_3;
                                var_22 = var_7;
                                var_23 = 4587039011336848280;
                            }
                        }
                    }
                    var_24 = (((-3798225342389195334 ? (~1) : 18074)));
                }
            }
        }
    }
    #pragma endscop
}
