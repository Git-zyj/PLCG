/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238874
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0])) - (22921))))) < (((((/* implicit */int) arr_2 [i_0 - 1])) / (var_8))))))) == (((unsigned long long int) ((((/* implicit */int) var_2)) + (var_5))))));
        var_14 = ((/* implicit */unsigned char) ((15247810514248058323ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31600)))));
        var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [i_0 + 1])))) || ((((!(((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) arr_1 [i_0 - 1]))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) ((_Bool) var_9))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        var_17 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-5778534600278762128LL))))));
        var_18 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (arr_3 [i_1 + 1])))), ((+(((/* implicit */int) arr_1 [i_1 + 1]))))));
        var_19 = ((/* implicit */_Bool) arr_4 [i_1]);
    }
    var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) ((short) var_3))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 17393889931227118301ULL)))))), (((/* implicit */unsigned long long int) var_1))));
}
