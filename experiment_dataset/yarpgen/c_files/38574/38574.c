/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((((min(((var_11 ? var_13 : var_3)), (((57 ? var_5 : 242)))))) ? (((((199 ? 57 : 111))) ? 240 : ((465163248 ? 215 : 0)))) : ((((max(var_9, 3626718973))) ? (max(var_4, var_13)) : var_14))));
    var_20 = ((((max(((3128026914 ? 63 : 2884657811)), (max(195, 1505026802))))) ? ((var_11 ? (max(var_2, var_6)) : var_4)) : (max(var_3, ((var_0 ? 199 : var_9))))));
    var_21 |= ((min(((var_7 ? var_9 : var_0)), ((var_13 ? var_6 : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = ((((max(((64 ? (arr_2 [i_0]) : (arr_0 [i_0] [i_1]))), ((((arr_2 [i_1]) ? var_8 : var_17)))))) ? ((3629568463 ? 805087125 : 4051193310)) : ((max((arr_0 [i_0] [i_0]), (arr_3 [i_0]))))));
                arr_4 [i_0] [i_1] [i_0] = (3070883678 ? 0 : 60);
                arr_5 [i_1] [i_1] |= ((((max(((255 ? var_0 : (arr_1 [i_1]))), ((3028277213 ? 40 : 3604286333))))) ? ((((((arr_1 [i_0]) ? 187 : var_14))) ? ((var_14 ? var_12 : (arr_2 [i_1]))) : 6)) : ((max(232, 94)))));
            }
        }
    }
    #pragma endscop
}
