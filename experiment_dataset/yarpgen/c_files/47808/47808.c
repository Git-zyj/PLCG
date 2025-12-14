/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_19 = max(var_16, (((-1 || (((166 ? var_17 : var_8)))))));
            arr_6 [i_0] &= ((~((~((max(var_10, 89)))))));
        }

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_20 ^= (max((arr_5 [i_0]), var_5));
            arr_9 [i_2] = (((arr_3 [1]) ? ((((((var_10 ? 172 : 177))) != 2705747315028052126))) : ((((min(var_0, var_14))) ? ((90 ? 166 : (arr_4 [i_0]))) : (arr_4 [i_0])))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_14 [i_0] [i_0] [i_2] = (min((((((172 > (arr_10 [i_0] [i_0] [i_2])))) >> (((90 ^ 0) - 70)))), (166 > 90)));
                arr_15 [i_2] = (((arr_0 [i_0]) ? ((((((arr_8 [i_3]) ? 92 : 89))) ? (max(1, 5)) : (((arr_4 [i_2]) ? (arr_13 [1] [i_2]) : var_3)))) : ((((arr_11 [18] [18] [18] [i_2]) ? (~154) : 4294967294)))));
                arr_16 [i_2] = 1325425756;
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {

                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    var_21 -= var_15;
                    var_22 = (max(var_22, (((var_6 ? 18446744073709551610 : 3)))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_23 += (((~77) || (arr_24 [i_0] [i_2] [i_4] [i_0] [i_6])));
                    arr_27 [i_0] [i_2] [i_4] [i_4] [i_6] [i_6] |= (((var_17 | 1883137300) ? (var_0 || var_15) : (!9)));
                    arr_28 [17] [i_2] [i_4] [i_2] = ((1 ? var_11 : (((arr_3 [i_6]) << (var_2 - 20738)))));
                }
                var_24 = ((arr_13 [i_2] [i_2]) ? (((-1325425756 ? var_15 : (var_4 | var_11)))) : (arr_19 [i_0] [i_2]));
            }
        }
    }
    var_25 = ((((-((max(var_10, var_3)))))) ? var_7 : ((1325425756 ? (var_0 & -43) : var_3)));
    var_26 = (((((((max(var_3, -105))) ? (~var_11) : var_7))) ? (((min(74, var_9)) >> ((((0 ? var_10 : var_7)) - 56933)))) : (((7830116025349625214 ? (max(3603662906974479527, var_7)) : 1)))));
    #pragma endscop
}
