/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = ((max(4294967295, 0)));
                    var_13 = ((((((max(245, 4294967293))) ? (arr_6 [i_0]) : (min(26, -7153462990832680814)))) >> ((((min(164, (min((arr_7 [i_0] [i_1] [i_0]), (arr_3 [i_0] [i_1 + 1] [i_2])))))) + 109))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((max(((max(38, -37))), (min(var_7, var_9)))));
                    arr_9 [i_0] [i_0 + 3] [i_2] = (min((max((max(7153462990832680814, 1)), var_11)), ((min(((209 ? var_9 : 29)), ((min(var_11, var_7))))))));
                }
            }
        }
    }
    var_14 -= ((((((((min(var_7, var_10))) && ((max(var_9, var_11))))))) > (max(var_9, ((min(var_0, var_5)))))));
    var_15 = (min((min((min(var_7, var_2)), ((min(var_0, var_1))))), ((max(var_10, var_0)))));
    #pragma endscop
}
