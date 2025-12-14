/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (min(0, (11688984815488122704 & 1)));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_14 = ((((((min(255, (-127 - 1)))) ? (1 >= 8) : 255)) * 1));
        var_15 = (min((max(((18 ? -548933556648322439 : 8)), ((-6041495473043701651 ? 9223372036854775807 : 247)))), 247));
        var_16 = ((((max(((255 ? 10675052385410300077 : 1012384516929307338)), (((88 ? 1892698866726995104 : 247)))))) ? (((1 == ((29814 ? 1131977315 : 719551498))))) : 255));
        arr_2 [i_0] = 1892698866726995104;
    }
    #pragma endscop
}
