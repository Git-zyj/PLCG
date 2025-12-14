/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238551
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
    var_18 = ((/* implicit */int) min((((/* implicit */long long int) var_0)), (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)107)) << (((((/* implicit */int) (unsigned short)25256)) - (25247)))))), (min((var_1), (((/* implicit */long long int) (unsigned char)128))))))));
    var_19 = (+(((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) (_Bool)0);
        var_21 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_3 [i_1] [10LL])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)40280)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)8] [(unsigned char)8]))) : (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1] [(unsigned short)0]))))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) (+(min((((arr_0 [i_1] [(_Bool)1]) | (((/* implicit */long long int) arr_3 [i_1] [i_1])))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535))))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned short)25254)) : (((/* implicit */int) (short)-32751))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))) : (min((((/* implicit */unsigned long long int) (unsigned short)16777)), (13902242685142201097ULL)))))) ? ((-(2510965870230779415LL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(signed char)19] [i_1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-10276)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) (unsigned short)32704)), (arr_0 [i_1] [i_1])))))));
    }
}
