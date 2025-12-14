/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (min(((((min(var_1, var_0))) ? (~4640302525390324209) : var_4)), var_16));
    var_20 = 16208;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = ((-1 ? 31421 : 470567923));
        arr_2 [i_0] [i_0] = ((var_14 << (((arr_0 [i_0]) - 221122296))));
        arr_3 [i_0] [i_0] = max((!3294074498), 9);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 = var_16;
        var_23 = (((arr_0 [i_1]) & (((arr_0 [i_1]) ^ var_17))));
        var_24 = (((max(var_16, (arr_1 [i_1]))) & (((~(arr_1 [i_1]))))));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_12 [i_2] [i_1] = (max(-16205, 16779));
            var_25 = var_14;
            arr_13 [i_2] [i_2] [i_2] = var_8;
            arr_14 [i_2] = (arr_10 [i_1]);
        }
        var_26 = (min((max((arr_0 [i_1]), var_6)), ((((arr_0 [i_1]) % var_10)))));
    }
    var_27 = ((5089053420304071226 ? (((min(65523, 16786)))) : -4640302525390324209));
    #pragma endscop
}
