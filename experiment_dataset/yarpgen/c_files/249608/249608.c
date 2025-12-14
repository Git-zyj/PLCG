/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_8 - var_0) >> (((1303540616 || 3434) ? (!2991426680) : ((23687 ? var_9 : 23145))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = ((!((((((arr_0 [1] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : 2991426680)) << ((111 ? 5 : 1)))))));
                var_20 = ((!(((3361232227 | (arr_3 [i_0]))))));
                var_21 += ((1 ? ((-(arr_3 [i_1]))) : (arr_4 [i_0] [i_1] [i_1])));
                var_22 = (((((((!(arr_0 [i_0] [i_0])))))) ? (!1) : (((!(arr_4 [i_0] [i_0] [12]))))));
            }
        }
    }
    #pragma endscop
}
