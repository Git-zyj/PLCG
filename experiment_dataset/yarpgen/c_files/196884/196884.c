/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(((var_7 ? var_15 : 35048)), -var_1)));
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = min(116, -7369115915188497200);
                arr_6 [i_0] [i_1] [i_1 - 2] = ((255 ? 6390887083273370293 : -116));
                var_19 = (min(var_19, var_10));
            }
        }
    }
    var_20 = (max(var_20, (((50322 ? 100663296 : -2213988754546524821)))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_21 = (max(var_21, ((max(var_3, ((var_15 ? (arr_11 [i_2 - 1]) : (arr_9 [i_2 + 2]))))))));
                var_22 = (max(var_22, (((((((((var_14 ? var_4 : var_3))) ? var_15 : (max((arr_7 [i_2] [5]), var_4))))) > (((min(12525208052734662895, var_2)) % 10)))))));
            }
        }
    }
    #pragma endscop
}
