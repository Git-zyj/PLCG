/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 ^= (((min((max((arr_0 [i_0]), var_17)), (-99 < 98))) * ((min(1292, 0)))));
        var_19 = (min(var_19, (((((max((-14540 > 65535), ((var_6 & (arr_1 [i_0] [i_0])))))) <= (min(2754630732, -7837435809211599930)))))));
        var_20 += (min((((((((arr_1 [0] [i_0]) >= 514))) > (32767 + var_9)))), (((max(514, (arr_0 [i_0]))) + ((var_1 + (arr_1 [i_0] [i_0])))))));
    }
    var_21 = ((((min((min(var_14, -268435456)), (var_6 && 4294967232)))) || ((min((min(var_13, -64)), ((min(3004866775, 0))))))));
    #pragma endscop
}
