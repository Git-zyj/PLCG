/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (max((((arr_1 [i_0]) * var_11)), -4581));
                arr_6 [i_0] [i_0] = (-((((arr_4 [i_1] [i_0] [i_0]) && (arr_4 [i_0] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_17 &= ((~((var_1 ? (arr_8 [i_0] [i_3] [i_2 + 1]) : 1390768176))));
                            var_18 = (~194);
                        }
                    }
                }
                arr_12 [0] [i_0] [0] = (~(~var_6));
                var_19 = ((~(((arr_1 [i_0]) ? (108 != 4) : ((((arr_9 [i_1] [i_1]) && (arr_10 [i_1] [i_1] [i_0] [1]))))))));
            }
        }
    }
    var_20 = var_13;
    var_21 ^= (!var_16);
    #pragma endscop
}
