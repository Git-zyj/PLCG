/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 += var_5;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 ^= 1;
                                var_13 ^= (((247 ? 245 : (8 - 65535))));
                                arr_11 [i_0] [i_3] [i_4] = (min(((-((min(0, 23832))))), ((max(var_6, ((max(0, var_4))))))));
                            }
                        }
                    }
                }
                arr_12 [i_1] [i_0] [i_0] = (max(var_0, ((max(1, (max(1, 36145)))))));
                var_14 = ((!((max((~var_10), ((max(0, -7362))))))));
            }
        }
    }
    var_15 *= (max(((-21112 | ((max(var_8, -1))))), var_3));
    #pragma endscop
}
