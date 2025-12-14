/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((((var_0 ? (max(11373564582204408483, var_4)) : -7593571359451008034)) ^ (((((max(7951708169618932089, var_8))) ? (max(var_0, var_1)) : (((max(var_0, 140)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_9;
                var_12 = ((((min((arr_3 [i_1]), var_5))) ^ ((max((arr_0 [i_0]), (arr_0 [i_1]))))));
            }
        }
    }
    var_13 = (min(var_13, (((max(var_6, (var_5 || 255)))))));
    var_14 = (93 ? 7593571359451008033 : 18446744073709551615);
    #pragma endscop
}
