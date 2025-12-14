/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214003
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((max((((/* implicit */unsigned int) var_12)), (arr_1 [i_0] [i_0]))) | (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) >> (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)21)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) > (5083779213017954159ULL)))) : ((+(((/* implicit */int) var_0)))))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned char)9)) | (((/* implicit */int) (unsigned char)21))))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [(unsigned char)5]))) ? (((((/* implicit */_Bool) var_15)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((arr_0 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned int) var_2))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1))))));
        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((34326183936ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17328)) || ((_Bool)1))))))) || (((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_8))));
    var_24 = ((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_8)) ? (((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)90)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) == (((/* implicit */int) var_14)))))))));
}
