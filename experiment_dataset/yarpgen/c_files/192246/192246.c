/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_16);
    var_18 = min(var_16, ((max((127 <= var_8), var_4))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((1416216945 ? (~2147483640) : -2147483634));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_19 = (((!18446744073709551603) != 1));

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                var_20 = (((((~(arr_1 [i_0] [i_1])))) ? (arr_6 [i_0] [i_0] [i_2 + 1]) : ((-126 ? var_7 : 247))));
                var_21 = 1;
                var_22 *= (~8461104736683011087);
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_0] [i_4] = 127;
                            var_23 ^= (((arr_4 [i_0] [i_0]) ? -2147483629 : 15));
                        }
                    }
                }
            }
            arr_17 [i_0] = (!var_16);
        }
        arr_18 [i_0] = -var_9;
    }
    var_24 = var_16;
    var_25 ^= var_0;
    #pragma endscop
}
