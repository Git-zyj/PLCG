/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_6 * -var_6) * ((((((var_3 ? -28 : var_5))) ? var_0 : ((472261597081275771 ? var_1 : var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (max((((~((-(arr_3 [i_0] [i_1])))))), (arr_3 [i_0] [i_0])));
                var_16 = ((~(max(-8444749845630680300, 1))));
                var_17 = (min(var_17, (((!((((arr_4 [i_0] [8]) ? (arr_2 [i_0]) : (arr_2 [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_14 [i_1] [i_3] = 0;
                            arr_15 [i_0] [i_1] [i_1] = ((-var_2 ? (~-8236049677574157846) : (((min((!var_11), (!1)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
