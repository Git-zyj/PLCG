/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 84;
    var_20 = 172;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0] = (((((((-(arr_0 [i_0])))))) * (arr_0 [i_0 + 1])));
        arr_3 [i_0 - 1] = (((-9223372036854775807 - 1) ? -60 : (arr_1 [i_0])));
        var_21 = (max(var_21, 175));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] = 33;
        var_22 += 9223372036854775807;
        var_23 = (max((171 >= 4095), (((45804 != var_2) << ((((max(81, 1))) - 77))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (((-var_15 + 2147483647) >> (((~var_17) + 7767))));
        var_24 = 18080905265974414349;
        arr_11 [i_2] = ((1292498867 ? (arr_4 [i_2] [18]) : (-9223372036854775807 - 1)));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        arr_14 [i_3] = -40;
        var_25 = (min(((min(-1259526448, -20227))), ((-(arr_1 [i_3 + 1])))));
        var_26 = (max((arr_1 [i_3]), 9223372036854775794));
    }
    #pragma endscop
}
