/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241040
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
    var_13 = ((/* implicit */short) (signed char)24);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */int) (~(arr_0 [7ULL])));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (18446744073709551601ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))) % (arr_0 [i_0])))))) % (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)66), ((signed char)66))))) - ((-(1584049720U)))))))))));
    }
}
