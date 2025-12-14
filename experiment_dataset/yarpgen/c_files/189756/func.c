/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189756
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (+(16193448199169580545ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_11), (var_6))) < (var_10))))) : ((~(min((var_2), (var_7))))));
        var_12 = var_2;
        var_13 = ((unsigned long long int) min((8305735978820185126ULL), (18446744073709551612ULL)));
    }
    var_14 = var_3;
}
