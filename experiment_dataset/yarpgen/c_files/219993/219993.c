/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 126;
    var_20 = (max(var_20, -8923331481253601597));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_21 = (3260645970733116217 & 756701947);
        var_22 = (756701959 >= 756701947);
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_23 = 157;
        var_24 = (max(var_24, (((3260645970733116212 | 52541) != (91 == -756701963)))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_25 = ((13006 != ((18446744073709551597 >> (5358670604008725027 - 5358670604008724982)))));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_26 = 7477166974875321629;
            var_27 ^= (-4659215067975373227 ^ ((35183298347008 << (15186098102976435399 - 15186098102976435366))));
            var_28 = (min(var_28, 67));
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_29 = 9973205728507685907;
            arr_13 [i_2] [i_4] [i_4] = 0;
            var_30 = (((148 / -84) * (4054200799 / 4848795529040730970)));
            var_31 = (max(var_31, (((((70 >> (18446744073709551571 - 18446744073709551563))) * (-88 == -117))))));
        }
        var_32 = ((4659215067975373227 || ((((14649934649918916517 / 18446744073709551604) + (-88 - -4659215067975373234))))));
    }
    #pragma endscop
}
