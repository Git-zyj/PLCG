/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_12 = ((20950 ? ((max(6060719948002750991, (arr_2 [i_0] [i_1])))) : ((-6060719948002751005 ? (min(-20948, 10967108545606719764)) : (~65522)))));
            var_13 = (((min(((-20954 ? var_7 : (arr_1 [i_0]))), ((22280 | (arr_3 [3] [i_0] [3]))))) << (((var_8 | var_6) - 3457013335786848147))));
        }
        arr_5 [i_0] [i_0] = ((((max(27, (-21297 > 32768)))) ? -1 : (max((min(-6060719948002750998, 5480907668656531849)), ((((-21297 + 2147483647) >> 6)))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_14 = (min(var_14, (((var_9 && (arr_2 [6] [i_2 - 1]))))));
        arr_10 [i_2] = (((~3718174679) ? (287 / var_1) : var_9));
        arr_11 [i_2 + 1] = (arr_6 [i_2 - 1] [i_2 - 1]);

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_15 |= ((var_2 * (arr_12 [i_2] [i_2 + 1])));
            arr_14 [i_2] [i_3] [i_2] = var_10;
        }
    }
    var_16 = (((((3718174679 ? 21270 : 33913))) != var_9));
    #pragma endscop
}
