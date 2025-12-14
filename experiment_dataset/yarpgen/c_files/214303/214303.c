/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((max((arr_2 [i_1 + 2]), (arr_4 [i_0] [i_1])))) <= ((max(979530838, (arr_4 [i_0] [i_1 + 2]))))));
                arr_7 [11] [7] = (((((arr_0 [i_1 - 1]) ^ (arr_0 [i_1 + 2]))) ^ ((((arr_5 [i_1 - 2] [i_1 + 1]) && (268427264 / -4002))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_14 [10] = (arr_3 [i_3] [12]);
                var_17 = (-9223372036854775807 - 1);
                arr_15 [i_2] [i_3] [i_3] = (max((min((arr_3 [i_2 - 2] [i_2 + 1]), (arr_3 [13] [i_2 + 2]))), (-9223372036854775807 - 1)));
            }
        }
    }
    var_18 = (min(var_18, var_0));
    var_19 = var_5;
    #pragma endscop
}
