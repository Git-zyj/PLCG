/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230988
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */short) max(((+(max((((/* implicit */unsigned long long int) var_3)), (4ULL))))), (min(((~(var_10))), (((/* implicit */unsigned long long int) var_0))))));
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+(18446744073709551607ULL))))));
        var_13 += ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) > (18446744073709551611ULL)))), ((-(((/* implicit */int) arr_2 [i_0 + 4]))))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) arr_1 [(signed char)23]))));
    }
    var_15 = ((/* implicit */long long int) var_1);
}
