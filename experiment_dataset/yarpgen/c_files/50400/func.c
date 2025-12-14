/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50400
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
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */_Bool) (unsigned char)117)) ? (var_12) : (var_18))) : ((~(((/* implicit */int) (unsigned char)117)))))) > (var_18)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)121)), (arr_0 [i_0])))) || (((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (unsigned char)138))))));
        var_20 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (18446744073709551601ULL))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((10604750947196686336ULL) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (729337419))))))) ? (((/* implicit */int) ((((/* implicit */int) min(((unsigned short)39689), (((/* implicit */unsigned short) (signed char)24))))) >= (((var_11) >> (((10604750947196686336ULL) - (10604750947196686308ULL)))))))) : (((var_16) << (((((((/* implicit */int) arr_1 [i_0])) + (15423))) - (17)))))));
        var_21 = ((/* implicit */short) (+(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_11)) : (var_8))), (((/* implicit */unsigned long long int) max((var_4), ((unsigned char)47))))))));
    }
}
