/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -3796920156244968391;
    var_13 = -1622375739168969902;
    var_14 |= var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = (!var_0);
                arr_5 [1] [i_1] = max(((~((-(arr_1 [i_0]))))), 64204);
                arr_6 [i_1] [3] [9] = (max((((-16592 && (((3796920156244968390 ? 1335 : 1)))))), var_2));
                var_15 = (max(var_15, (((max(((-(arr_3 [12] [1])), -1153343557)))))));
            }
        }
    }
    #pragma endscop
}
