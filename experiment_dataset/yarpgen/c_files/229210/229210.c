/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((~((1 ? (max(5089874173971793020, 65535)) : (~16894))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((((~var_5) > ((((arr_6 [i_3] [i_2 - 1] [i_1 + 1]) ? ((var_5 ? (arr_1 [10] [10]) : var_10)) : (((max((arr_5 [i_0] [i_0] [0]), (arr_1 [2] [2])))))))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3] = min((((arr_9 [i_0] [i_2] [i_0]) / (arr_9 [i_0] [i_1 + 1] [i_0]))), -7949714707123513423);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [6] = ((-((~((~(arr_9 [i_0] [i_1] [i_0])))))));
                            var_17 = ((!((min((arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1]), ((9223372036854775807 ? var_10 : var_11)))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, var_7));
    #pragma endscop
}
