/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(var_3, var_6))) ? (((((var_3 ? var_4 : var_4))) ? ((var_1 ? var_9 : var_1)) : (((((-127 - 1) || 11265)))))) : (((((var_1 ? var_9 : var_7))) / (min(var_1, var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_2] [5] [i_2] = (((arr_3 [i_0]) / (arr_5 [i_0 + 1] [i_1])));
                    var_11 = (min(var_11, ((((arr_10 [i_0] [i_0] [i_0]) ? ((+(((arr_3 [i_0]) % (arr_3 [i_2]))))) : ((~((min((arr_9 [i_2] [i_1] [i_2]), (arr_10 [i_0] [i_0] [i_2])))))))))));
                    arr_12 [i_0] [i_2] [i_2] = (((((((((arr_8 [i_2] [1] [i_2]) ? (arr_5 [i_0] [i_1]) : (arr_3 [i_2])))) ? ((((arr_1 [i_0]) - (arr_10 [i_2] [i_1] [i_2])))) : (arr_0 [i_0 - 1])))) && ((((arr_8 [i_2] [i_1] [i_0 - 4]) ? (arr_10 [i_2] [i_1] [i_2]) : (18393 < -6901042014447798763))))));
                }
            }
        }
    }
    var_12 |= (((min(var_5, var_8)) | (max((max(var_6, var_8)), var_2))));
    var_13 = ((((min((min(var_2, var_3)), var_7))) ? ((var_2 ? (var_0 % var_2) : var_9)) : (min(var_5, (var_9 & var_6)))));
    #pragma endscop
}
