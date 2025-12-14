/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249143
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
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (((int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_7)))))));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max(((+(min((var_2), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) (short)-21990)))))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)43)) ? (17373415326370475534ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] |= ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) var_1)), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    var_16 = ((/* implicit */int) var_1);
}
