/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31885
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1849611559)) ? (1861640059) : (((/* implicit */int) (unsigned char)221))))) ? (((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) 1849611542))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_1)))), (((((/* implicit */unsigned long long int) var_11)) >= (var_10))))))) : (max((((/* implicit */long long int) var_17)), (((((/* implicit */_Bool) (signed char)0)) ? (var_15) : (((/* implicit */long long int) var_17))))))));
    var_20 = ((/* implicit */short) ((var_6) || (((/* implicit */_Bool) var_17))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                arr_6 [1ULL] = ((/* implicit */int) ((_Bool) (signed char)0));
            }
        } 
    } 
    var_21 &= ((/* implicit */short) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_7))));
    var_22 |= ((/* implicit */signed char) var_1);
}
