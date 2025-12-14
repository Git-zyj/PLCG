/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (min(var_13, var_3));
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 ^= (arr_0 [i_0]);
        var_19 = (max(var_19, (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_20 = (max(var_20, var_0));
                var_21 ^= (arr_4 [i_0] [i_2] [i_2]);
                var_22 &= -var_10;
            }
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                arr_11 [14] [i_0] = var_2;
                var_23 = ((((max((arr_2 [i_3 + 1]), 3119282273320501181))) ? ((max((arr_4 [i_3] [i_3 + 1] [i_3 + 1]), var_1))) : (((arr_7 [i_1] [1] [i_3] [i_3 + 1]) ? var_3 : (((1 ? var_0 : -29714)))))));
            }
            var_24 = (max(var_24, (((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1])))))));
            var_25 = var_3;
            var_26 = (min((arr_1 [1] [11]), (((arr_10 [i_1] [i_0] [i_0]) ? (max(var_10, (arr_9 [i_0] [i_0] [i_0]))) : -var_13))));
            arr_12 [i_0] [i_1] [5] = ((((arr_8 [i_0] [i_0]) << (((arr_8 [i_1] [i_0]) - 144)))));
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_27 ^= min(((((((-29724 ? var_10 : var_3))) ? (((~(arr_1 [i_4] [i_5])))) : (min(29705, 838283423))))), ((57434 ? (arr_14 [i_4]) : var_1)));
                        var_28 = (arr_20 [i_6] [i_6] [4] [i_6]);
                        var_29 = ((~(((!(((-32752 ? (arr_1 [i_7] [i_7]) : var_1))))))));
                        var_30 = 521415231;
                    }
                }
            }
        }
        var_31 = ((-(((((min(var_11, (arr_6 [i_4] [i_4])))) || ((((arr_16 [i_4] [i_4] [i_4]) ? var_5 : (arr_10 [i_4] [i_4] [i_4])))))))));
        arr_22 [i_4] = (var_2 >= 50301);
    }
    var_32 += var_14;
    #pragma endscop
}
