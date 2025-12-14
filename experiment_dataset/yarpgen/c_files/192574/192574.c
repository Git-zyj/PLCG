/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((4294967267 ? var_7 : var_7)))));
    var_15 = ((var_12 ? (min(var_10, 17005)) : var_13));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = ((min(var_13, 32767)));
        arr_2 [i_0] = (max(((min(((~(arr_0 [i_0]))), 251))), (max(32764, (arr_1 [i_0])))));
        var_17 = ((((max((!-4523203091682571261), ((-(arr_1 [i_0])))))) ? (~0) : (((!((min(32745, -15396))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_18 = (arr_6 [1]);
        var_19 = (((arr_0 [i_1]) ? ((min((arr_0 [i_1]), var_8))) : ((var_6 ? 0 : ((var_7 ? 32767 : var_0))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_11 [1] [i_2] = (arr_9 [i_2] [i_2]);
        arr_12 [i_2] = ((((((17175674880 ? var_1 : var_10))) ? var_7 : -22017)));
    }
    var_20 = ((((min(4294967253, (~var_4)))) ? var_8 : (((((var_6 ? var_12 : var_12))) ? var_10 : (~var_10)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_21 = (16993 ? (max((min(3986667658, var_0)), ((var_12 ? var_10 : (arr_13 [12]))))) : (((-93 ? var_9 : 3486421528))));
                var_22 = ((-((min((!var_11), 63004)))));
                arr_19 [i_3] [i_4] = (arr_17 [i_4] [i_4] [4]);
                var_23 ^= ((-1 ? (((arr_16 [i_4] [3]) ? (max(3274972950, (arr_15 [6]))) : (((~(arr_13 [i_3])))))) : ((((arr_13 [i_3]) ? ((~(arr_17 [i_3] [i_4] [i_4]))) : var_6)))));
            }
        }
    }
    #pragma endscop
}
