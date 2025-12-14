/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232337
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) min(((unsigned short)24), ((unsigned short)65525))))), (min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)0)))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) | (3104742659U)))))));
        arr_4 [(unsigned short)2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8192)) ? (-1563624819) : (((/* implicit */int) (unsigned short)49617))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_4))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((arr_2 [i_0] [i_0]) & (((/* implicit */int) arr_1 [i_0])))) - ((+(((/* implicit */int) arr_0 [i_0] [1LL])))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(17049658983503818036ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_1)));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [2LL])) ? (arr_2 [i_1] [i_1]) : (((((/* implicit */int) (unsigned char)198)) << (((16266530451759526910ULL) - (16266530451759526902ULL)))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */int) ((arr_7 [i_2] [i_2]) * (arr_7 [i_2] [i_2])));
        var_22 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_2]))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) 7900239974156513401LL);
        arr_13 [(signed char)0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2]))));
    }
    var_23 = ((/* implicit */int) var_12);
    var_24 = ((/* implicit */int) min((2116253710U), (((/* implicit */unsigned int) var_10))));
}
