/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244793
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
    var_18 -= ((/* implicit */_Bool) ((short) var_2));
    var_19 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (var_14) : (((/* implicit */unsigned long long int) ((448416904U) - (((/* implicit */unsigned int) 117022985)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((3796660735U) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) / (var_16)));
        var_21 ^= ((/* implicit */unsigned int) ((arr_1 [i_0]) | (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)39842)) | (-1519291665))))));
        var_22 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((811152828) != (-811152829))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */int) var_16);
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) -811152838)), (363766314777327884ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) <= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((arr_0 [i_1]) - (2379503221U)))))) && (((/* implicit */_Bool) var_3))))))))));
        var_24 ^= ((/* implicit */unsigned long long int) ((811152828) | (((/* implicit */int) (unsigned char)0))));
        var_25 ^= ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) max(((~(arr_1 [i_2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)157)))))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_1))))) - (((var_10) << (((((arr_3 [i_2]) + (1634646949))) - (26))))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)147)) != (((/* implicit */int) (signed char)-126))))))));
        var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -811152829)) ? (((/* implicit */int) (unsigned short)28195)) : (((/* implicit */int) (unsigned char)108))))) ? (arr_1 [i_2]) : (((((arr_1 [i_2]) + (9223372036854775807LL))) >> (((arr_1 [i_2]) + (497587111089827303LL)))))));
        var_28 ^= ((/* implicit */unsigned char) arr_3 [i_2]);
    }
}
