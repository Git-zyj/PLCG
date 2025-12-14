/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(var_4, (var_6 | 131071))) / ((min(var_3, 46650)))));
    var_14 = (((max(((var_7 ? -8053323974816172249 : var_7)), ((8053323974816172235 ? 0 : -8053323974816172235)))) == 359104638));
    var_15 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] = ((((min(((min(28540, 111))), (((arr_3 [i_0] [i_0] [i_0]) ? var_0 : (arr_0 [i_0])))))) ? (((2121027192 ? ((max((arr_3 [i_0] [i_0] [i_2]), var_2))) : ((min(192, var_0)))))) : (((((arr_3 [i_0] [i_0] [i_2]) ? var_8 : 4)) * (((var_8 ? var_9 : 8053323974816172234)))))));
                    var_16 = (((arr_2 [i_0]) ? ((min(64, var_10))) : 1957));
                    arr_7 [i_0] [i_0] [8] = (min(359104621, 4219206189));
                }
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
