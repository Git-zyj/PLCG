/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (min(var_16, var_5));
                var_17 -= ((((8646911284551352320 ? (arr_4 [i_1] [i_0] [i_1]) : 2321391935)) & (var_8 & var_12)));
                var_18 = (max(var_18, (arr_1 [i_0] [i_0])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2] = var_7;
        arr_11 [i_2] [i_2] = (arr_9 [i_2]);
        var_19 -= (min((((max((arr_6 [i_2]), var_6)) % (arr_6 [i_2]))), ((766117840 ? (min(var_9, 127)) : var_6))));

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            arr_16 [i_2] = ((((max((14371211650981991163 < var_3), (min((arr_12 [i_2]), 104))))) ? (min((arr_14 [i_2] [i_2]), (arr_7 [i_2] [i_3 + 1]))) : (max(1973575360, var_6))));
            var_20 = ((-(min((max(var_5, -26)), (!var_3)))));
            var_21 &= (max(((1 + ((((arr_8 [i_2]) || var_9))))), ((var_13 & (arr_6 [i_2])))));
            arr_17 [i_3] [i_3 + 1] [i_2] = (max(1973575360, 1));
        }
    }
    var_22 += var_15;
    var_23 = (max(111, ((((max(5623934277792332815, var_6))) ? (((1 ? 8192 : -553149966))) : 18446744073709551615))));
    #pragma endscop
}
