/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214919
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 &= (+((~(max((((/* implicit */long long int) arr_0 [12LL])), (var_14))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0])))) : (((((/* implicit */_Bool) ((159804532) >> (((((/* implicit */int) var_0)) + (46)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)26), ((unsigned char)5))))) : (max((((/* implicit */long long int) arr_0 [i_0])), (1849999123569374884LL)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_5))));
        var_18 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_5 [i_2] [i_2])))), ((~(((/* implicit */int) var_0))))));
    }
}
