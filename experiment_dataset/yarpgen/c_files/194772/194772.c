/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = (((((((((arr_7 [i_2] [i_1] [i_1] [i_0]) / 141))) ? (arr_2 [i_0]) : (!var_7)))) && (((var_4 | (((arr_0 [i_0]) ? var_8 : (arr_5 [6] [6]))))))));
                    var_16 ^= (-(!32764));
                }
            }
        }
    }
    var_17 = ((!(!var_6)));
    var_18 = (max((((!(1 - var_1)))), ((((max(32768, -1447405242))) ? -var_8 : (1 - var_7)))));
    var_19 = var_14;
    #pragma endscop
}
