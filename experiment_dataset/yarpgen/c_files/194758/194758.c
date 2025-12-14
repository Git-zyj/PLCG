/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((172 ? 6721634723601840569 : -14103)), 660258321));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_17 = 18254930865531802974;
        arr_2 [i_0] = 1668734339;
        var_18 = (max(var_18, ((min(((max((arr_0 [12]), (arr_0 [16])))), ((var_3 / (arr_0 [8]))))))));
        var_19 = (min(var_19, ((((((((56075384 ? var_9 : var_5))) ? (((-(arr_0 [20])))) : var_8))) ? (arr_0 [24]) : -var_10))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_20 -= 0;
            var_21 = ((var_0 - (~143)));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_11 [i_0] [i_0] = (min((((((2516646072632194875 ? -4639101655305996721 : (arr_5 [i_0] [i_2] [i_0]))) != ((min(var_10, (arr_5 [i_0] [i_2] [i_2]))))))), (((min(var_3, -4639101655305996716)) / (arr_4 [i_0] [i_0])))));
            var_22 += ((((-(arr_3 [i_2] [i_0 + 1] [24]))) * (((arr_3 [i_2] [i_0 + 1] [i_2]) ^ (arr_3 [i_2] [i_0 + 1] [i_2])))));
        }
    }
    for (int i_3 = 3; i_3 < 6;i_3 += 1)
    {
        var_23 = var_1;
        arr_14 [i_3] [i_3] = (min(var_7, (min((arr_8 [4] [i_3 - 1]), 4064212537480197506))));
    }
    #pragma endscop
}
