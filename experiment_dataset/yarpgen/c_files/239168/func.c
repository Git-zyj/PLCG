/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239168
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) var_4)) : (var_2)))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(_Bool)0])) || (((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)57558)) : (((/* implicit */int) (short)-16384))))))))));
                var_12 &= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_1 - 1]) : (((/* implicit */int) min((var_4), (((/* implicit */short) arr_2 [i_0] [i_0] [i_0])))))))));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_2))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((var_2) >> (((var_7) - (3386552382U))))))));
    var_15 = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) min((var_5), ((short)-16384)))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-16408))))))) <= (((((/* implicit */_Bool) (short)-16408)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-4062169091941280856LL))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (signed char)-118))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (short)16407)) ? (((/* implicit */unsigned int) var_2)) : (var_3)))))));
}
