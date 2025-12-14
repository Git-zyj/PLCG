/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50848
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
    var_10 = var_0;
    var_11 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17704621558993819187ULL)) ? (2935326491U) : (var_1)))))) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_0)) : (var_4))))) : (((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) (unsigned char)225)))))));
    var_12 = ((/* implicit */short) max(((~(min((var_9), (var_7))))), (var_1)));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (2022738646U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108)))))) | (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 3733163995U))) ? (0U) : (var_3)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = (+(((((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) / (-3065321900318494857LL))));
        var_14 = ((/* implicit */unsigned short) min(((-(min((((/* implicit */unsigned int) arr_1 [i_0 - 3])), (var_3))))), (((unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
        arr_3 [i_0 - 3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)30115)) ? (((/* implicit */int) (short)-25377)) : (((/* implicit */int) (short)23060))));
    }
}
