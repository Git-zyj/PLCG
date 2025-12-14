/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_18 = (min((arr_1 [10] [10]), (((-((var_15 + (arr_0 [i_0]))))))));
        var_19 ^= var_12;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_20 = arr_1 [i_1] [i_1];
        var_21 &= (arr_6 [i_1] [i_1]);

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_1] [i_2] = ((((((arr_1 [i_1] [i_1]) ^ (arr_1 [i_1] [i_2 + 1])))) ? ((((min((arr_6 [i_2 + 2] [i_1]), 18446744073709551615))) ? (!var_17) : (((-32767 - 1) / 3376633781550182539)))) : (((~((var_9 << (11834809802272890660 - 11834809802272890657))))))));
            var_22 ^= (arr_4 [i_1]);
        }
    }
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        var_23 = 54;

        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            var_24 = (min(var_24, -775700140));
            var_25 -= ((((min(((1807 & (arr_4 [i_4 + 3]))), (arr_11 [i_4 - 1])))) ? (((~((min(-1808, 1)))))) : (((((var_15 ? var_14 : var_15))) ? ((min(22701, (-9223372036854775807 - 1)))) : (max((arr_12 [i_3]), var_9))))));
        }
    }
    var_26 = ((var_14 ? (max((var_1 == -1811), (min(1902510406426536152, 576460752303421440)))) : var_15));
    #pragma endscop
}
