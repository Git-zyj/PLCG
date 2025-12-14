/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_1 ? var_11 : ((((!(var_16 ^ var_12)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
        var_19 = (!2548474237405211439);

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1 + 1] = ((arr_0 [i_1 - 1] [i_1 + 3]) << (((arr_0 [i_1 + 4] [i_1 - 1]) - 3223003049855333948)));
            var_20 = var_5;
            arr_7 [i_1] = (!15898269836304340177);
        }
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_11 [i_2] = (((arr_10 [i_2 + 1]) * 0));
        arr_12 [i_2] [i_2] = (arr_10 [i_2 + 1]);
        var_21 = (min(var_21, (((175 >= (~var_14))))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = ((((min(72, -32194))) || (arr_8 [i_3])));
        arr_16 [i_3] [i_3] |= ((-((-((min(57358, (arr_8 [i_3]))))))));
        var_22 = (min((!var_10), (min((arr_4 [i_3] [i_3] [i_3]), -2))));
        var_23 += arr_8 [i_3];
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_24 = ((((((arr_25 [i_5] [i_5] [i_6]) ^ (arr_20 [i_5])))) ? 607005664 : ((min((arr_17 [i_4] [i_5]), (arr_24 [i_5] [i_5]))))));
                    arr_26 [i_4] [i_4] [i_5] [i_6] = (((((~var_3) * (175 / var_10))) - ((((arr_25 [i_5] [i_5] [i_6]) ? (arr_21 [i_4]) : (arr_20 [i_6]))))));
                    arr_27 [i_4] [i_5] [i_5] [i_5] = ((((-(arr_22 [i_5]))) ^ ((min((arr_21 [i_4]), (arr_25 [i_5] [i_5] [i_6]))))));
                }
            }
        }
    }
    #pragma endscop
}
