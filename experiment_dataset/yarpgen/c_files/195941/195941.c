/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (max(((max((arr_3 [i_1] [i_0]), (min(var_10, var_1))))), (max(var_1, (arr_1 [i_1 - 2])))));
                    arr_8 [i_1] [i_0] [i_1] [i_1] |= (min(((min((max((arr_3 [i_0 + 1] [i_1]), var_1)), (arr_0 [i_1] [i_1 - 1])))), (max(var_9, 0))));
                }
            }
        }
    }
    var_12 -= var_7;
    var_13 ^= (max(((max((min(-1060711949, 768196779)), (min(3526770517, 3526770515))))), (max(var_2, var_6))));
    #pragma endscop
}
