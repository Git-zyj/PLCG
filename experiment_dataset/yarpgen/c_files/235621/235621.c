/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 += (199 ^ -111);
                    var_19 += (min(((min(111, 0))), ((~(arr_5 [i_0] [i_0] [i_2] [i_2])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                var_20 = (((min(var_3, var_8)) % var_14));
                var_21 += ((((((var_12 ? (arr_7 [i_4 - 1] [i_4 - 1]) : (arr_7 [i_4 - 1] [i_4 - 1]))) + 2147483647)) << (var_9 - 109)));
            }
        }
    }
    var_22 = ((var_2 ? (((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (var_5 - 1349132699))) | (((max(127, var_0)))))) : 2851593163));
    #pragma endscop
}
