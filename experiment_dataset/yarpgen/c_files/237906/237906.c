/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            var_11 = arr_10 [i_0] [i_0] [i_0] [i_2];
                            var_12 = ((((!(arr_10 [i_2] [i_3 + 3] [i_2] [i_2]))) ? (((24 && (arr_8 [i_3 + 2] [i_2])))) : (((384 == (arr_8 [i_3 + 1] [i_2]))))));
                            arr_16 [i_2] = (min(((((arr_14 [i_1 - 1] [i_1 - 3] [i_2] [i_3] [i_3]) + 25))), (arr_14 [i_1 - 3] [i_1 - 3] [i_2] [i_2] [i_4 - 2])));
                            var_13 = (min((15 || var_2), (arr_9 [i_4 + 2] [i_1 - 2] [i_0 + 2] [i_3 + 2])));
                        }
                        var_14 &= (min((var_6 ^ 387), (((arr_11 [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2]) | (arr_15 [i_3 + 2] [i_3 + 2] [i_2] [i_3] [i_3 + 2])))));
                        var_15 += ((((((arr_9 [i_0] [i_1] [i_0] [i_1 - 4]) - (arr_15 [i_3 + 3] [i_3 + 1] [i_3] [i_3 + 2] [i_2])))) ? (((arr_10 [i_0 + 1] [i_1 - 4] [i_3 + 1] [i_3]) ? (((arr_1 [i_3]) << (((arr_4 [i_1]) - 2340122712)))) : ((var_1 ? -25 : 50916)))) : 88));
                        arr_17 [i_2] [i_2] = -34;
                    }
                }
            }
        }
        var_16 = (((0 ^ 9316065129128581163) ? 2866340293 : 1056964608));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_20 [i_5] = (((arr_4 [i_5]) + (arr_19 [i_5])));
        var_17 = (!var_2);
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_18 -= ((!(((2 ? 3848491379 : var_3)))));
                    var_19 = var_5;
                    var_20 = (max(var_20, ((((arr_6 [i_5] [i_6 - 1] [i_7]) && (14623 && -21))))));
                    arr_28 [i_5] [i_5] [i_7] = var_9;
                }
            }
        }
        arr_29 [i_5] = var_1;
    }
    var_21 -= (max(((((~var_4) || (84 > var_10)))), ((~(23 >= -82)))));
    #pragma endscop
}
