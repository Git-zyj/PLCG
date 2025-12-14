/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21956
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))) ? (((((/* implicit */int) var_18)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_21 = ((/* implicit */_Bool) ((max(((+(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) arr_1 [i_0] [i_0])))) | (((/* implicit */int) arr_1 [(unsigned short)7] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0 + 4] [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0 + 4] [i_0]))))))));
        var_22 -= ((short) ((((_Bool) arr_0 [(unsigned short)8])) ? ((+(((/* implicit */int) arr_0 [(signed char)10])))) : (((/* implicit */int) arr_1 [i_0 + 4] [(unsigned char)8]))));
        var_23 *= ((/* implicit */unsigned int) arr_0 [(short)6]);
    }
    for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((arr_5 [i_1]), (arr_5 [i_1])))))) ? (((/* implicit */int) max((arr_3 [i_1 + 1]), (arr_3 [i_1 - 1])))) : (((int) arr_3 [i_1 + 1])))))));
        arr_6 [i_1] [i_1 - 2] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_3 [i_1 - 1])) * (((/* implicit */int) arr_5 [i_1 - 1])))))) ^ (((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1 + 2]))))))));
        arr_7 [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_5 [i_1 + 2])), (arr_3 [i_1 + 2])))) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 - 1])) >= (((/* implicit */int) arr_5 [i_1 + 1])))))));
    }
    var_25 = var_9;
}
