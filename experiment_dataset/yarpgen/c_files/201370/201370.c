/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201370
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
            arr_6 [i_0] [i_1] [10] = (((arr_1 [12]) ? var_14 : ((((max(-1425310864, -8861512181187427423))) ? ((~(arr_5 [4] [i_0] [i_1]))) : 21108))));
            var_17 = (min((max((arr_0 [i_1]), -17563)), ((-(arr_0 [i_0])))));
        }
        var_18 = (max(((var_5 * ((~(arr_3 [i_0] [i_0] [i_0]))))), ((((min(19, (arr_3 [i_0] [i_0] [i_0])))) - (30718 - 17539)))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = var_9;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_19 = ((((min(65298, (arr_7 [i_2])))) ? (max(((((arr_8 [i_3] [i_4]) ? (arr_12 [i_2] [i_3] [i_2]) : var_9))), (arr_12 [i_2] [2] [i_2]))) : (((-(arr_12 [i_2] [i_4] [i_5]))))));
                        var_20 &= (max((((arr_10 [i_5]) - var_13)), (104 - var_3)));
                        var_21 = (((max(10, ((~(arr_7 [i_2]))))) * ((min((min((arr_15 [i_2] [i_2] [i_5]), -2)), ((max((arr_11 [i_3] [i_3] [i_5]), (arr_11 [i_5] [i_4] [i_2])))))))));
                    }
                }
            }
        }
    }
    var_22 = ((+((((~260) < var_2)))));
    var_23 = 231;
    #pragma endscop
}
