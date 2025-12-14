/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202091
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
    var_13 = (signed char)-104;
    var_14 = ((/* implicit */signed char) ((unsigned long long int) var_5));
    var_15 -= ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-13)))))));
        arr_2 [(short)5] = ((/* implicit */short) (-((~(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        var_18 += ((/* implicit */unsigned long long int) ((int) 9223372036854775807LL));
    }
}
