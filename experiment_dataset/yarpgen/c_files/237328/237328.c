/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [11] [i_1] [i_1] = ((~(arr_1 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] = (29561 || 18);
                                var_16 = ((((((((237 ? 11031103580974057051 : (arr_12 [i_1] [i_1] [i_3] [i_4])))) ? (arr_7 [i_0 - 3] [i_0] [i_0 - 1] [i_0]) : ((4622496149203539162 ? 24 : 45030))))) ? var_6 : -600445738823706661));
                                arr_16 [i_4] = (((206 || 23) ? (((-25 || (237 || 8)))) : ((20 ? (!249) : (((4190208 || (arr_8 [i_0 + 1] [i_1] [i_2] [i_2] [0]))))))));
                                var_17 ^= (max(232, (max(18573, 19))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_0] = -23;
            }
        }
    }
    var_18 = ((!((((var_9 ? var_13 : var_1))))));
    #pragma endscop
}
