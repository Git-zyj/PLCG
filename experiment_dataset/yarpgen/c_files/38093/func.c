/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38093
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
    var_14 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) min((var_6), (((/* implicit */unsigned char) var_3)))))) << (((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 4294967268U)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((var_8), (var_10)))))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */unsigned char) var_3)), ((unsigned char)1))), (((/* implicit */unsigned char) (_Bool)1)))))) : (((long long int) (+(((/* implicit */int) var_7)))))));
    var_17 |= var_8;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) (+(min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (arr_1 [i_0])))), (((((/* implicit */_Bool) var_0)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
        var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])))))));
    }
}
