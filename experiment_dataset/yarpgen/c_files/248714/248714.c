/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((max(var_8, var_10)))) ? ((var_17 ? var_16 : (var_7 - 10518677799330468604))) : (max((((var_15 ? var_3 : 4203360105))), (806003470685334770 ^ var_6)))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [10] [14] = (((((~(-2147483639 & 10)))) ? (max(((min(var_5, 1152780767118491648))), (min(-21333, (arr_1 [i_0]))))) : (((-(9223372036854775807 >= var_16))))));
        var_19 -= (((min(var_4, 9223372036854775807))) ? ((max((~1326089156), ((min((arr_2 [12] [i_0]), 3)))))) : (((arr_2 [i_0 - 1] [i_0 + 2]) ? var_6 : (4772490717808527024 / var_9))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_20 = ((-1042301296 ? (min((arr_8 [i_0 - 1] [i_0 + 2]), 2147483639)) : (max((arr_8 [i_0 - 2] [i_0 + 2]), (arr_8 [i_0 + 1] [i_0 + 1])))));
                            arr_13 [i_0] [i_3] [i_0] [4] = (max((((-(!var_13)))), (((arr_7 [i_1 + 1] [i_1 + 1]) ? var_15 : -40317684))));
                            arr_14 [i_0 + 2] [12] [i_3] [i_0] [11] = ((((arr_0 [i_0]) ? ((((arr_5 [i_0]) ? 2147483638 : var_16))) : (((arr_0 [i_3]) ? 12450586451667794919 : (arr_9 [i_1] [i_3] [i_3] [i_3]))))));
                        }
                        var_21 = ((-225718520 % (max((arr_12 [i_0] [i_0 + 3] [i_2] [i_1 - 3] [i_1 - 3]), 2037))));
                        var_22 = ((((max((arr_4 [i_0 + 2] [i_1 - 3]), (max(813186284, (arr_10 [i_3] [i_0] [i_1] [i_0] [i_3])))))) ? ((+(((arr_8 [i_0] [i_1]) ? var_11 : var_0)))) : (((max((arr_0 [i_2]), var_11)) / var_11))));
                    }
                }
            }
        }
        arr_15 [i_0] = (((((~((var_6 ? var_17 : 163))))) ? ((((96 < (arr_2 [i_0] [i_0]))) ? var_17 : (-9223372036854775807 - 1))) : ((var_7 ? (-9223372036854775807 - 1) : var_17))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = (-2147483639 == var_1);
        var_23 = ((17007 - (arr_11 [i_5 - 2] [i_5] [2] [i_5] [i_5])));
    }
    var_24 = var_10;
    #pragma endscop
}
