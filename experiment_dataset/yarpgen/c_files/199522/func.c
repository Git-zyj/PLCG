/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199522
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
    var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_8) : (11510792433469366948ULL)));
    var_13 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_1))))));
    var_14 = ((/* implicit */unsigned short) -4061271225477975215LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_9)), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32201))) | (var_0))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))))));
                var_16 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 2197866328U)) + (((((/* implicit */_Bool) (+(arr_5 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2097100968U) < (2197866309U))))) : (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (6213597469771579013ULL)))))));
                arr_7 [i_0] [16U] |= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) >= (((/* implicit */int) max((var_3), (var_3))))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((-268435456LL) - (((/* implicit */long long int) ((/* implicit */int) var_11))))) / ((-(arr_5 [i_0] [i_1]))))))));
            }
        } 
    } 
}
