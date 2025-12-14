/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (max(1279282960, (min(((min(1, var_4))), (~2977238209)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 += (!7947893331083275745);
        arr_2 [i_0] = 7111085122947882023;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_20 = (max(((49748 ? (((58625 ? 1 : (arr_0 [i_0])))) : ((205426653 ? 1 : 2977238209)))), (((-(!-14893))))));
            var_21 += -1;
        }
        var_22 = (!-7153285987538819617);
        var_23 = (max(var_23, ((((((-(arr_4 [i_0] [10])))) ? var_3 : ((-(((arr_3 [i_0] [i_0]) * var_9)))))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_7 [i_2] = (((((var_4 & 679829115) * (((((arr_4 [i_2] [i_2]) <= (arr_3 [i_2] [i_2]))))))) & (((-((var_15 ? 1 : -27)))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [i_4] = var_1;

                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        var_24 = (max(var_24, (((((1 ? 3471850882 : 0)) + ((((arr_9 [i_5 - 1] [i_5] [i_5 + 2]) ? var_6 : (arr_6 [i_4 - 1])))))))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = min((((!-129567067) >> ((max(var_4, (arr_3 [5] [5])))))), (arr_19 [i_2] [i_4 - 1] [i_4] [i_2] [i_6]));
                            arr_21 [10] [i_3] [i_4 - 1] [i_4] [i_5] [i_6] [i_6] &= ((+((((((arr_15 [i_2] [i_2] [i_4] [i_5 - 2]) / 958293368))) / (max(261888, 17078430949660467451))))));
                        }
                    }
                }
            }
        }
        arr_22 [i_2] &= ((~(arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])));
    }
    #pragma endscop
}
