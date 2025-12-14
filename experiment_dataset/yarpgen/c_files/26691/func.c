/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26691
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) var_17);
                arr_7 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) arr_0 [i_1]))))))) ? (((/* implicit */long long int) arr_0 [i_1])) : (min((((/* implicit */long long int) -2120148002)), (-5418982121067845899LL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-111)), (-6002314040698807730LL)))))));
}
