/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min((((~var_17) << (var_4 + 17308))), (!var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (arr_1 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_19 = -1;
                            arr_12 [i_0] = (min(4, (arr_11 [i_3 + 1])));
                            var_20 = (max(var_20, (((var_17 + ((min(((32768 << (238 - 235))), ((min(18902, 4)))))))))));
                            arr_13 [i_0] [i_0] = (+(((arr_8 [i_3 - 2]) & (((((arr_1 [i_0] [i_1]) > 4)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
