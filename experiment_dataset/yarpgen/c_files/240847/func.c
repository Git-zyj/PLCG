/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240847
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */long long int) 1073741568)) & (var_15))), (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(16872644584885726108ULL))) != (((/* implicit */unsigned long long int) var_7)))))) : (var_9)));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9860439175947442335ULL)) ? (9860439175947442335ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 1]))))))))));
                    var_21 = ((/* implicit */int) max((var_21), ((-(((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) (short)21508)) : (arr_2 [i_0 - 1])))))));
                }
            } 
        } 
    } 
}
