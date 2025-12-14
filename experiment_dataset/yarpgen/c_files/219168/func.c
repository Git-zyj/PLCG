/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219168
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
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)9656))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)91)) ? (min((((/* implicit */unsigned long long int) 2085896060U)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) min((var_7), (var_7)))))))));
    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_19 *= ((/* implicit */signed char) ((_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0])) : (((/* implicit */int) (unsigned short)26679)))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_0 + 2]))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (var_7)))) ? (((17592186044415ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)246)), ((unsigned short)26679))))))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) min((min((((/* implicit */int) ((8388096ULL) < (3219309460843683784ULL)))), (-853538692))), (((/* implicit */int) min(((short)0), (((/* implicit */short) ((((/* implicit */int) (short)21459)) <= (((/* implicit */int) arr_1 [i_1] [i_1]))))))))));
        var_23 = ((/* implicit */signed char) min((((unsigned short) var_15)), ((unsigned short)9545)));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (signed char)-89)))) - (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1])))))))));
    }
}
