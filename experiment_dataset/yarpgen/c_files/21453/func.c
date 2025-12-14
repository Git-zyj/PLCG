/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21453
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
    var_13 = ((/* implicit */unsigned short) ((short) var_5));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min(((short)-5294), (((/* implicit */short) var_10))))) ? (((/* implicit */long long int) var_12)) : (min((((/* implicit */long long int) var_5)), (max((((/* implicit */long long int) (short)5276)), (var_7)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [16])))) ? (((/* implicit */int) (signed char)-106)) : ((-(arr_0 [0U]))))))));
        var_16 = ((/* implicit */unsigned short) (-((+((~(((/* implicit */int) (signed char)-94))))))));
    }
    var_17 = ((/* implicit */int) var_11);
}
