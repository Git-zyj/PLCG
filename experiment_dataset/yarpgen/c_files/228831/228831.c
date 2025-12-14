/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_13 = (max(var_13, ((((1 & 1) ? (((((var_10 ? (arr_2 [i_1]) : (arr_4 [i_1])))) ? (var_2 * 7) : ((var_10 ? var_1 : (arr_3 [i_0 + 1] [i_0 + 1] [i_1]))))) : ((2037875761 ? ((1 << (arr_5 [i_0 + 1]))) : var_1)))))));
            arr_6 [i_0] [i_0] = (min(((2037875742 ? 18446744073709551615 : var_9)), ((((arr_3 [i_0] [i_1] [i_0]) ? ((0 ? 65532 : 1)) : ((7 ? (arr_0 [0]) : 0)))))));
            var_14 = ((((((arr_1 [i_0]) * (arr_1 [i_0 + 1])))) ? (((((1 ? (arr_2 [12]) : var_9))) ^ ((9 ? (arr_4 [i_0]) : 1)))) : ((min(((((arr_4 [i_0]) ? 39227 : (arr_0 [i_0])))), var_1)))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_15 = (((((1 < 14093404464420790387) ? 39215 : (((arr_1 [i_2]) ? (arr_3 [i_0] [i_2] [i_0]) : -6659587783363515539))))) > (max(2004912694388157906, (arr_2 [i_0 + 1]))));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_16 = ((((((var_7 / (26320 / 852))) + 2147483647)) << (((max(11696302174151393209, 11035429726930613839)) - 11696302174151393209))));
                    var_17 &= 9;
                }
                arr_13 [i_0] = ((((((((arr_1 [9]) ? 2 : 1))) ^ (arr_12 [i_0 + 1] [8] [8] [i_0 + 1]))) * (((var_10 - (arr_10 [i_0]))))));
                var_18 += ((var_6 != ((((arr_10 [i_2]) ? -3 : ((var_1 ? -2376 : -2)))))));
            }
            for (int i_5 = 4; i_5 < 12;i_5 += 1)
            {
                var_19 = (((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))) ? (((min(1, (arr_12 [i_0] [i_0] [i_0] [i_0]))) | -853)) : (((var_5 | 146) ^ (arr_12 [i_5] [i_2] [i_2] [i_0]))));
                var_20 = (min(((((arr_1 [i_0 + 1]) && (arr_1 [i_0 + 1])))), ((-((var_1 ? 0 : 18))))));
                var_21 = (arr_7 [15] [i_2] [i_5]);
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_6] [i_6] = 0;
            var_22 ^= (arr_3 [i_0 + 1] [i_0 + 1] [i_6]);
        }
        var_23 ^= (arr_15 [i_0] [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        var_24 = (min(var_24, (((var_9 ? 18446744073709551607 : (((~(arr_25 [i_7 + 2])))))))));
        var_25 = (min(var_25, ((((arr_22 [i_7] [i_7]) << (((((~61126) + 61154)) - 15)))))));
    }
    var_26 *= (var_10 ? ((-(-23603 + var_7))) : (((var_10 ? 47 : var_0))));
    #pragma endscop
}
