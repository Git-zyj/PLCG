/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (arr_1 [i_1]);
                var_14 = (~28);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_15 = ((((var_9 ? 0 : (arr_15 [i_5 - 2] [i_4] [i_2] [i_2]))) * (min(-3562, -1590917555))));
                            var_16 = (((((-(arr_16 [i_2] [i_3] [i_3 - 1] [i_2] [11])))) ? -3562 : (-1990168870 / 2147483645)));
                            var_17 = (max(var_17, (arr_9 [5])));
                            var_18 = (max(var_18, var_9));
                        }
                    }
                }
                var_19 = (24786 ? 17652846215006686324 : (((min((arr_7 [i_2] [i_2]), -7234324731418665660)) % (((-15248 ? 4194303 : -24789))))));
            }
        }
    }
    #pragma endscop
}
