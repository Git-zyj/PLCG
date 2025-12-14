/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((((min(9845, 2114960187))) ? (arr_0 [i_0]) : (max((!var_8), ((var_10 ? (arr_5 [i_2]) : (arr_0 [6]))))))))));
                    arr_8 [i_1] [i_2] = ((((!(arr_0 [i_2]))) && (((arr_0 [i_2]) || (arr_0 [i_2])))));
                    arr_9 [3] [i_1] [2] [5] = (((max((max(var_1, -2114960169)), (arr_0 [i_2]))) << (arr_4 [5] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_18 = var_13;
    #pragma endscop
}
