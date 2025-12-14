/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] = (((min(1969520888579030618, 2444645638236834342)) > (min(16477223185130521001, 1))));
                var_16 = (~-16477223185130520997);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_17 *= 51515;
        var_18 = ((-(~0)));
        var_19 ^= (!-878182738);
    }
    var_20 = (min((min(((min(1, 1))), 4683)), (((!(!44578))))));
    var_21 = (min((min((min(1969520888579030618, 1)), 1969520888579030618)), (min((~1), (min(-29207, 16477223185130520993))))));
    #pragma endscop
}
