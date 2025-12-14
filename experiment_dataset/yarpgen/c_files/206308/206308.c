/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = 3;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_13 = (min(var_13, 2825809170526049347));
                    var_14 ^= ((var_5 ? 2825809170526049342 : (arr_5 [i_0] [13] [4] [i_2])));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] [i_2] [i_2] [i_3] = ((175 ? var_0 : -var_2));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] = ((-((var_6 ? (arr_3 [i_1] [i_2]) : var_9))));
                            arr_15 [10] [i_1] [i_1] [i_1] [i_1] = (((arr_5 [i_0] [i_2] [i_3] [i_4]) ^ 112));
                        }
                        var_15 = (((7 || 5243282889478240765) ^ ((70 ? 1 : (arr_2 [i_0])))));
                    }
                }
            }
        }
    }
    var_16 = (((var_7 != var_2) ? ((((var_4 < var_7) >> (-var_5 + 113)))) : (max(((240 ? 16 : 0)), var_6))));
    #pragma endscop
}
