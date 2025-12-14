/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193009
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_10 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_7)) == (arr_0 [i_0] [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] &= ((/* implicit */int) max((var_7), (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
        var_11 = var_4;
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_12 = ((((/* implicit */_Bool) ((unsigned short) 3636779203U))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) 2646452997372437751LL)) || (((/* implicit */_Bool) arr_6 [3LL]))))));
        var_13 -= ((/* implicit */int) (~(4294967295U)));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) (+((+(12282638320203109234ULL)))));
    }
    var_14 *= ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((unsigned short) (unsigned short)1452))), (var_7))) == (((((/* implicit */_Bool) ((-1LL) / (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (var_7)))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_4))))) * (((((/* implicit */int) var_6)) >> ((((~(((/* implicit */int) var_5)))) + (63576))))))))));
}
