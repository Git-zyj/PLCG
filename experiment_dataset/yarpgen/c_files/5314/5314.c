/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 *= (!-2497898607456637980);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 = (~1429476853);
                            var_14 = (max(var_14, (((min((-127 - 1), 0))))));
                            var_15 += (-127 - 1);
                            var_16 = 346;
                        }
                    }
                }
                var_17 = (((((min(-1429476853, 17)))) ? ((127 ? 1429476860 : (~4248549376))) : (~633984259)));
                arr_11 [i_1] [i_1] = (min(((max(1429476855, 4294967283))), ((26959 ? 6730081749586419806 : -1429476869))));
            }
        }
    }
    var_18 = (min(1, (min(8068008886716387566, (-127 - 1)))));

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_19 = ((-(~38577)));
                        var_20 = ((((min(127, 0))) ? (~121) : (min(43092, (-127 - 1)))));
                    }
                }
            }
        }
        var_21 = (min(var_21, (((-126 ? (((max(38562, 13981)))) : ((124 ? -966944203019519578 : -1141530773)))))));
    }
    var_22 = var_9;
    #pragma endscop
}
