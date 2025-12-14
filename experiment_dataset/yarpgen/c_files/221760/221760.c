/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_19 = ((var_0 ? -1593372431 : 0));
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] &= (((((4438051125474046919 ? -1593372437 : (arr_6 [i_0] [i_3])))) > 11504719684327353479));
                        var_20 = ((((((-127 - 1) ? var_14 : 0))) && ((((arr_7 [i_1] [13]) ? (arr_6 [i_1] [5]) : 268435455)))));
                    }
                    arr_17 [i_0] [i_1] [i_0] = (((((256280198 ? var_4 : var_2))) ? (((((0 - (arr_11 [i_0] [i_0] [i_0] [i_2])))) ? (((arr_10 [8] [8] [i_0]) ? (arr_15 [i_0] [i_1] [i_1] [i_2]) : var_3)) : (arr_4 [i_0] [i_1] [i_1]))) : (((var_15 & 124) | 124))));
                }
            }
        }
        arr_18 [i_0] [i_0] = ((((((-205261438 ^ var_13) | -1593372431))) ? (593182030 + var_7) : ((((((arr_4 [i_0] [i_0] [i_0]) ? var_15 : (arr_15 [i_0] [i_0] [i_0] [2])))) ? (((arr_0 [i_0] [i_0]) ^ 61822)) : (arr_4 [i_0] [i_0] [i_0])))));
        var_21 = (i_0 % 2 == 0) ? (((((0 ? var_14 : (arr_15 [i_0] [i_0] [i_0] [i_0]))) >> ((((11 | (arr_4 [i_0] [i_0] [i_0]))) + 782420080))))) : (((((0 ? var_14 : (arr_15 [i_0] [i_0] [i_0] [i_0]))) >> ((((((11 | (arr_4 [i_0] [i_0] [i_0]))) + 782420080)) - 1343919526)))));
    }
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        var_22 = (min(var_22, (((((((((3 / (arr_21 [i_4] [6]))) != 0)))) ^ ((5497 ? 1818618496 : (arr_9 [i_4 + 1] [i_4 + 1] [i_4 - 3]))))))));
        var_23 = ((((-400506772 ? (arr_12 [i_4 + 2] [i_4 - 3] [i_4 + 2] [i_4 + 1]) : (arr_15 [i_4 + 2] [i_4 - 3] [i_4 + 2] [i_4 + 1]))) % ((((((var_16 ? var_2 : 1)) + 2147483647)) >> (((arr_20 [4]) ? var_16 : (arr_11 [i_4] [i_4] [i_4] [i_4])))))));
        var_24 = ((((((arr_1 [i_4] [i_4 - 2]) ? 13510798882111488 : (arr_0 [i_4 - 1] [i_4 - 3])))) ? ((5 ? var_11 : var_9)) : ((((-16 + 2147483647) << (20 - 20))))));
    }
    #pragma endscop
}
