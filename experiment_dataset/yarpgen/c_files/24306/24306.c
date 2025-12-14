/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((var_3 && var_16) % var_3)), (~-62)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_21 *= (-52 >= 52);
                var_22 = (max(var_22, (((~(((62 < (arr_2 [i_1 + 2] [4])))))))));
                arr_5 [i_1] [i_0] [i_1] = (min((4194303 ^ 32767), ((((6499141355248029323 | (arr_3 [i_0]))) & (~0)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_23 = (((max((((arr_1 [i_1 + 1]) - var_14)), (69 > 3517223271))) <= ((max(-29, 2451)))));
                            arr_12 [i_1] [i_1 + 1] [16] [21] = ((((((var_0 ^ (arr_2 [i_1] [15]))) % (((max(103, 85)))))) > (-98 == 35)));
                            var_24 = (min(var_24, (min((~-104), ((((max(var_17, 0)) == 8349726710434268585)))))));
                        }
                    }
                }
            }
        }
    }
    var_25 ^= var_0;
    #pragma endscop
}
