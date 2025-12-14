/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229034
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
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (var_10)))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)23439))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)56338)), (14834126620806653667ULL))) : (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */long long int) var_9)))))))));
    var_17 = ((/* implicit */int) var_1);
    var_18 = ((/* implicit */unsigned char) max((7772452237987749639LL), (max((-7772452237987749639LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 1072888272)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) arr_2 [i_0]);
                var_20 = ((/* implicit */short) ((((arr_2 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)58))) : (max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_1)) || ((!(((/* implicit */_Bool) var_15)))))));
}
