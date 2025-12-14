/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_11 += var_1;
                            arr_9 [i_0] [i_0] [i_0] [i_3] = (min(63556, (min((arr_3 [i_0] [i_3]), (((-9223372036854775807 - 1) ? (arr_8 [i_1 - 2]) : (arr_5 [i_2] [i_0] [i_2])))))));
                            arr_10 [i_1 - 2] [i_0] [i_1 - 2] = (arr_1 [i_0]);
                            var_12 = ((0 ? -18087 : 5));
                        }
                    }
                }
                arr_11 [i_0] = (min((min((arr_1 [i_0]), (arr_2 [i_0] [i_0]))), ((((arr_8 [i_1]) ^ (((~(arr_4 [18])))))))));
            }
        }
    }
    var_13 = ((var_9 ? (~2147483647) : 24576));
    var_14 = (var_0 > var_7);
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_16 = ((~(arr_17 [11] [i_5] [3])));
                    var_17 ^= 9102196836777580223;
                }
                var_18 = (arr_16 [i_4] [i_5]);
            }
        }
    }
    #pragma endscop
}
