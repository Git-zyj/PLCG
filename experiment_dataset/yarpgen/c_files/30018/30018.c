/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((((var_4 << (((var_6 + 11229) - 7)))))), (min((var_4 | 1), ((max(var_0, var_15)))))));
    var_19 = (((((min(var_13, 1)))) ? (((14 ? var_8 : var_1))) : (((((5509369669070645104 / var_15) <= (-2133799620499310615 <= var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 ^= (min((min(5509369669070645104, 1)), (((!1) ? (((max(26, (arr_2 [i_1]))))) : -467197922260607324))));
                var_21 = ((+((((arr_4 [i_1]) <= 9016304678745390549)))));
            }
        }
    }
    var_22 = var_15;
    #pragma endscop
}
