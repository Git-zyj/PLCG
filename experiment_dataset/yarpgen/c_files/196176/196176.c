/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = ((((min((arr_6 [i_1] [i_2 - 2] [i_2 - 1]), var_11))) ? (arr_2 [i_0]) : (max(((max(var_8, var_2))), ((16374226994204321103 ? var_16 : 2072517079505230513))))));
                    var_18 = -21659;
                }
            }
        }
    }
    var_19 = 366163011;
    var_20 = ((366163023 >> (3992367698 - 3992367688)));
    #pragma endscop
}
