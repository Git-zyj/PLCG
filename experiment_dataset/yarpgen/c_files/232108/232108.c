/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= 0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min(-14, ((max((arr_0 [i_0] [i_0]), (arr_1 [i_0]))))))) ? (1 && 3844459379054031208) : 1));
        var_18 = (max(((max(1, 32878))), (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 *= ((16 ? 185 : 61862));
        arr_5 [i_1] &= (((((18446744073709551576 ? 18446744073709551572 : 1))) ? (!-1358840841) : 59448));
        arr_6 [i_1] = (((!0) ? (arr_3 [i_1]) : 18446744073709551558));
        arr_7 [i_1] = 59464;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] = max(238, 4990429170055201860);
        var_20 += (min((max((!35), (arr_10 [i_2] [i_2]))), ((max(68, 174)))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_21 = ((!((max(62, -10094)))));
        arr_16 [i_3] [i_3] = (arr_15 [i_3]);
    }
    var_22 = ((var_7 ? var_3 : ((((max(var_3, 535822336))) ? 2031182556852647733 : (((1 ? 8761457790503858342 : 1)))))));
    var_23 = var_0;
    #pragma endscop
}
