/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((((((~(arr_6 [i_0] [i_0] [i_0]))) ? (((arr_3 [i_0] [i_0] [i_0]) ? var_0 : 0)) : (max((arr_5 [i_0] [i_0] [i_2 - 2]), (arr_6 [i_0] [i_0] [5])))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (arr_0 [i_2 - 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] [i_4] = var_1;
                                var_15 = (((3451551542698286377 / 864691128455135232) ? (max(var_2, (arr_13 [i_4] [i_2 - 1] [i_0]))) : (((((min(32070, 17396))) ? 4016 : ((max(23, 1))))))));
                                arr_15 [i_2] = (max(1, 0));
                                var_16 = (max(60928, ((((((arr_1 [i_0]) ? (arr_11 [i_4] [i_3] [i_2] [i_1] [i_0]) : 18))) ? -var_0 : ((max(1, (arr_2 [i_0]))))))));
                                var_17 = (((((max(0, (arr_9 [1] [i_3 - 1] [i_3 - 1]))))) ? (((var_1 ? (arr_13 [i_2 + 1] [i_2 - 2] [i_2]) : var_7))) : (min((((arr_3 [i_0] [i_0] [i_3]) ? 562675075514368 : (arr_12 [i_0] [i_1] [i_2] [4] [i_2]))), (arr_0 [2])))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] = (((((((min(3451551542698286377, -3212))) ? 59 : (arr_0 [i_0])))) ? (arr_6 [i_0] [i_1] [i_1]) : (!1)));
                }
            }
        }
    }
    var_18 = (((max((var_4 * -97), var_4)) << ((((min(var_12, var_6))) - 39029))));
    #pragma endscop
}
