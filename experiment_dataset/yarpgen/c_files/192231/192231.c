/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = ((var_0 || ((((~691506937) ^ ((((arr_4 [i_0]) ^ (arr_2 [i_0] [i_1])))))))));
                var_13 *= ((min(3603460342, -1104392438)) == (((min((arr_0 [i_1 + 1]), (arr_0 [i_0]))))));
                arr_6 [1] = ((-118 == (((!((max(140, 8167))))))));
            }
        }
    }
    var_14 = var_9;
    var_15 = ((((((118 | var_10) ? (((min(var_8, var_8)))) : (1893694837 % var_2)))) ? ((var_3 ? -var_0 : var_5)) : ((~(~var_9)))));
    #pragma endscop
}
