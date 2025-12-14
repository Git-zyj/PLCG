/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = ((((max(-66, ((var_12 ? -7029377821967845787 : -7029377821967845808))))) ? ((((min(-1, 7029377821967845808))) ? (arr_2 [i_0 - 2]) : 6774)) : ((-6791 | ((min(-66, -21009)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_20 = (~-6752);
            var_21 = ((0 * -30334) ? -98 : var_7);
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_22 = (((((124 ? (arr_4 [i_0 - 2]) : ((max((arr_4 [i_0]), -1)))))) ? (max(-5503218320766843817, var_11)) : ((min(-67, (var_11 / 124))))));
                var_23 = (max(var_23, -7029377821967845787));
            }
            for (int i_4 = 2; i_4 < 7;i_4 += 1)
            {
                var_24 = max(-93, 26772);
                arr_19 [i_2] [i_2] = (max(((~(var_17 & var_18))), ((-(max(var_10, -1242487278))))));
            }
            arr_20 [i_2] = ((((((var_0 ? -6517 : 26772)) ? ((8191 ? var_2 : -10498)) : 7029377821967845807))));
            var_25 = (((((38763 ? 32114 : -93))) && -93));
            var_26 = (min(var_26, ((((min((57 ^ -66), var_0)) >= (((max((min(38, 20201)), (!17342))))))))));
            var_27 = ((((-87 ? ((-4919291813315227056 ? var_12 : 5637)) : -0)) << (((-500265360 + 500265382) - 3))));
        }
        var_28 = ((((min(8260312863888844144, (arr_8 [i_0 - 1] [4] [8])))) ? (((var_13 ? -1790103452 : 5962))) : (max((-2791325006711667149 / var_13), (arr_18 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 2])))));
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        var_29 = 628906243;
        var_30 = (min(var_30, var_0));
        var_31 ^= ((!(62 && -5877005109796729170)));
    }
    var_32 = (min(var_32, var_3));
    var_33 &= (((3009 | var_2) ? (((max((min(6760, var_1)), var_15)))) : -306974696780937886));
    #pragma endscop
}
