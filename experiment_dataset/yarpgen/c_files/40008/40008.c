/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;
    var_15 = (((((!((min(1, 1601235697)))))) ^ (((min(var_4, 1073740800)) - 1073740805))));
    var_16 &= 2096896;
    var_17 = ((~(min((((var_1 ? -23737 : var_13))), (max(var_10, var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 ^= min(-4810527145608224406, -1073740807);
                    arr_8 [i_0] [i_2] = (((((max(var_11, 11499))) ^ var_5)));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_19 = 3213897993155572739;
                        var_20 = (max(var_20, ((((((var_8 | (arr_7 [i_0] [i_2] [i_3])))) ? (((arr_0 [i_3] [i_3]) | 32767)) : (min((arr_7 [i_0] [i_2] [i_3]), var_11)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
