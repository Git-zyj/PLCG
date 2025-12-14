/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20202
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_14)) : (var_1))) < (max((((/* implicit */unsigned long long int) var_11)), (16383ULL)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (min((((/* implicit */long long int) var_6)), (var_11))) : (var_13))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_17 = ((/* implicit */long long int) max((var_17), ((((~(arr_4 [18ULL] [18ULL]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) 18446744073709535224ULL))) && ((!(((/* implicit */_Bool) 127LL))))))))))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (~((~(156LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((~(max((((/* implicit */unsigned long long int) 4194304U)), (1828902465401407890ULL))))))))));
            var_19 = min((((/* implicit */int) (short)29207)), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (arr_4 [i_0] [i_0])))) ? (((/* implicit */int) (short)15794)) : ((~(((/* implicit */int) var_3)))))));
        }
        var_20 = ((/* implicit */long long int) var_9);
    }
}
