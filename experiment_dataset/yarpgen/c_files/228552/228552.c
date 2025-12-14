/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((1634426842 ? (!var_3) : (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 -= (2660540454 && 80);
                                var_13 = (max(((min(var_5, var_11))), var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 -= 126;
    #pragma endscop
}
