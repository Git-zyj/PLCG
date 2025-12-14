/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((((min(-1, ((237 >> (-9111059620646664701 + 9111059620646664714)))))) ? -98 : -var_13));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = ((((var_6 + 9223372036854775807) << (((var_6 + 4997537232146512323) - 26)))));
                var_16 &= (min(((var_4 ? var_0 : (arr_4 [i_0 - 1]))), (((((var_3 << (var_5 - 1436481327))) & ((-(arr_0 [i_0]))))))));
                arr_6 [i_0] |= ((!((((((0 ? 1990354130 : -17621))) ? ((13835058055282163712 ? -1902610220 : 915729649)) : 0)))));
                var_17 ^= var_12;
            }
        }
    }
    var_18 = var_13;
    #pragma endscop
}
