/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (min((((((min(var_9, var_5))) ? ((min(0, 2044))) : ((max(var_3, var_0)))))), (min(((max(var_10, 3443839920))), (min(1, var_9))))));
    var_15 = var_3;
    var_16 = ((-(max(((1 ? var_12 : 12762477938026805486)), ((max(var_6, 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_17 &= ((var_8 - (((max((arr_1 [i_0]), var_5)) + var_12))));
                arr_4 [i_0] [i_1] [8] = (max(((((min(3656673589, (arr_0 [i_1])))) ? ((var_4 ? 297804737 : var_5)) : ((max(var_13, (arr_2 [4] [i_1] [i_1])))))), ((((1 < (arr_2 [i_0 + 3] [i_0] [i_1 - 1])))))));
                var_18 = (((((((!(arr_3 [i_0] [i_1] [i_1 - 1])))) <= (~1))) ? (max((((arr_2 [11] [i_1] [i_1 - 2]) | (arr_1 [i_0]))), 907177328)) : (((var_1 + -1) ? var_9 : (var_3 - 0)))));
                var_19 = (((min((-281294188774892350 + 4294967295), 1))) ? ((-20195 + (arr_1 [i_0 + 2]))) : ((max((((arr_0 [1]) - var_11)), var_6))));
            }
        }
    }
    #pragma endscop
}
