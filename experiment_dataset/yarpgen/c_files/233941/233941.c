/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!6664458736227460739) ? -680639087 : 1));
    var_13 = ((~(((!(var_2 < var_6))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [1] [i_0] = (((((((max(-6664458736227460742, 65535)) == (-9223372036854775807 - 1))))) / (max(((9919048917459796934 ? 38003 : -6664458736227460744)), (~0)))));
            var_14 = (((-2475580451482768965 ? 0 : 119)));
            var_15 = (~-1120708326);
        }
        var_16 *= ((~((7390488686475727529 ? (max(-1, -8028481275217078176)) : (((~(arr_3 [i_0] [i_0]))))))));
    }
    #pragma endscop
}
