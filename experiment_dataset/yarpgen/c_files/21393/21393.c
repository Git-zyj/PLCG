/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((24381 ? -24934 : ((max(24390, -49)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [12] [12] &= ((((max((min(24952, -954385390)), (!60)))) && ((((arr_3 [10] [2]) ? (arr_5 [0] [i_1] [i_1 + 3]) : (arr_4 [i_0] [i_0] [i_1 + 2]))))));
                var_14 = (max(var_14, ((max(41154, 63)))));
            }
        }
    }
    var_15 = max(((((var_8 / 3095443396553266110) ? ((min(var_5, 60))) : ((var_5 ? 985151446 : var_0))))), (((var_5 & -3282830156603400107) ? var_0 : (max(1, 1623920294533144405)))));
    #pragma endscop
}
