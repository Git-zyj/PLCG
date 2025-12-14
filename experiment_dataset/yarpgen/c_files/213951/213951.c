/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_10 && (var_2 ^ var_3))) ? var_11 : var_0));
    var_13 = (min(var_13, ((((7927297763409120857 % var_3) ? var_1 : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((((max(((var_5 ? var_10 : 21123)), (min(var_10, (arr_4 [i_0] [i_1])))))) ? ((((((min(var_0, 2547365606))) && (arr_0 [i_1]))))) : (((arr_2 [1] [i_1]) ? var_6 : (arr_0 [i_1]))))))));
                var_15 = var_4;
                arr_7 [i_0] [i_0] [i_1] = (max(var_2, 15923));
            }
        }
    }
    var_16 = var_7;
    var_17 += var_1;
    #pragma endscop
}
