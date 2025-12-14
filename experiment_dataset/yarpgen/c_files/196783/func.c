/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196783
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) (unsigned short)65530);
                var_20 = ((((/* implicit */int) var_3)) >> (((((/* implicit */int) ((unsigned char) (+(arr_4 [i_0]))))) - (134))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_0 [i_0] [i_1]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_11);
    var_23 = ((/* implicit */unsigned short) var_4);
    var_24 = ((/* implicit */unsigned short) ((min((var_16), (((/* implicit */unsigned long long int) ((21U) != (var_8)))))) >> (((var_8) - (4268584101U)))));
    var_25 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */long long int) 4294967275U)))))) >> (((/* implicit */int) ((var_13) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)82)))))))))));
}
