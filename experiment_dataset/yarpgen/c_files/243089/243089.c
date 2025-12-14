/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_5, -3673535826576065899));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = (~44800);
                    arr_8 [i_1] [i_1] [i_1] = var_3;
                }
            }
        }
    }
    var_13 = (max(var_13, var_4));
    var_14 = ((var_10 ? 4973 : var_2));
    var_15 &= ((var_5 ? ((-var_5 ? (max(36, var_4)) : (((97 ? -4978 : -4973))))) : 20738));
    #pragma endscop
}
