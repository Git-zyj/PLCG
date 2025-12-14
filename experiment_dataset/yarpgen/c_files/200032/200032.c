/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 4384;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = (min(4384, 4398046511088));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_4] [6] [13] [i_0] = ((~(arr_5 [15] [15] [i_0])));
                                var_13 = -61151;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_2;
    #pragma endscop
}
