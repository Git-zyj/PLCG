/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((((var_12 ? var_2 : var_2))) ? var_5 : var_5))) ? (((((var_3 ? var_9 : var_9)) ^ var_0))) : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (arr_8 [i_0] [i_1 - 1]);
                    var_18 = (((-4056178705771079533 / 101) ? 85 : (((arr_2 [i_1 - 1] [i_1 + 1]) / (((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_1 [i_1])))))));
                    var_19 = (max(var_19, ((((((!(((arr_7 [i_2]) > (arr_8 [i_2] [19])))))) < (((!((((arr_0 [i_0]) ? (arr_4 [i_2]) : (arr_6 [i_2] [i_1] [i_2]))))))))))));
                }
            }
        }
    }
    #pragma endscop
}
