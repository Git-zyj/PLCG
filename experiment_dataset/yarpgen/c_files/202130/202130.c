/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (132271157 ^ var_4);
    var_15 = (min(var_15, (((-11510 > (-11532 && 11492))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 + 1] [i_1] [i_2 + 1] [i_1] [i_1] [i_0 - 1] [i_3] = ((-132271158 + (10 + 2033654671909192917)));
                                var_17 = (min(var_17, ((((((arr_0 [i_2 + 2]) / (arr_0 [i_2 - 1]))) << (((arr_10 [i_4] [i_2] [i_2] [i_1] [i_0]) % (-3778784982233978084 + 19422))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
