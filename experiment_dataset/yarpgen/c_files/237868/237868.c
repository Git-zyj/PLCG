/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 |= var_0;
    var_21 = (max(var_21, (((542839845 && (!1))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_22 *= 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_23 = (max((!469523200712985644), (max((arr_8 [i_0 - 3] [i_0 - 2]), 9339164621009471384))));
                                var_24 += ((((-(arr_10 [i_2] [i_2] [i_1 + 1] [i_1] [i_0 - 1] [i_0 + 1]))) == ((((min(-8772192515150170319, 1)) != 1)))));
                            }
                        }
                    }
                    var_25 = ((~(((arr_2 [i_1 - 2] [i_1] [i_0]) - (arr_2 [i_1 - 2] [i_1] [i_0])))));
                    var_26 = (((max(var_11, (arr_0 [i_0] [i_0]))) / -4587390706547074427));
                }
            }
        }
    }
    #pragma endscop
}
