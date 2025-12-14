/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51898
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)44))) ? (((max((((/* implicit */int) var_6)), (854109099))) << (((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)128)))) - (128))))) : (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_19 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (signed char)104))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) (unsigned char)234)))))) : (((var_13) >> (((arr_1 [i_0]) - (13486139132482804314ULL)))))))), (((arr_1 [i_0 - 1]) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_10)) : (var_14))) + (306242838LL)))))));
        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)18))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        arr_5 [i_1 - 2] = ((/* implicit */long long int) arr_3 [i_1]);
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) min((arr_3 [i_2]), (arr_3 [i_2])))) ? (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)198)))) : (((/* implicit */int) ((max((((/* implicit */long long int) (unsigned char)50)), (-3768741721628091529LL))) != (((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) arr_6 [i_2] [i_2])) - (1)))))))))))));
        var_23 = ((/* implicit */unsigned short) arr_6 [i_2] [i_2]);
        var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */int) arr_7 [i_2]))))) ? (((/* implicit */int) ((short) var_3))) : (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_6 [i_2] [i_2])))))) != (((((/* implicit */_Bool) 1031534387U)) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2]))))));
    }
    var_25 = ((/* implicit */unsigned char) var_4);
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)118)) && (((/* implicit */_Bool) 2347292955U)))))) : (((long long int) 4294967295U))))) || (((/* implicit */_Bool) var_13))));
}
