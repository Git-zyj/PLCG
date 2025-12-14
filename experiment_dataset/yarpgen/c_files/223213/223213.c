/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = (((((~((max(var_4, var_4)))))) ? var_0 : ((var_6 & ((var_9 ? var_8 : var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] = (!22);
                    var_12 = (((65524 - ((1855136262 ? var_3 : var_8)))));
                }
                for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_13 ^= (max((arr_7 [i_0] [i_1] [i_3] [1]), 65534));
                    arr_11 [0] [i_1] [i_1] [i_1] = var_3;
                }
                for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_14 = (((((arr_14 [i_4] [i_1] [i_0]) ? (arr_2 [i_0] [i_1] [i_4]) : var_4)) & var_5));
                    var_15 = (min(var_15, 1855136236));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_16 = (arr_18 [i_0] [i_1] [i_4] [i_5] [i_5]);
                                var_17 = (max(var_17, (((((((-(arr_5 [i_0]))) - ((min((arr_2 [i_6] [i_5] [i_1]), var_2))))) + ((((min((arr_3 [i_4] [i_1]), (arr_2 [i_1] [i_5] [i_4 - 1])))) ? ((~(arr_6 [i_0] [i_0]))) : (max(var_0, (arr_19 [1] [1] [i_4] [i_4]))))))))));
                            }
                        }
                    }
                }
                var_18 &= (((~var_3) ? ((min(((min((arr_10 [i_1] [i_1] [14] [i_0]), (arr_3 [i_0] [i_1])))), (arr_1 [i_0])))) : -var_5));
            }
        }
    }
    #pragma endscop
}
