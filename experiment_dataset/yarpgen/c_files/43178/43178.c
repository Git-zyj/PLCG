/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 9744203868742727114;
    var_14 = (max((((var_5 < 16945493526652850063) ? ((8702540204966824501 ? 8702540204966824501 : 1846602713)) : (((max(var_8, 38)))))), 4106236629));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (max((((arr_5 [i_1] [7] [20]) ? 8702540204966824501 : ((-7 ? (-9223372036854775807 - 1) : -39)))), ((((((arr_4 [i_0] [i_1]) / 7)) + ((((arr_3 [7]) > (arr_2 [i_0])))))))));
                var_16 = (min((-20080 != 32767), (1425533057 <= -38)));
                var_17 = (max(var_17, (arr_2 [0])));
                arr_6 [1] &= (arr_1 [15] [4]);
            }
        }
    }
    #pragma endscop
}
