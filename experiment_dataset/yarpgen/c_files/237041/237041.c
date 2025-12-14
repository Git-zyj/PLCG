/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((!(((-((max(var_8, 30373)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1 + 1] [3] [i_0] = -7;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = 7;
                                var_18 &= (max(1, -7693855440502732686));
                                var_19 = (max(((~(min(2147483647, 6745101997759915422)))), (~22961)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 &= var_2;
    #pragma endscop
}
