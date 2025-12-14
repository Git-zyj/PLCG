/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = ((((((((var_2 ? 5 : 11))) ? 694222941 : (max(var_7, (arr_1 [i_0])))))) ? (((var_2 << (var_9 - 100)))) : (arr_2 [i_0] [i_0] [i_0])));
                var_11 = max((((arr_2 [i_1 - 3] [i_1 - 2] [i_1 - 1]) | var_6)), -6652306300305488294);
            }
        }
    }
    var_12 -= 3332708099561040621;
    var_13 = ((((min(56873, var_4))) && 13077311266371075998));
    #pragma endscop
}
