/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36874
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [(unsigned short)4] = ((/* implicit */long long int) (-(((/* implicit */int) min(((short)27107), (((/* implicit */short) (signed char)-17)))))));
                    var_12 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0] [i_1]))));
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (-(var_7)));
                }
            } 
        } 
    } 
    var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-4240254911595004886LL) + (9223372036854775807LL))) << (0ULL)))) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */unsigned long long int) max((4240254911595004885LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21847))) : (min((((/* implicit */unsigned long long int) var_0)), (var_1)))))));
    var_14 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_2)))) >= (((((/* implicit */int) var_3)) + (((/* implicit */int) (!((_Bool)0))))))));
}
