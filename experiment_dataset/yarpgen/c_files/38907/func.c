/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38907
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
    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_13))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 20)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (-(1073217536)))) : (((33554368LL) & (var_12)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */unsigned long long int) 0LL)) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_8)) ? (17146314752ULL) : (var_4)))))));
    var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (var_12) : (var_6)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((max((arr_0 [i_0]), (((arr_0 [i_0 + 1]) || (var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))))) : (((/* implicit */int) ((unsigned char) ((0LL) >= (-7LL)))))));
        var_22 = var_10;
        arr_3 [i_0] = ((/* implicit */signed char) ((((long long int) arr_0 [i_0 + 1])) > (((/* implicit */long long int) 16769024))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1897572557U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) var_14)) ? (var_7) : (var_4))) : ((+(36028247263150080ULL)))));
    }
    var_24 = (+(((-8798342382811594818LL) & (((/* implicit */long long int) ((/* implicit */int) var_13))))));
}
