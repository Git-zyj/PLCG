/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(245, var_11)) * 1402404372));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((max((var_15 + 2892562924), (max(var_19, var_14)))) - ((var_5 ? ((var_8 ? 1402404372 : 2892562943)) : 1402404383))));
        arr_4 [i_0] [i_0] = ((~((var_11 ? (((var_0 ? var_18 : var_10))) : ((35408 ? var_14 : var_0))))));
        var_21 = ((((max((max(2892562924, var_16)), var_14))) != ((2892562924 ? var_13 : ((0 ? 3054340970128778309 : 160))))));
        var_22 = var_14;
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        var_23 = (max((min(((var_18 ? var_19 : var_17)), var_9)), ((-(var_14 == 15392403103580773319)))));

        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_24 ^= (max(3054340970128778325, (max(18446744073709551615, (min(65535, 15392403103580773318))))));
            var_25 = var_18;
            arr_10 [i_2 + 1] = ((6248477773391482420 ? 3054340970128778302 : 1402404388));
        }
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            var_26 = (((!73) || ((max(-31, var_4)))));
            arr_13 [i_3] = (((3 ? (min(3054340970128778297, 2892562907)) : (2892562913 | 2))));
        }
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            var_27 -= var_13;
            var_28 = (((var_18 == var_1) ? var_5 : (!-var_2)));
            var_29 = ((-((var_1 ? (min(1402404366, 6)) : -65535))));
            var_30 -= (((var_17 ? var_2 : -1)));
        }
    }
    #pragma endscop
}
