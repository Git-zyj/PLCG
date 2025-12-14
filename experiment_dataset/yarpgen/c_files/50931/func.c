/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50931
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
    var_13 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((unsigned int) arr_1 [i_0]));
        var_15 = ((/* implicit */unsigned short) max((min((min((((/* implicit */unsigned int) var_6)), (21U))), (((/* implicit */unsigned int) var_11)))), (var_12)));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (1439177757U)))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned char)170)) > (((/* implicit */int) arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30341)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_9);
    }
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_4))) ? (((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_6))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1713518818U)))) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (17711338629309688173ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)122)), (var_4)))), ((+(-2350315871737402958LL))))))));
}
