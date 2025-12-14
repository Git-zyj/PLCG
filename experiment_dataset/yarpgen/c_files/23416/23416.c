/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [6] = (max((((!(arr_1 [14])))), ((((min(255, var_5))) ? var_9 : -1107072838))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_13 += ((!((min(((((arr_3 [i_0] [i_0]) + (arr_1 [i_0])))), var_9)))));
            var_14 = (min(((min((arr_0 [i_0]), (arr_0 [i_0])))), ((max(var_3, var_6)))));
            var_15 = (min(var_15, ((min((min((arr_5 [8] [16] [8]), (arr_3 [i_1] [i_0]))), (max(((max(var_10, var_10))), (max(47, (arr_5 [i_0] [i_1] [i_1]))))))))));
        }
    }
    var_16 *= var_3;
    #pragma endscop
}
