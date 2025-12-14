/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                            {
                                var_15 -= (!21050);
                                arr_11 [i_4] [i_1] [i_2] [i_3] [i_4] = (arr_8 [i_0] [i_0] [i_0]);
                            }
                            for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                            {
                                arr_14 [i_0] [9] [9] [9] = (max(((-38 ? 2 : 1)), (((((arr_8 [i_0] [14] [i_2]) ? (arr_6 [i_0]) : var_7))))));
                                var_16 = (max(var_16, var_4));
                                arr_15 [i_5] [i_5] [i_3] [i_0] [i_1] [i_0] = 5928749191718213359;
                            }
                            for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [i_1] = (max((!var_14), var_1));
                                var_17 = (min(var_17, (((((var_5 ? (((max(118, 12288)))) : -756718297786805815)) ^ ((min(((-(arr_5 [i_6] [i_2] [i_2] [i_0]))), (max((arr_18 [i_0] [i_1] [10]), var_8))))))))));
                            }
                            var_18 = (max(var_18, ((min(((((((12293 + (arr_17 [i_0] [i_0] [i_0] [i_0] [2])))) ? (!var_11) : ((var_7 ? var_6 : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))))), ((-(arr_8 [i_0] [i_1] [i_1]))))))));
                            arr_20 [i_2] [i_1] = (max((((-(max(var_6, (arr_4 [i_0] [i_1] [i_1])))))), (max((min(var_2, (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_5 [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
                arr_21 [i_0] [i_1] [i_1] = (var_6 + var_5);
                arr_22 [i_1] = (arr_7 [i_0] [i_1] [i_1]);
            }
        }
    }
    var_19 = (min(var_19, ((min(118, 118)))));
    #pragma endscop
}
