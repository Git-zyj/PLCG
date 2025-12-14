/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min((min(9098706122658733863, 21)), var_5))) ? 147 : ((253952 ? 1 : var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_0] [i_1] = ((((min((arr_12 [i_0]), (21 + 19)))) <= ((1 ? 27 : (arr_13 [i_4 - 3] [i_3 - 1] [i_0] [i_3] [i_1] [i_4])))));
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] [1] [i_4] = ((((max((arr_11 [i_3 + 1] [i_3 - 1] [i_4 - 2] [i_4 - 3]), (arr_11 [i_3 + 1] [i_3 + 1] [i_4 - 3] [i_4 - 3])))) ? (arr_11 [i_3 - 1] [i_3 - 1] [i_4 - 3] [i_4 - 2]) : 15));
                                var_13 ^= 14924150443947392189;
                            }
                        }
                    }
                }
                var_14 = 3522593629762159427;
            }
        }
    }
    var_15 = (min(var_2, 1));
    #pragma endscop
}
