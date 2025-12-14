/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247709
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [(unsigned short)0] [(unsigned short)0])), (max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_0 [i_2]))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [(short)13] [i_1]))))) : (((unsigned int) min((((/* implicit */unsigned long long int) -2999601800399821908LL)), (var_3))))));
                    arr_10 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? ((+(arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_1]), (arr_4 [(short)13] [i_1 + 1] [i_0]))))))))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_11))));
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))) : (var_3)))))) ? (((var_3) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (var_4)))))) : ((+(((var_5) >> (((var_15) - (2934661058U)))))))));
    var_19 = var_15;
}
