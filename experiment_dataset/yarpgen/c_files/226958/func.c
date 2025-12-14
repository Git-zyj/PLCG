/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226958
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
    var_16 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_17 *= ((/* implicit */unsigned int) arr_1 [11ULL] [11ULL]);
        arr_2 [i_0] = ((/* implicit */unsigned short) var_4);
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(var_8)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)44282))))) ? (((((/* implicit */_Bool) arr_4 [(unsigned char)14] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17934))) : (arr_3 [i_1]))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))));
        arr_5 [i_1] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned short)63231))))));
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_8)))) || (((/* implicit */_Bool) var_7))));
    var_20 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (var_2) : (((var_2) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) 963722512))));
    var_21 = ((/* implicit */int) var_15);
}
