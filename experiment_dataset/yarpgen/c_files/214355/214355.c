/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((3543 ? 0 : 0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                arr_14 [i_2] &= 10065154664695652907;
                                var_12 = (((max((arr_3 [i_0]), 16489970624984065249)) >> ((((342538695092267139 ? 342538695092267137 : 1956773448725486366)) - 342538695092267097))));
                            }
                            arr_15 [i_0] [i_2] = ((!(((var_1 << (10065154664695652907 - 10065154664695652881))))));
                            var_13 ^= (((((arr_0 [i_3 + 1] [i_1 + 1]) ? (arr_0 [i_3 - 2] [i_1 - 1]) : var_9))) > (~var_2));
                            arr_16 [i_0] [i_1 - 2] [i_0] [i_3] = 0;
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_0] = (min(104, 151));
            }
        }
    }
    var_14 = (max(var_14, (((((((((342538695092267148 ? var_3 : var_6))) ? (0 + var_6) : (342538695092267139 & 18446744073709551611)))) ? (((var_3 | var_0) ? ((15881 ? 8381589409013898690 : 0)) : var_9)) : ((((((var_10 ? 10065154664695652907 : 16489970624984065249))) ? (!-9) : var_0))))))));
    #pragma endscop
}
