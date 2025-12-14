/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [3] &= (((arr_1 [i_0] [13]) ? ((-7761142196781060975 ? -7761142196781060979 : -7761142196781060958)) : 7761142196781060975));
        var_14 ^= (((((7761142196781060964 ? -7761142196781060976 : 5171016049508196251))) ? -538607136 : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        arr_6 [3] [i_1] = (max(((((arr_3 [i_1]) ? (arr_0 [i_1 - 2]) : (arr_3 [i_1])))), ((4133435677806766987 ? 13277048505466559746 : 214))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_15 = ((-(max((((-(-32767 - 1)))), (max((arr_4 [i_1] [1]), (arr_3 [i_1])))))));
            arr_9 [i_1] = (max(((((!0) - (arr_3 [i_1])))), ((1 ? 13275728024201355365 : (((8 ? 1 : -7761142196781060976)))))));
        }
        arr_10 [i_1] = (((((~(arr_1 [i_1] [i_1])))) ? (arr_5 [i_1] [i_1 - 2]) : ((~(arr_3 [i_1])))));
    }
    var_16 = ((var_13 ? var_7 : var_8));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                {
                    var_17 -= ((((~(((-32767 - 1) ? (arr_0 [i_3]) : (arr_11 [i_4 + 3] [i_3]))))) ^ (arr_11 [i_4 + 2] [i_5 + 1])));
                    arr_17 [i_4] [i_5] [10] [i_5 - 3] = (max(1, -7761142196781060945));
                    var_18 = ((((32762 ^ (arr_1 [i_5 - 1] [i_4 + 2]))) <= (arr_11 [i_4] [12])));
                    arr_18 [i_5] [i_4 + 1] [i_5] = (((-(arr_14 [i_5 - 2]))));
                }
            }
        }
    }
    var_19 = (min(var_19, ((7761142196781060945 ? 0 : 1))));
    #pragma endscop
}
