/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220561
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
    var_11 = ((/* implicit */long long int) ((((min((((/* implicit */unsigned long long int) var_9)), (var_3))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_1)))))) < (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_6)), (max((var_8), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-43)), (var_2))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) (+((-(max((1230399964369856481LL), (((/* implicit */long long int) (unsigned short)36814))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_0 [i_0] [i_0]), ((unsigned short)36816)));
    }
}
