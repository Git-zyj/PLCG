/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29529
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
    var_14 = max((((/* implicit */long long int) -107891144)), (max(((-(-5235791121875107743LL))), (((/* implicit */long long int) var_3)))));
    var_15 *= ((/* implicit */_Bool) ((var_13) / ((((!(((/* implicit */_Bool) -850592229401920286LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)255)))))) : (min((((/* implicit */unsigned long long int) 6931380377739488417LL)), (var_13)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(short)10] = ((/* implicit */short) (+(max((5107470413990746044ULL), (((/* implicit */unsigned long long int) 4004775484U))))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_0 [i_0] [i_1]))));
            }
        } 
    } 
}
