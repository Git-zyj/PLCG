/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((arr_3 [i_0] [i_1] [i_1 - 4]) ? (((min(1, var_4)))) : (max((arr_3 [i_0] [i_1] [i_1]), ((var_6 ? 7350952397839348674 : (arr_3 [i_0] [i_1] [i_1])))))));

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_16 = ((((min(((14917554868685372206 ? (arr_1 [i_0]) : var_9)), ((var_13 ? var_0 : (arr_7 [i_0] [i_2])))))) ? (~var_1) : var_13));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((((arr_7 [i_4] [i_2 - 2]) ? (max(3529189205024179397, (arr_12 [i_0] [i_1] [i_2] [3] [i_2 - 2]))) : ((((arr_13 [i_0] [i_1] [i_4] [i_3] [i_4]) ? -13 : -7))))) ^ ((max(5266752687784152047, (-12896 && var_7)))))))));
                                var_18 = (max(var_18, ((((arr_8 [i_0] [i_1 + 1] [i_3 + 1]) % (((-(arr_4 [i_4] [i_3 + 1])))))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_0] = 83;
                        arr_17 [i_1] [i_0] = (((((var_2 ? var_1 : -5266752687784152037))) ? ((22060 ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : var_0)) : (~var_8)));
                    }
                }
                var_19 = (max(var_19, ((((((arr_12 [i_1] [i_1] [i_1 - 3] [i_1 - 4] [i_1 - 4]) && ((min((arr_12 [i_0] [i_0] [0] [i_0] [i_0]), (arr_14 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1] [10] [i_1])))))) ? (((arr_2 [6]) ? (((5266752687784152035 ? (arr_12 [i_0] [i_0] [i_0] [i_1] [i_1]) : (arr_4 [8] [i_1])))) : ((var_7 ? 34119 : var_10)))) : ((((22977 && (((arr_13 [i_0] [i_1 + 1] [4] [i_1 + 2] [i_1]) && (arr_1 [6]))))))))))));
            }
        }
    }
    #pragma endscop
}
