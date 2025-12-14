/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = min(((598443818 * (arr_2 [i_1 + 3]))), (arr_2 [i_1 + 2]));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_3] [6] [i_3] [6] [i_4] = (((((-(arr_5 [i_0] [0] [i_3] [0])))) ? (((((var_1 ? 6286106153135449006 : (arr_8 [i_0] [i_3] [i_3] [0] [0] [2] [1])))) ? (((arr_6 [i_0] [i_1] [i_2] [i_1]) << (-5405295189658401697 + 5405295189658401720))) : var_15)) : 12160637920574102603));
                                var_19 ^= (((((((1 ? 1 : 1406969779207034623))) ? (min(12160637920574102610, (arr_0 [2]))) : (((-(arr_0 [11])))))) + (((((min((arr_10 [0] [i_0] [i_2] [i_2]), -113))) ? 1 : (arr_11 [i_0] [7] [i_2]))))));
                                var_20 = (min(var_20, (var_8 != -6276626840694817992)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(((-((6286106153135449006 ? var_13 : var_12)))), var_10));
    var_22 = ((((((var_4 != var_8) ? (12160637920574102605 | 6286106153135449006) : -4544768074674279308))) ? var_11 : 48724));
    #pragma endscop
}
