/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_1 - 1] [17] [i_1] [17] = (((arr_7 [i_1 + 3] [i_1 + 4] [i_1 - 1]) & (arr_6 [i_1 - 4])));
                        arr_10 [i_2] [1] [i_2] [i_2] [i_1] = (((((39290 % (max(var_14, var_2))))) - (max(-9223372036854775794, (arr_3 [i_0] [i_2] [i_3])))));
                        arr_11 [i_0] [i_1] [i_2] [i_1] = (max((arr_0 [i_0] [i_0]), ((((18443029923438962644 & 1) || 13)))));
                    }
                }
            }
        }
        var_20 -= 2;
        var_21 = (arr_2 [i_0]);
    }
    var_22 = 4294967292;
    #pragma endscop
}
