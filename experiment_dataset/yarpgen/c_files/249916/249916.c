/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (max(var_4, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = ((((21412 > (arr_7 [6] [i_2]))) ? (((arr_4 [i_1]) + ((((!(arr_7 [17] [i_2]))))))) : ((((!((var_3 > (arr_1 [i_0] [i_0])))))))));
                    var_16 &= ((((((((arr_6 [i_1]) > var_12))) + (((arr_1 [i_0] [i_2]) + (arr_0 [i_0] [i_1]))))) + var_0));
                    arr_9 [4] [i_2] [i_2] = min((max((arr_7 [i_1] [i_2]), 2228551319)), ((((min(var_8, 2066415977))) ? (var_0 > var_2) : ((2066415976 ? 2228551319 : 231)))));
                }
            }
        }
    }
    #pragma endscop
}
