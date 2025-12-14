/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((((max(((min(4294967264, var_7))), 1244280231652929641))) ? ((var_13 ? ((17202463842056621974 ? 67108848 : -8192)) : var_6)) : var_6));
    var_15 = (min(((min(3932160, 4226507453))), 5534870952908471248));
    var_16 = (max(var_16, ((((((((min(-69, var_3))) ? var_3 : ((min(2396658628, var_4)))))) || var_9)))));
    var_17 &= (min((((min(var_10, var_13)) ? (min(-27863, 1510038121534836044)) : (var_6 ^ var_12))), ((max(var_9, (max(28567, 5)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_18 = (min(var_18, var_1));
        var_19 = var_12;
        var_20 = -7290;
        var_21 = -7739445818111079391;
        var_22 *= 261888;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = (arr_5 [i_1] [i_1]);
        var_23 = (max(var_23, (max(15979594032545890758, (min(var_4, (arr_4 [2])))))));
        var_24 = arr_2 [i_1];
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_25 = var_8;
        arr_9 [i_2] [i_2] &= ((var_11 ? (arr_5 [i_2] [i_2 - 2]) : (14169626117845989984 != 4228821485)));
        arr_10 [8] &= var_10;
        arr_11 [i_2] = (((arr_7 [8]) + (((arr_8 [i_2]) ? 13594 : ((-(arr_3 [i_2 + 1])))))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_26 &= ((13520414244277269244 ? ((75 ? 10104968978430168126 : 8206)) : (63488 < -8827849227805550685)));
        var_27 = (min(((((!(arr_14 [i_3]))))), (arr_12 [i_3])));
        var_28 = (min(var_28, var_8));
    }
    #pragma endscop
}
