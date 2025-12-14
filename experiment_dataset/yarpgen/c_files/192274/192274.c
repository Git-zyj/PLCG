/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(var_1, var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = 5;
                var_13 = (max((((!(arr_1 [i_0] [i_1])))), ((var_10 ? ((~(arr_4 [i_1]))) : (~65528)))));
                arr_6 [i_0] [i_1] [i_0] = ((((((!var_4) ? (arr_2 [i_0] [9]) : (max(var_8, var_5))))) ? (arr_3 [14] [i_1]) : ((((min((arr_3 [i_0] [i_1]), var_4))) ? var_3 : (arr_3 [i_1] [1])))));
            }
        }
    }
    #pragma endscop
}
