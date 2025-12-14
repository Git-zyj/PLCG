/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(2659698857, (min((~3515746897), ((var_4 ? 1923641833 : var_1))))));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_21 = (min(var_21, (((29644 ? 1513474065198453461 : (((2495510353827924688 ? 395173098 : 61768))))))));
        arr_2 [16] = var_8;
        var_22 = (min(var_22, ((((((22548 ? var_11 : var_9))) ? ((-((var_0 ? 17453 : var_14)))) : var_10)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_23 = (((((((min(1035503103, 2495510353827924688))) ? 140 : (~-1023)))) ? ((var_6 ? var_2 : -284785681)) : ((var_13 ? var_1 : 0))));
        var_24 ^= 2371325462;
        var_25 = (min(var_25, ((((60688 ? -1035503103 : 664388400928352881))))));
        arr_5 [i_1] [1] = ((~((~(!2809045910210757553)))));
    }
    var_26 ^= (((((((-(-127 - 1)))) ? -0 : var_0))) ? ((((!((max(65531, 29773))))))) : -2315731144);
    #pragma endscop
}
