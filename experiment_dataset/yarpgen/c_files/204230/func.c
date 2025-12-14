/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204230
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
    var_20 -= (_Bool)0;
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [10U] [2ULL]), (arr_3 [6] [i_0])))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [6U] [6U])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)7))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13586262269546232358ULL)))))) * (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (arr_1 [i_1] [(unsigned char)18])))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) / (((/* implicit */int) (unsigned char)208)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((((var_14) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) var_7)))) + (204))))) / (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)77)) && (((/* implicit */_Bool) var_13)))))) : (((((/* implicit */_Bool) (unsigned char)127)) ? (14U) : (((/* implicit */unsigned int) 822400083)))))))));
}
