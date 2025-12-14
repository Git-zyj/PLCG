/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (max((arr_1 [i_0] [14]), (((((-(arr_1 [i_0] [i_0])))) ? -var_11 : (min(var_6, (arr_2 [i_0])))))));
        arr_4 [i_0] [i_0] = ((((!(((var_11 ? (arr_3 [i_0]) : (arr_1 [i_0] [i_0])))))) && ((max(((max(var_11, (arr_0 [i_0])))), ((-(arr_1 [i_0] [8]))))))));
        arr_5 [i_0] = (min((min((((arr_1 [i_0] [i_0]) + var_17)), var_17)), (arr_1 [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                var_19 = (min(var_19, ((((!(max((arr_11 [i_2]), (arr_9 [i_1] [i_2]))))) ? (max(((var_6 ? (arr_9 [1] [i_2]) : (arr_10 [i_1]))), (~var_6))) : (((max((arr_9 [i_2] [i_1]), (max(var_12, (arr_9 [i_1] [i_1])))))))))));
                arr_12 [i_1] = (!(((~(((arr_10 [i_1]) | (arr_6 [i_2])))))));
                var_20 = (max(var_20, (((!(((((((arr_6 [i_2]) ? (arr_11 [i_1]) : var_17))) ? ((var_12 ? (arr_10 [i_2]) : (arr_6 [i_1]))) : (~var_16)))))))));
            }
        }
    }
    #pragma endscop
}
