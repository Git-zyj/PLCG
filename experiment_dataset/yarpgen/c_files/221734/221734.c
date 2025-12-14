/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(min((-1800874656 & 0), ((-5 ? 6180737060903400620 : 6180737060903400620))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = 1;
        var_17 = var_0;
        var_18 = (min((arr_2 [i_0] [i_0]), (((1 ? 4294967295 : 1)))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] = ((~(min(6180737060903400620, (arr_6 [i_1])))));
            var_19 = (~((((var_7 ? (-127 - 1) : (arr_5 [i_0] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_0] = ((-((((var_3 ? 181802797 : var_10)) / (0 - var_12)))));
            var_20 = 115;
            var_21 = (1 * 64);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_22 = (((((1 ? 1108305893 : -17))) & (arr_13 [i_0] [i_0] [i_3])));
            arr_14 [i_0] = -4294967272;
            var_23 = 33;
            var_24 = (3850829046 << 0);
            var_25 = ((78 ? 28727 : 78));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_26 = 16536861651638073512;
            var_27 = (min(var_27, ((((((arr_11 [i_0] [i_4] [i_4]) + (arr_11 [i_0] [i_0] [i_4]))) ^ (((7 ? 2776 : 0))))))));
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = 0;
        var_28 = (-11996 == 36774);
        var_29 = (((((((min(1288868900, (arr_5 [i_5] [i_5])))) ? (arr_8 [i_5] [i_5]) : ((min(var_0, var_5)))))) & 11227868853823508973));
    }
    var_30 = ((((var_0 ? var_14 : (var_4 + 35249))) + (0 && 1)));
    var_31 = 1;
    #pragma endscop
}
