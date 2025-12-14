/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 &= var_8;

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1] = (min(((max((((!(arr_1 [i_1])))), ((1542952992211491725 ? -689003439 : 5948))))), 1));
            arr_5 [i_0] [i_1] = (var_6 - 0);
            var_12 = -35;
        }
    }
    var_13 = -1;
    #pragma endscop
}
