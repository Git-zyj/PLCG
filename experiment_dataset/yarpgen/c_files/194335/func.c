/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194335
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
    var_11 -= ((/* implicit */int) 18446744073709551615ULL);
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (_Bool)1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)43334)) : (((/* implicit */int) (signed char)119))))) : (((((/* implicit */_Bool) (unsigned short)62401)) ? (7276852253912699683ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
        arr_3 [(signed char)12] [(signed char)12] = ((/* implicit */signed char) ((((_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((((/* implicit */int) arr_2 [i_0] [i_0])) << (((((/* implicit */int) arr_1 [i_0])) + (31)))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)20])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (signed char)-49)))))));
        var_15 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 698063376U)) ? (((/* implicit */unsigned long long int) -4642938231208905100LL)) : (10056357983296094777ULL)));
    }
}
