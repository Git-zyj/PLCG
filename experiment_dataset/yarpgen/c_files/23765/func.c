/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23765
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
    var_18 = ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned long long int) (unsigned short)14136)), (((var_0) >> (((-5287272314301921868LL) + (5287272314301921921LL))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51408))))))))), (min((((((/* implicit */int) (unsigned short)14128)) * (((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned short)28672))))));
        var_19 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)135)))) <= (min(((-(((/* implicit */int) (unsigned char)121)))), (((((/* implicit */int) (unsigned short)65520)) / (((/* implicit */int) (unsigned char)30))))))));
    }
}
