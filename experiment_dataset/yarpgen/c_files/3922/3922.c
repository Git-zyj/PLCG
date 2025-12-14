/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (((min(71, 1072830433))));
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = min(((max(188, var_2))), (min(var_11, (min((arr_1 [i_0]), (arr_0 [i_0]))))));
                arr_5 [i_1] = (min((max(var_0, (max(985278939, (arr_2 [i_1]))))), (arr_2 [i_0])));
            }
        }
    }
    #pragma endscop
}
