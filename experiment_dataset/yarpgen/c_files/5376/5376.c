/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (arr_3 [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = (min((~-1), (((arr_11 [i_1] [i_1] [i_1 - 2] [i_1]) ? (arr_11 [i_1] [i_1 - 2] [i_1 - 2] [i_1]) : var_7))));
                                var_15 *= -var_7;
                                var_16 |= arr_0 [i_0];
                                var_17 = arr_9 [i_0] [i_0] [i_0] [i_0];
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((max(var_3, -var_12))) ? (~var_6) : 12490289274465001324));
    #pragma endscop
}
