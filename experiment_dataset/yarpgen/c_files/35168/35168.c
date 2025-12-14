/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((max((min(var_1, 240)), ((max(0, var_4)))))), (min((min(var_3, var_14)), ((min(var_4, var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (min((max(((max(var_15, (arr_0 [i_0] [i_1])))), (max(var_6, 0)))), (min((max(52606, var_13)), ((max(115, (arr_1 [i_1]))))))));
                var_19 = (min(var_19, (min((max((max(22385, -3158917709546890469)), (min(0, -1316655596858132111)))), (max(((max(65535, (-32767 - 1)))), (max(-4719702690334819759, (arr_2 [i_0] [i_1 - 2])))))))));
            }
        }
    }
    #pragma endscop
}
