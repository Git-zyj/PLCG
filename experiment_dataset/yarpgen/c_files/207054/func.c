/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207054
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
    var_16 |= ((/* implicit */signed char) (+(((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) (unsigned char)195)) - (195)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) max((min((((/* implicit */int) (short)-1)), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)61)) : (arr_1 [i_0 - 1] [i_0 - 1]))))), (((/* implicit */int) arr_2 [(short)5]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
        arr_4 [i_0 - 1] = ((/* implicit */short) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_5 [i_0 - 1] = ((/* implicit */unsigned int) (((-(-1))) & (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (min((((/* implicit */short) (unsigned char)199)), ((short)-6912))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (var_11)))) - (max((((/* implicit */unsigned long long int) var_0)), (0ULL)))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)102)))) : (((/* implicit */int) max((((unsigned short) var_3)), (((/* implicit */unsigned short) min((arr_6 [(_Bool)1]), (((/* implicit */short) (_Bool)1))))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_7 [i_1] [i_1])), (3674994217U)));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_7 [i_1] [i_1])))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((((((((/* implicit */int) arr_6 [i_1])) + (((/* implicit */int) arr_7 [i_1] [i_1])))) == (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)15112)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)1)) << (((var_6) - (2960261483U)))))))) : (((((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) : (9007199252643840LL))) | (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1] [i_1])) & (((/* implicit */int) (unsigned char)220)))))))))));
    }
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned short)24576))))), (var_6)))));
}
