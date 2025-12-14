/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193843
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
    var_18 = ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */long long int) min((max((67108863), (((/* implicit */int) (unsigned short)127)))), (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_15)))))))) : ((((~(var_5))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) var_0))))))));
    var_19 = ((/* implicit */signed char) var_10);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0] [i_0])), (var_2))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((((max((var_9), (((/* implicit */int) var_8)))) + (2147483647))) << (((((var_5) & (((/* implicit */long long int) ((/* implicit */int) var_1))))) - (34LL)))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))) ^ ((+((+(((/* implicit */int) var_4)))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) max(((-((+(((/* implicit */int) arr_4 [i_1])))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (_Bool)0)))))));
        arr_6 [(signed char)10] = ((/* implicit */short) (-((~(((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_4 [i_1])))))))));
    }
}
