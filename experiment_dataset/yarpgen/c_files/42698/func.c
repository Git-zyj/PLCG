/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42698
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
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned int) min((var_10), ((+(max((4008886623U), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1)))))))))));
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_3)), (var_1)))))) ? (arr_0 [5U] [i_0 + 1]) : (((/* implicit */unsigned long long int) max((max((-396647950296654204LL), (((/* implicit */long long int) (signed char)-108)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-1621039062) : (1690470734)))))))));
            }
        } 
    } 
    var_12 ^= ((/* implicit */_Bool) 4187090403473821946LL);
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_3))));
}
