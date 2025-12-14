/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((!(arr_5 [i_0 + 1]))) ? -32 : (max((arr_4 [i_0] [i_0]), (min(3345202155, 3345202155))))));
                arr_7 [i_1] [i_0] = ((((-8 <= (arr_2 [13] [i_0 - 3]))) ? (arr_0 [i_0]) : var_8));
            }
        }
    }
    var_20 = ((~((25 ? (((var_1 >> (var_16 + 63)))) : ((var_9 ? var_6 : var_7))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_15 [i_2] [i_2] = ((!((((arr_12 [i_2] [i_2] [i_3]) % 6493746049925388221)))));
                arr_16 [i_3] [i_2] = (arr_12 [14] [i_2] [i_3]);
                arr_17 [i_2] = (min((arr_4 [i_2] [i_2]), (arr_3 [14] [14])));
                arr_18 [i_3] = (min(1918665371, -39));
                arr_19 [i_2] [i_2] [i_2] = (arr_3 [0] [0]);
            }
        }
    }
    var_21 = var_3;
    var_22 = (min((max(((min(var_13, var_12))), (var_11 | var_11))), ((((var_1 ? var_2 : var_7)) & (((max(-32, var_16))))))));
    #pragma endscop
}
