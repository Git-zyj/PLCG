/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31665
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) var_4);
                    arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4611686018360279040ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2])))))) ? (((/* implicit */int) (signed char)32)) : ((-(((((/* implicit */int) (signed char)34)) >> (((12069077802897484862ULL) - (12069077802897484842ULL)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)67)) << (((((/* implicit */int) var_2)) - (111)))))) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) (signed char)(-127 - 1)))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (var_12)))), (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_6))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_12)), (var_13)))) : (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_13)))))))))))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((var_4) == (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > (var_3)))) << ((((~(var_11))) - (1371260541)))))))))));
}
