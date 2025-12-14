/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200526
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
    var_20 = ((/* implicit */signed char) var_5);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))) & (11452307967590166743ULL)));
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
    var_23 = ((/* implicit */short) min((var_3), (((/* implicit */unsigned short) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_11)))));
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) var_17)) : (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) var_16))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) (unsigned short)31094))));
        var_25 = ((/* implicit */unsigned long long int) ((3667260196U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42201)))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_26 = max((((/* implicit */unsigned long long int) arr_5 [i_1])), (min((arr_6 [i_1]), (arr_6 [i_1]))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_1]))) ? (min((min((2466228659U), (((/* implicit */unsigned int) (unsigned char)41)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned short)23334)) : (((/* implicit */int) arr_5 [i_1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19625)))));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (arr_6 [(signed char)15])));
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) | (arr_6 [i_1])))) ? (arr_6 [i_1]) : (min((281474976710656ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_1]), (arr_6 [i_1])))) ? (arr_6 [i_1]) : (min((((/* implicit */unsigned long long int) 722835556U)), (18446462598732840939ULL)))));
    }
}
