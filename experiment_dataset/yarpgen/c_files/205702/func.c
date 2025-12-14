/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205702
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (-1) : (((/* implicit */int) (unsigned short)25307))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-16342)) : (((/* implicit */int) (unsigned short)25307)))) : (((/* implicit */int) (short)-16340))))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned short)40229)) % (((/* implicit */int) (_Bool)1)))) <= (((7) % (((/* implicit */int) (short)-31399))))))) : ((~(((/* implicit */int) (!(var_11))))))));
                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1011176612U)) && (((/* implicit */_Bool) (short)7202)))) ? (((((/* implicit */int) (unsigned char)237)) / (2147483647))) : ((+(((/* implicit */int) (unsigned char)10))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_6))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_17)) << (((((/* implicit */int) (unsigned short)40240)) - (40216)))))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) >= (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (9223372036854775796LL)))))))));
}
