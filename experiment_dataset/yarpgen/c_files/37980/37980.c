/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (!-5344450549532864663);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (!4294967291);
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((-((~(!1))))))));
                                arr_12 [i_1 - 1] [i_0] [i_1 - 1] [i_2] [i_0] [i_0] = ((!((min((arr_0 [i_0]), (((var_0 ^ (arr_9 [i_1] [i_0])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, (((((max(var_12, (min(var_1, var_2))))) ? (((max(0, var_1)) + var_1)) : ((((!((((var_2 + 9223372036854775807) >> var_6))))))))))));
    #pragma endscop
}
