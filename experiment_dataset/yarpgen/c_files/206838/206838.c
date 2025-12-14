/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = ((2969246566 ? 1 : 63));
        arr_3 [i_0] = (max((((~(arr_2 [i_0])))), (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_18 *= ((((((arr_5 [i_1] [i_1]) ? (((((arr_4 [0]) > var_13)))) : (min((arr_2 [1]), (arr_5 [6] [6])))))) ? (((((((arr_0 [i_1]) + var_13))) ? ((1037949390 ? 3257017905 : 3257017905)) : var_0))) : (max((var_7 + var_14), (arr_5 [11] [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_19 *= (arr_10 [13]);
                        var_20 = ((!(((((-(arr_9 [i_4] [i_3 - 1] [7] [12]))) + (arr_2 [i_4]))))));
                        var_21 -= (((min(((var_13 | (arr_12 [i_1] [i_1] [0]))), (arr_13 [i_3 - 1] [i_1] [i_1] [i_1] [i_1] [i_1]))) >> (min((((arr_12 [8] [i_1] [i_4]) ? (arr_13 [i_4] [i_1] [i_3] [i_2] [i_1] [i_1]) : (arr_2 [i_1]))), (3257017908 && var_5)))));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_22 = (min(((((arr_2 [i_1]) <= ((max((arr_2 [i_1]), (arr_4 [0]))))))), (arr_7 [i_1] [i_1])));
            var_23 = arr_13 [4] [i_1] [i_1] [4] [i_5] [8];
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                {
                    var_24 = (((min((((arr_24 [i_6]) ? (arr_22 [5] [9] [i_7 - 2]) : (arr_18 [i_8]))), (((arr_16 [i_7 + 2]) % (arr_16 [i_6])))))) ? ((((!((min(var_7, 3257017905))))))) : ((((max((arr_23 [i_8 + 3] [i_7 - 2] [i_6 + 2]), (arr_22 [8] [8] [i_8])))) ? (max((arr_16 [i_6]), (arr_23 [i_6] [12] [i_8]))) : (((-(arr_17 [3] [9])))))));
                    arr_25 [i_6 - 2] [i_7 + 4] [i_8] [i_7 + 4] = (((min(3257017887, 1037949391)) - -var_7));
                }
            }
        }
    }
    var_25 = ((((((min(1037949391, -1905599315))) ? 1037949366 : var_5)) / (3257017930 >= 3257017929)));
    var_26 = var_0;
    #pragma endscop
}
