/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33105
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2292489936U)), (2056524808351818163ULL)))))))));
                    var_16 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_1 [i_2] [i_1 - 1])))) ? ((-(((/* implicit */int) var_13)))) : (max((var_0), (((/* implicit */int) var_10))))))));
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) var_5))))), (((unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_12))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((unsigned long long int) var_3)))));
    var_18 ^= ((/* implicit */int) var_10);
}
