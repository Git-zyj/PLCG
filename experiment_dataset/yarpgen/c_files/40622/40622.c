/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_17 = ((((((arr_2 [i_1] [i_1] [i_1]) + (arr_2 [i_0] [i_0] [i_1])))) ? ((((((arr_3 [i_1] [i_1]) ? -8904069971260399606 : (arr_2 [i_0] [i_0] [i_1])))))) : (((min(8904069971260399606, var_14)) - (var_3 - 1166410059)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_18 = var_0;
                        var_19 = (arr_7 [i_1] [1] [i_2]);
                        arr_8 [i_0] [i_1] [i_1] [i_3] [i_1] [i_3] = (((((arr_2 [i_1] [i_2] [i_1]) || (arr_6 [1] [8] [i_1] [i_2] [i_3] [i_3]))) ? -var_16 : (arr_4 [i_0] [i_0] [i_0] [i_0])));
                        arr_9 [i_0] [i_2] [i_0] [i_1] [i_0] [i_1] = (((((1 ? (min((arr_0 [i_0] [i_1]), (arr_2 [i_1] [i_1] [i_1]))) : 11))) ? ((((0 ^ var_10) ? (arr_5 [i_1]) : (arr_1 [i_0])))) : (min((var_3 || var_14), 1166410066))));
                        var_20 = (max(var_20, ((min(((((~var_5) ? (arr_7 [i_1] [i_2] [13]) : (arr_7 [i_0] [i_0] [i_0])))), (((((arr_1 [i_0]) ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : 3128557230)) & (arr_5 [i_2]))))))));
                    }
                }
            }
        }
        var_21 = ((~((((4607 ? (arr_3 [0] [0]) : (arr_4 [i_0] [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 7;i_4 += 1)
    {
        var_22 = (max(var_22, (((((((arr_13 [i_4 - 1]) >> (((arr_3 [4] [i_4 - 2]) + 2806668503083074979))))) ? (arr_2 [i_4 - 1] [i_4] [12]) : (arr_6 [i_4] [5] [i_4] [1] [i_4 - 2] [i_4]))))));
        arr_14 [i_4] = arr_11 [i_4];

        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            var_23 = ((-(arr_7 [i_4] [i_4 + 2] [i_4 + 4])));
            var_24 -= (((arr_3 [18] [i_5]) ? ((~(arr_0 [i_4 + 3] [16]))) : (arr_10 [i_5] [i_4 - 1])));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_23 [i_4] = ((43 || (var_5 || 1)));
                        var_25 = (((-461994554 ? (arr_18 [i_4] [i_5] [i_7]) : var_5)));
                    }
                }
            }
            var_26 = (max(var_26, ((((arr_20 [2] [i_5 + 1] [i_4 - 2] [i_4] [2]) ^ (arr_20 [2] [i_5 + 1] [i_4 + 1] [i_4] [2]))))));
        }
        var_27 = (((arr_15 [i_4] [i_4 + 2]) ? (arr_15 [i_4] [i_4 + 2]) : var_15));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_26 [i_8] [i_8] = (((var_15 || var_8) ? (~var_0) : (((((arr_1 [i_8]) || 37322))))));

        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_28 = (max(var_28, ((((((var_3 || (arr_6 [i_8] [i_8] [i_8] [i_8] [i_9] [i_8]))))) ? ((((arr_25 [i_8] [i_9]) || (((arr_3 [18] [i_9]) || 69))))) : ((-(arr_1 [i_8])))))));
            var_29 = (min(var_29, (arr_20 [0] [i_8] [i_9] [i_8] [0])));
        }
        var_30 = (min(((var_14 ? (((var_5 || (arr_19 [i_8] [1] [i_8] [i_8])))) : ((var_3 ? 0 : var_11)))), ((((~var_16) || (arr_6 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))));
    }
    var_31 = var_12;
    var_32 &= var_2;
    #pragma endscop
}
