/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41033
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-16288), ((short)32357)))) ? (8796093022207ULL) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_1)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((((13479894014094153565ULL) <= (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)30208)))) : (18446735277616529430ULL)));
        arr_2 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)60))));
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63394))) : (arr_0 [i_0 + 1] [i_0 - 1])));
    }
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max(((unsigned short)30274), (((/* implicit */unsigned short) var_10)))))));
    var_17 *= max((((/* implicit */int) (_Bool)1)), (min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) -5744987528799051441LL))))))));
}
