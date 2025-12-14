/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 &= (var_14 / var_15);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_21 = (max(var_21, ((max(-9887, (min((arr_1 [i_1]), ((((arr_4 [i_0] [i_0] [1]) | var_9))))))))));
            arr_5 [i_0] [i_0] [i_0] &= (((var_18 == 6972) ^ (max(((((arr_4 [i_0] [i_0] [i_1]) >= -9901))), (~-9887)))));
            var_22 = (arr_2 [i_0] [i_1]);
            var_23 = (((-(arr_0 [i_0] [i_1]))));
        }
        arr_6 [12] = max(11929434797725298539, (arr_2 [i_0] [i_0]));
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2] = (arr_7 [i_2]);

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_24 = (min(var_24, ((max((((((((arr_12 [i_2]) + 2147483647)) << (11929434797725298539 - 11929434797725298539))) & ((max(var_13, -1))))), var_14)))));
            var_25 = -12814;
            arr_14 [i_3] [i_3] = 0;
            arr_15 [i_2] [i_3] [i_3] = (arr_7 [i_2]);
            arr_16 [i_2] [i_3] [i_3] = (max(((-((((arr_12 [i_3]) <= (arr_8 [i_3])))))), ((((~var_9) && var_14)))));
        }
        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            var_26 = (max((((~13863835369284018757) ? -9871 : -var_12)), var_1));
            var_27 = ((!((((((~(arr_17 [16] [i_2] [i_2])))) | (arr_18 [i_2] [i_4]))))));
            var_28 = (min(var_28, 9002372022807905783));
        }
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            var_29 = (~var_3);
            arr_21 [i_2] = var_5;
        }
        var_30 ^= 9002372022807905763;
    }
    #pragma endscop
}
