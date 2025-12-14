/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193936
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)104))))), (max((max((((/* implicit */long long int) var_7)), (var_5))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5308762610815923002ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)110))))) | (10271902318434865528ULL))))));
        var_14 = ((/* implicit */unsigned short) var_11);
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_15 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) 1954289785362627906ULL)) && (((/* implicit */_Bool) var_10))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) -268435456LL)) - (6829942849319658793ULL))))))));
        var_17 += ((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25253))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)32276))))))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))));
    }
}
