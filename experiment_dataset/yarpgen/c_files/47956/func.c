/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47956
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) max((((((((/* implicit */int) var_4)) | (var_6))) * (((/* implicit */int) var_12)))), (min((((/* implicit */int) var_5)), (var_6)))));
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_9))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_17 = ((/* implicit */long long int) var_14);
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!((!(((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) -1769940823))))))))))));
        var_19 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)7986))))));
    }
    var_20 = ((((/* implicit */_Bool) min((((/* implicit */int) (short)0)), ((-(((/* implicit */int) (short)7986))))))) ? (((/* implicit */int) (short)7986)) : (((/* implicit */int) var_12)));
    var_21 = ((/* implicit */short) var_1);
    var_22 = ((/* implicit */unsigned int) min((var_22), (max((((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) var_0)))), (var_13)))), ((~(((4294967294U) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))))));
}
