/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = 1095572633;
                arr_6 [i_0] [i_0] [i_0] = (((~var_7) == ((-(arr_2 [i_0 - 3] [i_0] [i_0 - 1])))));
                var_12 &= 538195105391669653;
            }
        }
    }
    var_13 *= (min(((var_3 ? (538195105391669673 && 12) : var_2)), ((-(var_7 <= 1)))));
    var_14 = (max(var_14, (((var_4 ? var_5 : (var_3 / var_8))))));
    var_15 &= var_10;
    #pragma endscop
}
