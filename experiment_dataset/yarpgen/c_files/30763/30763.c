/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 *= (((~-103) ? ((65316 ? (((~(arr_2 [i_0])))) : (((arr_3 [i_0]) ? 17388435389388994465 : 1285265615)))) : (var_7 != -1)));

                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = (((-(min(65533, -1285265628)))));
                        var_12 = (min(((max(124, (44 || 9)))), (min((min(44, 18320918883227106866)), var_1))));

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            var_13 ^= ((((min(((14127146211415860445 ? -1285265619 : (arr_7 [i_0] [i_1] [i_4]))), (arr_1 [i_2] [i_1])))) ? (arr_3 [i_2]) : 0));
                            var_14 = ((-1285265595 ? -28388 : ((-(min(1, -1285265612))))));
                        }
                        arr_14 [i_0] [i_1] [i_0] [i_1] [i_0] = (arr_12 [i_0] [i_1] [i_2] [i_3] [i_3]);
                    }
                    arr_15 [i_0] [i_1] = (arr_0 [i_2] [i_1]);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_15 = (max(var_15, (((((0 ? 11323856154554091062 : 7240)))))));
        var_16 = 3938319443;
    }
    var_17 += var_7;
    var_18 = ((!(((var_0 ? 3087 : 210)))));
    #pragma endscop
}
