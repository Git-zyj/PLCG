/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_16 = (max(var_16, ((((((arr_0 [4]) + (arr_2 [i_0]))) >> (-65531 + 65557))))));
        var_17 = (arr_2 [i_0]);
        var_18 = (max(var_18, ((((arr_2 [i_0 + 2]) | (arr_2 [i_0 + 1]))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_19 &= ((((min((~65531), (!65531)))) ? (~var_13) : ((((((arr_2 [i_1]) ? var_11 : 2262823476))) ? 65531 : (arr_1 [14] [16])))));
        var_20 = (((((max(4, -72)))) <= (arr_1 [i_1] [12])));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 7;i_3 += 1)
            {
                {
                    var_21 = (min(((-((65532 ? (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3]) : (arr_1 [i_1] [i_2]))))), (((((((arr_5 [i_1] [i_2 + 1]) ? -1 : var_1))) ? (var_7 && var_10) : 50)))));
                    var_22 = (arr_6 [i_1]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                {
                    var_23 = (!4294967295);
                    arr_16 [i_1] [i_1 - 1] [i_1 - 1] [i_5] = ((~(((arr_8 [i_4] [i_5 + 1]) ? (arr_8 [i_4] [i_5 + 1]) : (arr_8 [i_4] [i_5 + 1])))));
                    var_24 = ((-1224544886 ? 609676022 : 4294967282));
                    arr_17 [i_4] = (2662542898 != 1);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_20 [i_6] [i_6] = (((arr_19 [i_6] [i_6]) / (arr_18 [i_6])));
        var_25 = (min(var_25, var_5));
        var_26 = (((arr_18 [i_6]) ? (((var_15 ? (arr_19 [8] [8]) : (arr_19 [3] [13])))) : ((~(arr_18 [i_6])))));
        var_27 = ((arr_18 [i_6]) ? (~5) : ((((arr_19 [i_6] [i_6]) || (arr_18 [i_6])))));
    }
    var_28 = (((((((min(57, 2))) ? var_14 : ((12 ? 0 : 576425567931334656))))) ? (min(var_2, -var_3)) : 231532125));
    var_29 = (max(var_29, ((((var_4 > ((-2147483625 ? 17870318505778216967 : 5))))))));
    #pragma endscop
}
