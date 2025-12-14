/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29264
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_4 [(signed char)6] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
            arr_5 [(signed char)6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_0 [(unsigned char)6])) : (((/* implicit */int) (_Bool)0))))) ? (11844407446161783973ULL) : (((/* implicit */unsigned long long int) (-(1275925975))))))) ? (((((/* implicit */_Bool) (-(arr_2 [i_0 - 1] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1] [6U]))) : (((unsigned int) arr_1 [4ULL] [(_Bool)1])))) : (((/* implicit */unsigned int) ((((_Bool) var_5)) ? (((/* implicit */int) arr_1 [(_Bool)1] [i_1])) : (((/* implicit */int) (short)13594)))))));
        }
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3368321530U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        var_13 = ((/* implicit */unsigned int) var_9);
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        var_14 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (976235062202268607ULL) : (11844407446161783973ULL)))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_6 [i_2]))));
        var_16 = ((/* implicit */_Bool) (-(5350544928095633874LL)));
        var_17 -= ((/* implicit */short) 267911168);
    }
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_2))));
}
