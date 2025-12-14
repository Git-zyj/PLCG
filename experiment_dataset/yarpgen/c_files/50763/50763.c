/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_17 = (arr_0 [i_0 + 2]);
        var_18 = ((-(((arr_0 [i_0 + 2]) + ((-(arr_0 [i_0 - 1])))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1] [i_1] &= (((((var_3 + (arr_6 [1])) % (arr_6 [i_1])))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_10 [i_2] = (max(((((((arr_3 [i_2]) ? (arr_8 [i_2]) : (arr_5 [i_1] [i_1]))) ^ ((6694624348392772173 ? 0 : 15753))))), (((arr_2 [i_1]) ? (((arr_0 [0]) ? (arr_0 [i_1]) : 15)) : (51455 > var_15)))));
            arr_11 [i_1] [5] [i_2] &= (arr_6 [i_1]);
        }
        var_19 = 3293824235068227056;
        var_20 = (max(var_20, (((((max((arr_0 [i_1 + 1]), (arr_4 [i_1])))) ? (((-938142839 * ((((arr_9 [i_1]) == (arr_5 [i_1] [i_1 + 1]))))))) : (((arr_3 [i_1 - 1]) ? 252 : 6434132886760339528)))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_14 [i_3] = (((1 >= 0) * (max((arr_13 [i_3]), (arr_2 [i_3])))));
        var_21 = (arr_1 [i_3]);
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            {
                var_22 = ((arr_18 [i_4] [i_5 - 1] [i_4]) << ((((((~(arr_18 [i_4] [19] [i_4])))) || (arr_18 [i_4] [i_5] [i_4])))));
                arr_20 [i_4] = (((arr_15 [i_5 - 2]) ? (-5648519523873736208 + 32) : (((((arr_15 [5]) <= (arr_15 [i_4])))))));
            }
        }
    }
    #pragma endscop
}
