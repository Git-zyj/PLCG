/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (1282126529 & 1810779857);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 ^= (arr_0 [8]);
                    var_13 = (((arr_2 [i_0] [i_1] [i_2]) & 0));
                    arr_6 [i_0] [i_0] [i_1] [i_0] = ((-(arr_2 [i_0] [i_1] [i_1])));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_14 = (max(var_14, (((!((((((arr_0 [i_3]) + 2147483647)) >> ((((arr_0 [i_3]) == (arr_8 [i_3 + 1] [0] [i_1] [i_0]))))))))))));
                        var_15 = (((arr_1 [i_0]) | (arr_5 [i_0] [i_1] [i_0])));
                        var_16 = (((!(3012840767 % -22))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_17 ^= ((2961445569 >> (((arr_8 [i_4 + 1] [i_4 + 3] [i_4 + 3] [i_4 + 1]) - 567147278))));
                        var_18 = (min(var_18, (((arr_12 [i_2]) >> (((arr_12 [i_0]) - 4801))))));
                    }
                    var_19 = (arr_10 [i_0] [i_0] [4] [i_1] [i_1] [i_0]);
                }
            }
        }
    }
    var_20 = var_6;
    var_21 = (((!50) || var_0));
    var_22 = ((!(((-(var_4 != var_9))))));
    #pragma endscop
}
