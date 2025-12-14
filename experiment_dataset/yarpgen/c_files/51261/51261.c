/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((-var_2 ? (!102) : ((var_3 >> ((((var_0 ? var_6 : 10392)) - 39541)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (--2141552177);
                arr_6 [i_0] [i_0] [i_0] = var_1;
                var_12 += ((((3163851524285208488 <= (arr_1 [i_1]))) ? ((((arr_0 [i_1] [i_1]) == (((arr_2 [i_1]) ? 15282892549424343127 : var_2))))) : (min((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_0])))));
            }
        }
    }
    var_13 += ((~((-(9223372036854775807 == var_8)))));
    #pragma endscop
}
