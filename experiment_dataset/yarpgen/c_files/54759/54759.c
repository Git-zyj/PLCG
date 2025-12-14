/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (((((((1 << (24205 - 24198)))) ? ((min(var_9, var_2))) : (var_7 - -150952512))) << (var_3 && -150952512)));
                arr_5 [i_1] [i_0] [i_0] = ((-150952527 + -150952509) <= (((arr_1 [i_0]) ^ (arr_4 [i_0] [i_0] [i_1]))));
            }
        }
    }
    var_17 = (max(var_17, (((((min(var_1, var_14))) ? (min((max(1, 36028797018963967)), (41319 / 45745))) : (max(36028797018963965, -150952511)))))));
    #pragma endscop
}
