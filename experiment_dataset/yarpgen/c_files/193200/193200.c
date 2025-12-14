/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((4101399279 && 48150) ? 48150 : ((((var_4 || var_6) || var_3))))))));
    var_20 = var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = var_17;
        var_22 *= (((((!(arr_1 [i_0])))) <= (arr_0 [i_0])));
        var_23 = (max(var_23, (((~(max((!var_1), (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_24 = ((((max(var_2, 1)) | (((var_4 ? (arr_3 [i_1] [i_1]) : (arr_2 [i_1])))))) == (((+(((arr_4 [i_1] [i_1]) ? var_16 : 193568033))))));
        var_25 = var_12;
    }
    #pragma endscop
}
