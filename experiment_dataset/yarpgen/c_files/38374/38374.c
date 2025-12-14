/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [8]))) <= ((((max((arr_1 [i_0] [6]), (arr_0 [i_0]))) < (((((arr_1 [i_0] [i_0]) > (arr_0 [i_0]))))))))));
        var_16 = (max(var_16, ((max(((~(((arr_1 [i_0] [i_0]) % (arr_0 [1]))))), ((min(((-(arr_1 [i_0] [1]))), (arr_1 [1] [1])))))))));
    }
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            {
                arr_8 [i_2] = (arr_4 [i_1]);
                arr_9 [i_1] [i_1] [i_1] = ((min(((((arr_5 [i_2 + 1]) ^ (arr_5 [i_2])))), (max((arr_5 [i_1]), (arr_6 [i_1] [i_1] [i_1]))))) > ((((-(arr_3 [5]))) % (((arr_6 [i_1] [i_1] [i_1]) & (arr_3 [1]))))));
                arr_10 [i_1] [i_1] [i_1] = ((((-(min((arr_7 [i_2] [i_2 + 2] [i_1]), (arr_3 [i_2]))))) + (max((min((arr_3 [i_1]), (arr_3 [i_1]))), (arr_6 [i_1] [i_1] [i_1])))));
            }
        }
    }
    var_18 = ((-((((((min(var_15, var_14))) + 2147483647)) << (var_8 & var_1)))));
    #pragma endscop
}
