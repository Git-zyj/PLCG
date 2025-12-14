/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(144115188075855871, 144115188075855879));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((-((((-(arr_1 [i_0]))) * ((65535 / (arr_1 [i_0 + 3])))))));
        arr_3 [i_0] = (((~(arr_1 [i_0 + 2]))));
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_12 = (((arr_0 [i_1] [i_1]) | -144115188075855879));
        arr_7 [i_1] = (max(18446744073709551615, ((((arr_5 [i_1]) | (arr_1 [i_1]))))));
        arr_8 [i_1] [i_1] = (max(12, (((!(!var_10))))));
    }
    var_13 = (((((var_10 + -144115188075855891) ? -2147483632 : var_1))) ? 57344 : ((255 ? ((var_7 ? 144115188075855876 : 8388607)) : (31 - -16))));
    #pragma endscop
}
