/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_18 |= (min(((((min(1, 1))) / (arr_5 [0] [2]))), 1));
                arr_6 [i_0] = ((+((max((min((arr_0 [i_0 - 3]), 1)), (arr_1 [i_0]))))));
                var_19 = 2170926600;
            }
        }
    }
    var_20 = ((~((min(1, (4294967295 || 65521))))));
    var_21 = (max(((-4630836349100418147 - (var_4 >> var_11))), (((!(~var_7))))));
    var_22 = ((min(var_9, (~43308))));
    #pragma endscop
}
