/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_6 > ((max(var_16, var_3))))) ? (((((min(var_3, var_16))) || var_4))) : (((var_9 + 2147483647) << (var_13 + 7603)))));
    var_19 = (((min((!8649), (var_2 == 1))) ? ((((0 ? -14584 : -796852419)))) : var_8));
    var_20 = ((!(((var_0 ? (~796852428) : (0 >= var_11))))));
    var_21 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_22 -= (min(((-52 ? ((-1900720683 / (arr_1 [i_0]))) : -796852453)), ((~(min((arr_1 [i_1]), (arr_2 [i_1])))))));
                var_23 -= (min((((!(arr_0 [i_0])))), (((52 > 1716) | (min((arr_0 [i_0]), var_6))))));
            }
        }
    }
    #pragma endscop
}
