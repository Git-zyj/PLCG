/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224054
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
    var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (var_8)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_14)) >> (((var_13) - (3051799705376902217ULL)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))) + (((((((/* implicit */int) (unsigned char)11)) == (((/* implicit */int) (unsigned char)11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)31301), (((/* implicit */unsigned short) (short)28)))))) : (min((var_13), (((/* implicit */unsigned long long int) var_0))))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)245)) == (((/* implicit */int) (signed char)-26))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))) < (((/* implicit */int) (unsigned short)702))))))))));
    }
    var_17 = ((/* implicit */unsigned short) ((((((long long int) (unsigned char)34)) - (((/* implicit */long long int) ((/* implicit */int) var_12))))) ^ (((/* implicit */long long int) (-((+(((/* implicit */int) var_6)))))))));
}
