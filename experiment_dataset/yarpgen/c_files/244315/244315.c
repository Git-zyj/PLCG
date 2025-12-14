/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((var_15 && 6099821310237312245), ((var_4 != ((12346922763472239349 ? 6099821310237312256 : 2612302850885072792))))));
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = ((((~(arr_2 [i_0]))) < (arr_0 [i_0])));
        var_20 = 6099821310237312260;
        var_21 = ((((((53 << (var_1 - 245)))) ? ((max(var_10, (arr_0 [i_0])))) : (80 | 13183849522325671504))));
        arr_3 [i_0] = 6099821310237312248;
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_22 = (min(var_22, (arr_1 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2 + 3] [i_2] [i_3] = 7756525772119443806;
                    var_23 += -58;
                    var_24 *= (((((~((5262894551383880111 ? 12346922763472239318 : 268435455))))) ? var_6 : ((5 ? 264241152 : var_16))));
                }
            }
        }
        var_25 = (max(var_25, (((29853 ? 18446744073709551599 : 44199)))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_26 = ((-var_5 ? (((arr_14 [i_4]) << (var_1 - 250))) : ((max(1023, -37183393)))));
        arr_16 [i_4] [i_4] = (arr_6 [6] [2]);
        var_27 = var_2;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_19 [i_5] = (((var_16 + 2147483647) >> (6099821310237312256 - 6099821310237312230)));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    var_28 = ((var_11 ? ((-1 ? 17936302289561913290 : 17936302289561913299)) : (arr_18 [i_6])));
                    var_29 = (min(var_29, (((~(arr_21 [i_6 + 4] [i_6 + 4] [i_7]))))));
                    arr_25 [16] [i_6] [i_7] = (~var_12);
                    var_30 = ((65535 / (arr_23 [i_5] [i_5] [i_7])));
                    arr_26 [9] [9] [i_7] [i_6] = (~1024);
                }
            }
        }
        var_31 = (min(var_31, (var_14 ^ -3)));
    }
    var_32 = (!13047913064648335440);
    var_33 = (max((8568716068207202926 % 50), var_4));
    #pragma endscop
}
