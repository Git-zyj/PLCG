/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33597
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
    var_16 ^= ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (_Bool)1)))) < (134217727))) ? (((/* implicit */int) ((unsigned short) 6066538153323528638LL))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_7)) : (var_15))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 134217727)) == (var_0))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) ((short) arr_1 [(unsigned short)2] [i_0]))) << (((max((var_9), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) - (11657534121978841262ULL))))))) : (((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */int) ((short) arr_1 [(unsigned short)2] [i_0]))) + (2147483647))) << (((((max((var_9), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) - (11657534121978841262ULL))) - (1276888139580193690ULL)))))));
        var_18 = ((/* implicit */unsigned int) (unsigned char)45);
        arr_2 [i_0] [i_0] = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) ((6915944742548741399ULL) <= (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))) == (arr_0 [i_0])));
        var_19 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)3730)), (4153278829U)))) ? (((arr_0 [i_0]) - (arr_0 [i_0]))) : (arr_0 [(short)1]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-16705))))))) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19160))) : (3242963517U))))))));
    }
}
