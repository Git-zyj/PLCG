/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max((((var_7 ? (arr_1 [i_0] [i_0]) : var_5))), ((-3653432860785376324 ? var_12 : 4074273568670132768))))) ? (((arr_1 [i_0] [i_0]) / -3653432860785376316)) : (((max(8128017399684032840, (arr_1 [i_0] [i_0]))) ^ ((8128017399684032825 ? var_7 : var_13))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_16 = (arr_4 [i_0] [i_1]);
            var_17 *= ((!((((((((arr_4 [i_0] [i_0]) > 8128017399684032820)))) % (-8128017399684032849 % -3653432860785376320))))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_18 |= ((~((((var_11 ? 3653432860785376323 : var_1)) | 9223372036854775807))));
                    var_19 = var_5;
                    arr_12 [i_0] [i_0] [4] [i_0] |= (((((max((arr_4 [i_0] [i_3]), var_2)))) ^ (min(757858500, (arr_0 [i_2])))));
                }
            }
        }
    }
    var_20 &= ((((max(var_7, -var_0))) ? (max((var_13 ^ var_12), (-9223372036854775807 < var_3))) : var_15));
    #pragma endscop
}
