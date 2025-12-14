/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((min(var_6, (var_7 * 14)))) && ((((14473774325530621960 > var_8) * ((var_5 >> (var_10 + 1814135330))))))));
                arr_5 [i_1] = (((min(var_0, 190)) | (-19051 || 3972969748178929648)));
                arr_6 [i_1] [i_0] = (((var_5 < -2658438659300338472) ? (1 > 0) : (var_4 ^ 14473774325530621960)));
                var_12 = ((((((var_1 << var_7) || ((min(var_6, 1760411128)))))) < var_7));
            }
        }
    }
    var_13 = (max(var_1, var_2));
    var_14 = ((((min(6512469581462719967, 5082606466884045189))) ? (3972969748178929645 && -6) : (min((var_9 || 1), ((var_1 >> (var_1 - 16721)))))));
    #pragma endscop
}
