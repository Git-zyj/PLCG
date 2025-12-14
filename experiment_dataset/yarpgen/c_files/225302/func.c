/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225302
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [(signed char)8]))))));
        arr_2 [i_0] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (min((((/* implicit */unsigned long long int) (short)-9775)), (arr_1 [i_0]))))), (((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((unsigned long long int) arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) (signed char)-5);
        arr_4 [i_0] [11ULL] = ((/* implicit */unsigned char) ((int) (_Bool)1));
        arr_5 [14LL] = min((var_8), (((/* implicit */unsigned int) arr_0 [14ULL])));
    }
    var_11 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((-(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5346)))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) 17685590159648313138ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) var_8)) : (9223372036854775807LL)))) || (((/* implicit */_Bool) (-(1244825318918125007ULL))))))) : (((/* implicit */int) ((signed char) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) : (-2444513390605813093LL)))))));
    var_13 = max((min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (var_7))), (((/* implicit */unsigned int) max(((_Bool)1), (max((var_3), (var_4)))))));
}
