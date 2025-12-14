/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35054
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [8U] [8U] = ((/* implicit */signed char) ((long long int) max((549755813888LL), (-549755813888LL))));
                var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) var_14)), (arr_1 [i_1])));
                var_21 *= ((/* implicit */long long int) ((-2745268286584187204LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)248)))));
                var_22 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) (unsigned short)248)) ? (549755813901LL) : (549755813904LL))) : (((((/* implicit */_Bool) 1754821370U)) ? (((/* implicit */long long int) 2540145925U)) : (6561920135031978888LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2540145925U)) ? (549755813888LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)248)))))) ? (-9LL) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)15)), (764174346)))))) : (((long long int) (signed char)-58))));
            }
        } 
    } 
    var_23 *= var_4;
}
