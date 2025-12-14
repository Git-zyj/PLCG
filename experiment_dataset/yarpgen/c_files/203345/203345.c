/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = ((((((((arr_5 [i_1 + 3] [i_1 + 2] [i_0]) ? var_2 : -4977594457755981994))) ? (arr_2 [i_1 + 1]) : 4977594457755982002)) >= (max((max(var_12, -4977594457755981982)), ((max(var_3, var_11)))))));
                arr_6 [9] [i_1] [i_1] = ((~(((min((arr_2 [i_0]), var_2)) << (((~var_1) - 890192940330144643))))));
            }
        }
    }
    var_16 = -4977594457755981992;
    var_17 &= ((((((!4977594457755981999) ? (var_4 + var_11) : ((max(var_6, var_0)))))) > (var_2 & var_13)));
    var_18 = (max(var_18, ((((((-var_8 ? var_13 : var_13))) ? var_5 : ((8982 ? (((max(50261, var_14)))) : (max(var_2, var_13)))))))));
    #pragma endscop
}
