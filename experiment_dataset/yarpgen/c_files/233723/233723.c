/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((((arr_4 [i_0] [i_1] [7]) ? (arr_2 [i_0]) : ((var_3 ? var_4 : 3)))) + 2147483647)) >> (arr_4 [i_1] [2] [i_1])));
                var_14 = ((!((((arr_2 [i_0]) ? (arr_4 [10] [i_1] [i_0]) : (arr_2 [i_0 - 1]))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_15 = (min(var_15, (((!((min(3, 633))))))));
                    var_16 = ((((((arr_2 [i_1]) ? (arr_2 [i_2]) : (arr_2 [i_0 - 1])))) ? ((min((arr_2 [i_0 - 1]), (arr_2 [i_1])))) : -78));
                    var_17 = (max(((((-(arr_2 [i_0 - 1]))))), (max((13754 >> 1), ((max((arr_7 [i_0] [i_1] [i_2]), (arr_2 [i_2]))))))));
                }
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    var_18 = (max(var_18, 63));
                    arr_12 [i_0] [i_1] [i_3] [i_3] = 3406271965;
                    arr_13 [i_0] [i_1] [i_0] [6] = (max((min((min((arr_8 [i_0] [i_1] [i_3] [4]), var_1)), -2435745233941284461)), var_8));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_19 = (((arr_16 [i_0] [i_1] [i_4] [i_4]) ? (~918353239) : -32));
                    arr_17 [14] [i_1] [i_1] = (arr_2 [i_0]);
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_20 = (max(var_20, (arr_4 [3] [14] [i_0])));
                    arr_21 [i_0] [i_1] [i_5] |= (min(2772923404534418388, 1));
                }
            }
        }
    }
    var_21 = (min(var_21, var_11));
    var_22 = 9627;
    var_23 = (min(var_23, var_2));
    var_24 = ((((max(var_6, var_10))) ? -var_6 : (min(305156598, (888695317 ^ 112)))));
    #pragma endscop
}
