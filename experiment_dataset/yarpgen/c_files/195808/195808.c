/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (arr_0 [i_0]);
                    var_14 = ((((((((arr_3 [i_0] [i_0] [i_0]) && var_5)) ? ((var_3 ? (arr_1 [i_2]) : var_7)) : (arr_1 [i_1 + 1])))) ? ((((arr_6 [i_0 + 1] [i_1 - 2] [7] [i_2]) ? (arr_6 [i_0 + 2] [i_1 + 3] [i_2] [i_1 - 3]) : (arr_6 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1])))) : ((var_7 ? var_8 : ((1 ? (arr_2 [i_0 - 1]) : 524287))))));
                    var_15 = ((((((min(72057594037927935, (arr_1 [i_2])))) ? (((((arr_5 [i_0] [i_1 - 3] [i_2] [i_2]) != var_5)))) : ((var_9 ? var_6 : var_10)))) != ((min((arr_5 [i_1] [i_1] [i_1 - 3] [i_1 - 3]), (arr_3 [i_1] [i_1] [i_1]))))));
                }
            }
        }
    }
    var_16 = (min(((var_11 ? (~8163136636405368602) : (min(var_0, 1)))), var_8));
    var_17 += ((var_3 ? 130 : var_9));
    #pragma endscop
}
