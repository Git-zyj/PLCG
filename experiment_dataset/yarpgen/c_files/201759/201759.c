/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((max(var_11, ((84 ? 111 : 36088))))) ? 6034106121760235064 : (((((((4602678819172646912 ? 122344707 : 16644))) || 64202))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 -= (max(1, (((~1322) ? ((((arr_12 [i_2]) ? (arr_6 [i_1] [i_2] [i_4 - 2]) : var_3))) : ((var_2 ? var_1 : var_10))))));
                                var_13 = var_10;
                                var_14 &= ((11128555413524594536 * (min(((((arr_8 [i_1] [i_1]) > 87))), ((64209 ? (arr_9 [i_0] [i_1] [i_2] [i_3] [17]) : (arr_12 [i_0 - 1])))))));
                                arr_13 [i_0 - 3] [15] [1] [i_0 - 3] = (((((1323 ^ (arr_0 [i_0 + 2] [i_0 + 2])))) ? (((arr_0 [i_0 - 3] [i_1]) << (var_0 - 1828515753253839584))) : ((min((arr_0 [i_0 + 2] [i_0 + 2]), (arr_0 [i_0 + 1] [i_1]))))));
                                arr_14 [i_0] [i_0] [i_2] [10] [17] [i_4 + 3] [i_4 - 2] = ((~(((arr_6 [i_2 + 1] [i_1] [i_0 + 3]) * (arr_6 [i_0] [i_1] [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(var_15, (((var_1 ? (((var_10 ? -var_4 : ((var_10 ? var_10 : 1))))) : ((-21454 ? var_0 : (-10 >= var_6))))))));
    var_16 = var_0;
    #pragma endscop
}
