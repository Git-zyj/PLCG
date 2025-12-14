/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236259
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4842)) ? (13835058055282163712ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)1783)), (var_6))))))) ? ((+(((/* implicit */int) (unsigned short)63753)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned char)224))))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_0 [(unsigned char)4]))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (unsigned short)9))) >= (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((arr_0 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) arr_1 [i_0]))))) : (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527))) : (-1152921504606846976LL)))));
        var_21 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) 1086471066U)) ? (562949684985856ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1783))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((0) >= (((/* implicit */int) (unsigned short)65535)))))))), (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-2)) && (((/* implicit */_Bool) var_11))));
}
