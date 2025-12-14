/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215822
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_1] |= ((/* implicit */short) ((((((unsigned long long int) (short)10308)) << (((((/* implicit */int) (short)10308)) - (10302))))) ^ (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (short)-10309)) - (((/* implicit */int) (unsigned char)0))))))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)-10325))))), ((short)-1)))) || (((/* implicit */_Bool) max((1835107050U), (((/* implicit */unsigned int) (short)-10325)))))));
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) max((var_4), (((unsigned int) arr_5 [i_0] [i_1] [(_Bool)1])))))));
            }
        } 
    } 
    var_14 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3623970198U)) ? (1250436811U) : (var_4)))) ? (max((((/* implicit */int) (short)-27693)), (0))) : (((((/* implicit */_Bool) (short)13452)) ? (((/* implicit */int) (short)-8168)) : (((/* implicit */int) (short)-13442)))))), (var_9)));
    var_15 = ((/* implicit */short) 3044530501U);
    var_16 = ((/* implicit */int) var_7);
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_0))));
}
