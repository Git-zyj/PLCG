/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((64 ? 1380195906242252405 : var_9)) - (((var_1 ? 64 : 46084))))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] = ((((!54) - ((7218975246064945150 ? var_8 : (arr_0 [i_1]))))) * ((-((34803 ^ (arr_4 [2] [i_1]))))));
            arr_6 [i_1] = (((83 ? (((max(29, (arr_3 [i_0] [i_1])))) : ((var_0 ? 64 : 14209346593258285538))))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_12 -= var_0;
        arr_9 [i_2] = ((((98 ? 0 : (arr_8 [i_2])))) | 444490605485967168);
        arr_10 [i_2] [i_2] = var_5;
        var_13 = 112;
    }
    #pragma endscop
}
