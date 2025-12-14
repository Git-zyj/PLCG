/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37483
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_14 *= ((/* implicit */long long int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 1587410954))))), (-2337472252971900156LL))) == (((/* implicit */long long int) ((/* implicit */int) ((max((var_8), (((/* implicit */long long int) 4294967285U)))) == (((-1442970294059037012LL) / (((/* implicit */long long int) 1587410951))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_1 [(signed char)10]), (((/* implicit */long long int) 4294967295U))))) ? (arr_1 [i_0 + 1]) : (arr_0 [i_0]))) >= (2337472252971900155LL)));
    }
    var_15 -= ((/* implicit */short) var_1);
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_5))));
}
