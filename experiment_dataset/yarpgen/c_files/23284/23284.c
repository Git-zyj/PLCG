/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!-224239474);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((((((arr_3 [i_0] [5] [i_1]) ? 524287 : 94)))))));
                                var_22 *= arr_4 [i_3];
                                arr_13 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_4] = (max(((min(var_15, 544156544))), (((((7690788323928430043 ? -1432695305 : -336757495))) ? (((arr_3 [0] [i_0] [i_0]) ? 7690788323928430048 : 122)) : -1259964409))));
                            }
                        }
                    }
                }
                var_23 = (max(var_23, (arr_12 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_1])));
                var_24 = ((((var_18 ? var_17 : -1259964422))));
                var_25 = 5408177750600372297;
                var_26 &= max(((54 ? (arr_6 [i_0 + 1] [i_0] [i_0]) : (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]))), -2303258833870386736);
            }
        }
    }
    #pragma endscop
}
