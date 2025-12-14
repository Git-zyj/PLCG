/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237375
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
    var_14 = ((/* implicit */long long int) ((int) (+((-(((/* implicit */int) (unsigned short)4194)))))));
    var_15 += ((/* implicit */long long int) 971233790990460361ULL);
    var_16 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) max((5835235172549882720LL), (var_13)))) : (var_10)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max(((-(11675498823152175174ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_0]))))))))));
        var_18 *= ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) arr_2 [i_0])))));
    }
}
