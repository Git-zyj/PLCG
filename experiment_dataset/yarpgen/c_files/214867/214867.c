/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = ((2691272197 && (((((var_6 ? var_5 : 2691272197)) & (var_11 * -65))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [21] = (i_0 % 2 == zero) ? ((max((((1603695107 / (arr_0 [i_1 - 2] [i_0])))), (((((arr_2 [i_0]) ? var_10 : (arr_2 [9]))) / (arr_2 [i_0])))))) : ((max((((1603695107 * (arr_0 [i_1 - 2] [i_0])))), (((((arr_2 [i_0]) ? var_10 : (arr_2 [9]))) / (arr_2 [i_0]))))));
                arr_6 [i_0] = (arr_3 [i_0]);
                var_22 = (max(((((arr_3 [i_0]) | (arr_0 [i_1 - 1] [i_0])))), ((~((-7373 ? var_16 : (arr_2 [i_1])))))));
            }
        }
    }
    var_23 = 1603695103;
    var_24 = var_1;
    #pragma endscop
}
