/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = (min(var_21, (var_1 / var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = (arr_0 [i_0]);
                var_23 = (min(var_23, (((25287 ? (max((arr_1 [i_1]), (arr_4 [i_0]))) : (((arr_4 [i_0]) + (arr_4 [i_0]))))))));
                arr_5 [i_0] [i_0] [i_1] = (((25287 ? ((min(1, (arr_0 [i_0])))) : -1511852087)));
                arr_6 [2] [i_1] [9] = ((((15850433031962500531 ^ (((var_11 ? 4404 : (arr_4 [i_1])))))) < ((min(var_3, (min(-1501727124, 25287)))))));
            }
        }
    }
    var_24 *= (((2444198566 <= 12374013742064266255) > -1));
    var_25 *= 15926356629094405498;
    #pragma endscop
}
