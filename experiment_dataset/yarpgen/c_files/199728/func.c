/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199728
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
    var_15 = (-(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) var_3)), (var_13)))) || (((/* implicit */_Bool) max((((/* implicit */signed char) var_11)), (var_14))))))));
    var_16 += ((/* implicit */_Bool) (unsigned short)730);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (((~((~(((/* implicit */int) (unsigned short)64805)))))) >= (((/* implicit */int) ((((/* implicit */int) ((698527107722899395LL) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)10])))))) < (((/* implicit */int) arr_1 [i_0 + 1])))))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (unsigned short)51946)), (((unsigned long long int) 13950136585021840442ULL)))), (((/* implicit */unsigned long long int) var_7)))))));
        var_18 = ((/* implicit */unsigned long long int) max(((~(arr_0 [i_0 - 2]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_13)) : (-22)))) ? (max((arr_0 [i_0]), (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) var_3))))) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13589))) : (var_6)))) ? (((/* implicit */int) max(((unsigned short)730), (var_9)))) : (((/* implicit */int) ((_Bool) (unsigned short)31524)))))));
}
