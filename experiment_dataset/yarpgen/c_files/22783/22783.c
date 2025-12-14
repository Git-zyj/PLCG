/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 -= (max((arr_3 [i_0] [i_0] [i_0]), (-127 - 1)));
                    var_17 += ((41 ? 234 : (-127 - 1)));
                    arr_10 [i_0] [i_1] [21] [i_2] = ((((arr_2 [i_2]) > (arr_2 [i_0]))) ? (((arr_2 [i_0]) / var_7)) : (min(var_10, 130023424)));
                    var_18 |= 253286718;
                    var_19 = (max(((2056126280 ? (arr_9 [i_2] [i_2] [i_1] [i_0]) : (arr_9 [i_0] [i_0] [i_1] [i_2]))), (min(-var_10, ((min(0, 28912)))))));
                }
            }
        }
    }
    var_20 -= (var_12 ? (((((-1344158754 ? 253286731 : 22))) ? (-1125833240 || 234) : ((max(var_12, var_6))))) : (~var_10));
    #pragma endscop
}
