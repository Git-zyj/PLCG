/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202347
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) var_7);
        var_15 = ((/* implicit */unsigned long long int) var_13);
        arr_2 [i_0] = ((/* implicit */unsigned int) max((min(((-(var_0))), (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) - (812085030)))))))));
        var_16 += ((/* implicit */unsigned long long int) (+((((!(((/* implicit */_Bool) 812085030)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)0))))) : (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (short)(-32767 - 1))))))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) var_5);
        var_18 |= ((/* implicit */short) min((arr_4 [i_1]), (max((((/* implicit */unsigned short) var_6)), (min(((unsigned short)26985), (arr_3 [i_1])))))));
    }
    var_19 = ((/* implicit */long long int) var_11);
}
