/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203460
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
    var_18 = var_3;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_19 *= ((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned char) var_5)))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((1366943752) / (((((/* implicit */int) var_9)) & (var_3)))))) ? (((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned int) var_3))))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_1 [(_Bool)1] [(_Bool)1])) : (arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483637)) ? (((/* implicit */long long int) 1575367440)) : (-3538651032130231540LL)))) > (min((((/* implicit */unsigned long long int) var_17)), (arr_0 [2U])))))))));
        var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2847791970U)) ? (((/* implicit */unsigned int) 1240421471)) : (arr_1 [i_0] [(_Bool)1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) + (((unsigned int) arr_1 [i_0] [i_0])))))));
    }
}
