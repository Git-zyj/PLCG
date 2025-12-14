/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233694
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) 1581305680);
        arr_2 [i_0] = ((/* implicit */short) (_Bool)1);
        var_20 += ((/* implicit */unsigned short) min((min((arr_0 [i_0] [9U]), (arr_0 [i_0] [i_0]))), (max((((/* implicit */unsigned int) var_12)), (arr_0 [i_0] [9ULL])))));
    }
    var_21 = (((!(((/* implicit */_Bool) 9554330312554544003ULL)))) ? (6338135740023625185ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
    var_22 = ((/* implicit */unsigned long long int) var_15);
}
