/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_8 [i_0] = (max(((-(arr_1 [i_0 - 1]))), (arr_1 [i_3])));
                        var_17 = ((((var_9 == ((var_13 | (arr_3 [i_1] [i_1] [i_0])))))));
                        arr_9 [i_3] [i_1] &= ((((((var_3 / var_16) ? ((min(-12801, -12))) : (arr_3 [i_0] [i_1] [i_2])))) ? (!var_15) : ((3072908447737555857 ? var_16 : (((arr_4 [i_0] [i_1] [i_2 - 2] [i_3]) ? (arr_0 [i_0] [i_3]) : var_10))))));
                        arr_10 [i_0] [i_2] [i_2 - 3] [i_1] [i_0] = max((((arr_7 [i_0 - 1] [i_1] [i_2 - 3] [i_3]) % var_5)), (var_8 & -var_3));
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        arr_13 [i_4] [i_0] [i_2] [i_0] [i_0] = (max((arr_7 [i_0] [i_1] [i_0] [i_4 + 3]), ((((((arr_3 [i_0] [i_0] [1]) | 12807)) > (var_16 - var_4))))));
                        var_18 = (max(var_18, (min(33, ((max((124 <= 5), 1)))))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_19 ^= (~-23);
                        arr_17 [i_0] [i_5] [i_0] [i_0] = ((((max(var_12, ((~(arr_12 [i_0 - 1] [i_1] [12] [i_5] [i_2] [i_0])))))) ? (max((arr_0 [i_0] [i_0]), ((1 ? (arr_3 [i_1] [13] [i_5]) : (arr_0 [i_0] [i_0]))))) : (((min((arr_15 [i_0] [i_1]), (min(-20, 0))))))));
                    }
                    arr_18 [i_0] = var_10;
                }
            }
        }
    }
    var_20 = (((((((89 ? 60746 : 1911858374))) ? (max(41945489, 60534)) : var_9)) != var_11));
    #pragma endscop
}
