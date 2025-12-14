/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!var_11) ? var_12 : -var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((-((~(((!(arr_2 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_19 *= ((((((arr_2 [i_0]) ? -1 : (arr_0 [i_0])))) ? (((arr_0 [i_0]) ? (((arr_0 [12]) ? (arr_2 [0]) : (arr_5 [i_0] [i_0] [8] [i_3]))) : (min((arr_1 [i_1] [i_0]), (arr_2 [i_2]))))) : (~4050453484)));
                            var_20 = (-(arr_3 [i_3]));
                            arr_11 [i_1] = (arr_7 [i_1]);
                            arr_12 [i_0] [1] [i_1] [i_0] [i_0] = (arr_0 [6]);
                            var_21 = (max((arr_3 [i_0]), ((min(((!(arr_8 [i_0] [1] [i_2] [i_3]))), ((!(arr_7 [i_0]))))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((-var_9 ? -1 : (((-21 ? -15 : 48)))));
    #pragma endscop
}
