/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_4 ? var_1 : 99)) / var_6)));
    var_17 -= (-4182701094945742654 / 156);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (max(((((10593305595603417334 ? var_12 : (arr_1 [i_0]))))), (arr_1 [i_0])));
        var_19 = (((((107 ? 1 : 55))) ? ((2699213914 >> ((((max(107, 65535))) - 65518)))) : ((((arr_0 [i_0]) ? (((1550836219 > (arr_0 [1])))) : ((((arr_2 [i_0]) < var_12))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        var_20 -= ((arr_3 [i_1 - 3]) ? (arr_2 [i_1 + 2]) : 1);
        arr_5 [i_1 + 2] = ((211 ? ((-20668 ? 1161574045 : 2092)) : (!6836064569611163090)));
        var_21 = (-32181 / 45);
        var_22 *= var_14;
        arr_6 [i_1] [i_1 - 2] &= ((var_13 ? var_3 : (arr_3 [i_1 - 2])));
    }
    var_23 = (max(var_23, -var_15));
    #pragma endscop
}
