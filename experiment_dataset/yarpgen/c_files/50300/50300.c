/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_8 ? (~var_2) : -var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((-39050 & (~var_11))));
                var_16 = ((-(((arr_5 [2] [i_0]) ^ (((~(arr_4 [0] [i_0] [0]))))))));
                arr_7 [i_0] = (((arr_5 [i_0] [1]) >> (((((arr_1 [i_0]) ? var_4 : 67108832)) - 67108825))));
                arr_8 [i_0] = 2963001254596688161;
            }
        }
    }
    var_17 = (!1);
    var_18 = var_14;
    #pragma endscop
}
