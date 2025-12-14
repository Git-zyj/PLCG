/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (min((((~var_8) - (((var_2 ? var_1 : var_9))))), (min((max(var_4, var_0)), (min(var_3, var_4))))));
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [24] [i_1] = (((arr_5 [i_0] [i_1] [i_2]) >= ((var_4 / (arr_5 [i_0] [i_1] [i_2])))));
                    var_12 = (max(var_12, ((((arr_0 [i_0] [i_1]) > (((((var_6 ? (arr_1 [i_2]) : (arr_2 [i_2] [i_2])))) ? ((var_1 + (arr_3 [i_0] [i_2]))) : ((((arr_2 [i_0] [i_1]) ? (arr_3 [i_1] [i_2]) : (arr_3 [i_0] [i_0])))))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (((((arr_4 [i_0]) ? ((var_0 ? var_4 : (arr_5 [i_0] [i_0] [i_0]))) : (((var_7 / (arr_0 [i_0] [i_2])))))) & (min(((((arr_5 [i_0] [i_1] [13]) ? var_7 : (arr_6 [i_2])))), (min(var_4, (arr_3 [i_0] [i_0])))))));
                    arr_9 [i_1] = ((~(((arr_2 [i_2] [i_2]) | var_9))));
                }
            }
        }
    }
    var_13 ^= ((((max(((var_8 ? var_2 : var_8)), (min(var_6, var_8))))) || (((var_8 / (max(var_8, var_7)))))));
    var_14 = (max(var_14, ((((((((max(var_6, var_3))) ? var_0 : (max(var_9, var_3))))) <= (max((max(var_5, var_4)), ((min(var_0, var_5))))))))));
    #pragma endscop
}
