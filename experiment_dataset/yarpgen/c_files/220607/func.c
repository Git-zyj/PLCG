/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220607
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
    var_11 = ((/* implicit */unsigned int) var_7);
    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) var_4)) : (min((8492670608426906563LL), (-8492670608426906564LL)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0 - 1] = ((((min((var_4), (((/* implicit */int) arr_0 [i_0 + 3])))) != (((/* implicit */int) ((arr_1 [i_0] [14LL]) && (arr_1 [i_0] [i_0 - 2])))))) ? (((((/* implicit */_Bool) 8492670608426906580LL)) ? (8492670608426906563LL) : (8492670608426906563LL))) : (((/* implicit */long long int) max((var_2), (((/* implicit */int) ((signed char) arr_0 [i_0])))))));
        arr_3 [(unsigned short)12] [(unsigned short)12] = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0 - 1])) | (((/* implicit */int) arr_0 [i_0 + 1])))) & (((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 2]))))));
    }
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_6)) : (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_2)) != (8492670608426906563LL))))) : (((long long int) var_6))))) ? (((((((var_10) + (9223372036854775807LL))) >> (((var_10) + (6416360036445091761LL))))) ^ (var_0))) : (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
}
