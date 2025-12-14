/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(((22296 ? -32755 : 5999107351523226486)), (!var_8)))) ? ((-((var_11 ? var_11 : 4096)))) : (((-(~-1981011313954142130))))));
    var_15 ^= ((!((!((max(61440, var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_16 *= (max(var_7, (4080 + 65535)));
                        var_17 = (max(((-var_4 ? (2495117908854909504 & 20602) : (var_3 <= 63))), var_1));
                        arr_15 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] = 2676075589;
                        arr_16 [1] [11] &= (((((~-1981011313954142130) + 2147483647)) << ((((((-20608 ? var_11 : var_13)) ^ ((max(-1359160985064798529, 48))))) - 13077402194425320499))));
                    }
                    var_18 = ((-((((!var_7) && (!66))))));
                    var_19 = ((~(~1981011313954142099)));
                }
            }
        }
    }
    #pragma endscop
}
