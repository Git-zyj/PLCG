/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (((min(((~(arr_3 [i_0] [i_0] [i_0]))), ((min((arr_2 [i_0] [i_0 + 1]), (arr_1 [i_0] [i_0])))))) > (((((max((arr_3 [i_0 + 1] [i_0] [i_0]), (arr_0 [i_0])))) != (((!(arr_0 [i_1])))))))));

                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    var_11 = (arr_5 [i_2 + 3] [i_2 + 3] [i_0 - 1]);

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_12 = ((!((((arr_0 [i_0 + 1]) ? (((arr_3 [i_0] [i_1] [i_2 + 3]) ? (arr_4 [i_0]) : (arr_1 [i_0 - 1] [0]))) : ((((arr_3 [i_1] [i_2] [i_1]) || (arr_7 [i_0] [11] [i_1] [i_1])))))))));
                        var_13 = (((!32764) <= 17508489899242185337));
                    }
                }
                var_14 = (((((((((arr_2 [i_0] [i_0]) & (arr_7 [i_0] [i_0] [i_1] [i_1])))) ? (((-(arr_8 [i_0] [i_0 - 1] [1] [i_1] [i_1])))) : ((-(arr_7 [i_1] [i_1] [i_1] [i_1])))))) ? (((!(((1172697200 ? 8191 : 0)))))) : ((((max((arr_5 [i_0 - 1] [i_1] [i_0]), (arr_0 [i_0])))) << ((((96 ? 3122270100 : 16694)) - 3122270082))))));
            }
        }
    }
    var_15 = ((((-(min(var_8, var_3)))) < ((((!(!var_6)))))));
    #pragma endscop
}
