/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = ((57252 == (-588222427620314319 % 588222427620314319)));
                var_20 = ((~(arr_2 [i_0])));
                arr_5 [i_0] [i_1] = ((+(((((2147483647 ? (arr_1 [i_0]) : (arr_4 [i_0] [i_0])))) ? var_17 : var_15))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 = ((((((!var_1) * (!var_11)))) ? (min(((max(2874713301, -588222427620314300))), ((var_13 >> (((arr_4 [i_0] [i_0]) - 18349)))))) : ((((0 || ((max(-1, 7847861344164992482)))))))));
                            var_22 = ((0 ? 0 : 1129924661));
                            var_23 = (~-588222427620314319);

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] = ((((max((((!(arr_11 [i_1] [i_2] [i_3] [i_4])))), (arr_14 [i_0] [i_0] [i_2] [i_0] [i_2] [i_3] [i_4]))))) * (arr_2 [i_2]));
                                arr_16 [i_2] [i_1] [i_2] [i_4] = ((((min(29740, var_13))) || ((max(var_4, (arr_3 [i_0] [i_4] [i_2]))))));
                            }
                            for (int i_5 = 1; i_5 < 23;i_5 += 1)
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_3] [i_2] [i_5] = (arr_0 [i_0] [i_0]);
                                var_24 = ((((11 ? ((var_15 ? -1 : var_15)) : ((max((arr_0 [i_0] [i_3]), (arr_17 [i_5] [i_0] [i_3] [i_3])))))) >= 10));
                            }
                        }
                    }
                }
                arr_20 [i_0] [i_1] [i_1] = -588222427620314305;
            }
        }
    }

    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_25 = 1;
        var_26 = (arr_8 [i_6]);
        arr_23 [i_6] = ((~(4294967295 * 12)));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = (min((((-(arr_18 [i_7] [i_7] [4] [i_7] [i_7])))), ((-(arr_2 [i_7])))));
        arr_27 [i_7] [i_7] = var_5;
        arr_28 [i_7] = ((((((max((arr_7 [i_7] [i_7] [i_7]), (arr_8 [i_7])))) > (var_17 + var_0))) ? (((-(arr_0 [i_7] [i_7])))) : (arr_10 [i_7] [i_7] [i_7] [i_7])));
    }
    #pragma endscop
}
