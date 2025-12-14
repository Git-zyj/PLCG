/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41406
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
    var_16 = ((/* implicit */signed char) ((var_0) ? (max((4107039448U), (((/* implicit */unsigned int) (unsigned short)47532)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (-1)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 ^= (_Bool)1;
        var_18 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (var_4)));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) (short)704)) > (((/* implicit */int) arr_2 [i_1]))))), (min((arr_2 [i_1]), (arr_2 [i_1]))))))));
        arr_4 [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_6))));
        var_20 = ((/* implicit */unsigned long long int) var_12);
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_21 -= ((_Bool) ((((/* implicit */_Bool) ((7434829937981253648ULL) >> (((var_12) - (3120270183U)))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((unsigned short) var_5)))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((((/* implicit */_Bool) max((822450162U), (((/* implicit */unsigned int) (_Bool)1))))) || ((!(((/* implicit */_Bool) var_4)))))))))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((max((((int) var_1)), (-801190396))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)11)))))))));
        var_24 = ((/* implicit */short) ((signed char) 4294967295U));
    }
}
