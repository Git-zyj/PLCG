/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 &= ((((max((((!(arr_4 [i_0])))), ((2147483647 ? var_4 : (arr_0 [i_0] [i_1])))))) ? ((((arr_3 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_3 [i_0] [i_1])))) : (((arr_4 [i_0]) ? ((var_15 << (((arr_0 [i_0] [i_1]) - 8295879075425835580)))) : var_12))));
                var_20 = (((((2147483647 ? 12 : 255))) ? (((-(arr_1 [i_0] [i_1])))) : (max((arr_0 [i_0] [i_1]), (arr_4 [i_1])))));
                var_21 = (min((arr_4 [i_1]), 1));
                var_22 = var_7;
            }
        }
    }
    var_23 *= (((((3670016 ? ((-8691506770839159318 ? 1 : var_13)) : ((var_6 ? 32 : var_14))))) / 12));
    var_24 = 1;
    var_25 = ((255 * ((max(var_16, ((var_14 ? 127 : var_12)))))));
    var_26 = (2881048279 % 1);
    #pragma endscop
}
