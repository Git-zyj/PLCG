/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 144106391982833664;
    var_19 = var_17;
    var_20 = ((224 >= (((min(25195, -144106391982833676)) | (max(var_0, var_10))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_21 = 888045255;
        var_22 = (1747913056 & 192);
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_23 &= ((max(160, var_9)));
        var_24 = (((arr_0 [i_1]) % (arr_5 [i_1])));
        var_25 = (((((((arr_5 [i_1]) ? 67 : var_9)) > var_10)) ? ((((max(var_4, 8675987623458904240))) ? ((7916834954586636158 ? var_12 : var_13)) : (max(1375567425102411559, (arr_3 [i_1]))))) : (((arr_4 [i_1 + 1]) ? (((var_13 ? 1747913038 : (arr_4 [i_1])))) : 6004409511101819042))));
        arr_6 [i_1] = -144106391982833665;
    }
    var_26 = 166;
    #pragma endscop
}
