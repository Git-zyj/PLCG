/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218933
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
    var_17 += ((/* implicit */long long int) (unsigned short)38409);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)52584)) | (((/* implicit */int) (short)-7214))))) ? ((~(((/* implicit */int) (unsigned short)12952)))) : (var_1)));
        var_19 += ((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))));
    }
    var_20 = ((/* implicit */signed char) var_2);
    var_21 = ((/* implicit */unsigned int) var_12);
}
