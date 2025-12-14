/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_11 ? (((var_0 ? var_4 : 94))) : var_12))) ? var_17 : var_8));
    var_19 = var_14;
    var_20 &= var_12;
    var_21 = ((((var_1 + ((var_7 ? var_10 : var_16)))) != ((((max(var_6, var_11))) ? var_13 : ((var_3 ? var_14 : var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [8] |= (~var_5);
                arr_6 [i_0] = (min((((((~(arr_2 [i_0] [i_1 + 1] [i_0]))) >> (((arr_1 [i_0]) + 6566874626115920450))))), (((arr_1 [i_1 + 1]) & var_12))));
                arr_7 [8] [8] = ((+((((((arr_0 [4]) ? (arr_1 [3]) : (arr_4 [i_0] [0] [12]))) > (arr_4 [14] [8] [12]))))));
            }
        }
    }
    #pragma endscop
}
