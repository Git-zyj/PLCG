/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (((var_6 / var_1) ? 3144433398 : var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_2] [i_2] = (min(var_7, ((3469542269 << (3469542269 - 3469542239)))));
                    var_11 = 7;
                    arr_10 [i_2] [i_1 + 2] [i_2] = (min((max((arr_4 [i_1 - 1] [i_1 - 1]), (arr_1 [i_1 + 2] [i_2]))), ((1 ? (arr_1 [i_1 - 1] [i_1 - 1]) : var_8))));
                    var_12 = ((+((((max((arr_3 [i_0]), var_1)) > (((36911 ? -122 : -56))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_2] = (((((var_9 ? (arr_0 [i_0]) : (arr_1 [i_1] [i_1])))) ? (1 % 44074) : (((arr_8 [i_0] [i_0] [i_2]) ? 37948 : 2171988965))));
                        var_13 = (min(var_13, ((((arr_6 [i_1 - 2] [i_1 + 1]) ? ((37566 | (arr_1 [i_0] [i_2]))) : (!-446724695))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_2] = -24744;
                        var_14 = ((((var_0 ^ (arr_5 [i_1] [i_1] [i_2])))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_15 += (((((max(65535, 150)) ? ((~(arr_19 [i_5] [i_0] [i_2] [i_0] [i_0]))) : ((min((arr_19 [i_0] [i_1 - 1] [i_1 - 2] [i_1] [i_5]), (arr_2 [i_1 + 1]))))))));
                        var_16 ^= (214 / var_6);
                        var_17 = (max(((((((arr_17 [i_0] [i_0] [i_0] [i_0]) >> (var_6 - 3778775398)))) ? (((-(arr_12 [i_0] [i_1] [i_0] [i_0])))) : (arr_20 [i_0] [i_1 + 2] [i_2] [i_5]))), (((-(arr_14 [i_0] [i_1] [i_1] [i_1] [i_0]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
