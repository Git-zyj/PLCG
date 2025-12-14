/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_16, (max((((1 ? 1 : 1))), var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (max(var_6, (!1)));
                arr_5 [i_1] [i_0] = (((((1 ? 540544471 : 1))) ? (arr_2 [i_1]) : (min(8309564710325895487, 1))));
                var_19 = (max((max(((((arr_3 [i_0]) || var_8))), (arr_0 [i_1 + 1] [i_1 - 1]))), 1));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_20 = (max(var_20, ((max(((-((13918 ? (arr_3 [i_1]) : var_9)))), ((min(((((arr_4 [i_1]) < 6454882936283193630))), (arr_0 [i_1 + 1] [i_1 + 1])))))))));
                    arr_10 [i_1] &= var_3;
                    var_21 = 540544486;
                    var_22 = (min(1, var_4));
                }
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    arr_15 [8] [i_0] &= (((((max(0, -540544465)) < (arr_1 [i_0]))) ? 1 : (max((max(9003156366114753277, var_13)), ((((arr_0 [i_3] [i_1]) ? 42882 : var_4)))))));
                    var_23 = ((((((((arr_14 [i_3 + 2] [i_3 - 2] [i_1] [i_0]) ? var_1 : 1))) ? (((arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0]) ? var_4 : 540544479)) : (((!(arr_13 [i_3] [4] [4])))))) > (arr_3 [i_1])));
                    arr_16 [10] |= ((((((arr_6 [i_3 + 1] [i_3 - 2] [i_1 + 1]) ? (arr_6 [i_3 + 1] [i_3 + 2] [i_1 - 1]) : (arr_6 [i_3 - 1] [i_3 - 2] [i_1 + 1])))) ? (((arr_3 [i_1]) ? (arr_14 [i_3 + 2] [i_1 - 1] [i_0] [i_0]) : (!-3497))) : ((((((1 ? var_12 : 0))) ? (!1) : ((min((arr_0 [1] [i_0]), var_14))))))));
                    arr_17 [i_3] [i_1 + 1] [i_0] = (((((!(arr_8 [i_3 + 1] [i_1 - 1] [i_0])))) & (min((arr_2 [i_1 + 1]), 2147483647))));
                }
            }
        }
    }
    var_24 = var_11;
    #pragma endscop
}
