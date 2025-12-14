/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_16 = (arr_3 [i_1] [i_2]);
                var_17 = (max(var_17, (((var_0 ? (arr_4 [7]) : 3276762662309897335)))));
            }
            var_18 = (arr_1 [i_0]);
            arr_6 [i_0] [i_1] = ((15169981411399654281 ? 248 : (max(8599354310184709089, 248))));
            arr_7 [i_1] = arr_1 [8];
        }
        var_19 = (min(var_19, (~255)));
        arr_8 [i_0] = min(((((arr_5 [16] [i_0]) || 0))), (arr_4 [8]));
        arr_9 [i_0] = 35280;
    }
    var_20 = var_9;
    var_21 = var_13;
    #pragma endscop
}
