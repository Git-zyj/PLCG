/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [0] [i_1] = (((((-1369872578 ? ((((arr_1 [i_0] [i_0]) ? -23 : var_4))) : (min(11569795778082934363, var_3))))) && (((~(arr_2 [i_0] [8] [i_0]))))));
                arr_5 [2] [i_0] [i_0] = ((((-3 ? (-1369872573 * var_7) : ((var_4 ? var_14 : 3)))) > ((((arr_1 [i_0] [i_1]) ? var_6 : (arr_1 [i_0] [i_1]))))));
            }
        }
    }
    var_16 = (var_3 != var_3);
    var_17 = var_4;
    var_18 = var_1;
    var_19 = var_4;
    #pragma endscop
}
