/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(((((4576775493746020854 ? 4576775493746020854 : -4576775493746020864)) + var_16)), var_13);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_19 = (((min(((min(var_1, var_6))), (~var_12))) & (min((~8278729675695322591), ((((arr_3 [i_1] [i_0]) ? var_9 : (arr_10 [i_0] [i_0] [i_0] [i_0]))))))));
                        var_20 = (((min(4576775493746020854, ((((arr_9 [i_3] [i_3] [i_2] [i_1] [1] [i_0]) / (arr_3 [i_1] [i_0])))))) >= ((max(((max((arr_11 [i_0] [i_2]), 7739))), (min(var_16, (arr_6 [i_0] [i_1] [i_2] [i_3]))))))));
                        var_21 = (max(var_7, (((!(arr_7 [i_2]))))));
                        arr_12 [i_0] [i_0] = var_6;
                    }
                    var_22 = (i_0 % 2 == zero) ? (((-4576775493746020855 && ((((((arr_8 [i_0]) + var_13)) % (arr_6 [i_0] [i_1] [i_1] [i_2]))))))) : (((-4576775493746020855 && ((((((arr_8 [i_0]) - var_13)) % (arr_6 [i_0] [i_1] [i_1] [i_2])))))));
                }
            }
        }
        arr_13 [i_0] = (max((((arr_4 [i_0] [i_0] [i_0]) | -var_6)), (((~((var_6 ? (arr_7 [i_0]) : 19968)))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        arr_16 [i_4] = var_16;
        arr_17 [i_4] = ((var_10 == (arr_14 [i_4 - 2] [i_4 - 1])));
        arr_18 [i_4] = var_0;
        arr_19 [2] [i_4] |= (((arr_10 [i_4] [i_4] [i_4] [4]) <= (arr_5 [i_4])));
    }
    var_23 = var_13;
    #pragma endscop
}
