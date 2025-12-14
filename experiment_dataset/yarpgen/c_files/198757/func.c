/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198757
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) 1663330989)) ? (1663330984) : (-101811957));
                arr_6 [i_0] [i_0 - 1] [i_1] = ((((/* implicit */_Bool) min((var_10), (arr_1 [i_0 - 1] [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 636520116)) ? (1770744738) : (arr_3 [i_1])))) ? (((((/* implicit */_Bool) 1663331001)) ? (var_9) : (-2144864044))) : (2144864044))) : (max((var_10), (var_2))));
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (907365153) : (-869762032)))) ? (max((((((/* implicit */_Bool) var_5)) ? (var_1) : (var_10))), (var_15))) : (((((/* implicit */_Bool) max((-2147483634), (-1)))) ? (max((var_15), (var_13))) : (max((var_12), (var_5))))));
    var_19 = ((((/* implicit */_Bool) -1232095396)) ? (-779347377) : (-127214941));
}
