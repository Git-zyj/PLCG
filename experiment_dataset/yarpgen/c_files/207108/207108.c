/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((var_3 != var_4) * var_9)), (((((var_5 ? -92 : var_7)) <= ((max(var_2, var_2))))))));
    var_11 = (~17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((186 ? ((((~2047) <= 202))) : (~92)));
                var_12 ^= (arr_3 [0] [0]);
                arr_8 [i_0] [i_0] [i_1] = (max(87, (min((max(-6128892865068967545, 49)), (arr_1 [i_1])))));
            }
        }
    }
    #pragma endscop
}
