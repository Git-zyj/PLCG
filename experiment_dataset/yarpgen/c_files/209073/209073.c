/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((5206 - (min(373787160177259581, 0))))) ? (min(((min(1, 65532))), ((65532 ? var_3 : var_12)))) : ((min(2038516955, var_7))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((((1139631908 ? var_2 : 2))) ? (arr_1 [i_0]) : 1));
        var_16 = var_1;
        var_17 = ((-1139631909 > (arr_0 [i_0 - 3] [i_0])));
        arr_3 [i_0] = (!0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (-32767 - 1);
                    arr_10 [i_0] [i_0] = ((+((1139631902 ? (arr_0 [i_0 - 2] [i_0]) : 18446744073709551605))));
                    var_19 = 8800;
                    var_20 = ((((212 ? 4 : 1139631916)) & (!125)));
                    arr_11 [10] [i_0] = (arr_9 [i_0 - 2] [i_1] [i_2] [i_0 - 3]);
                }
            }
        }
    }
    #pragma endscop
}
