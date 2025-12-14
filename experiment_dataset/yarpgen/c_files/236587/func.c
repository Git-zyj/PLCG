/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236587
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
    var_10 = ((/* implicit */short) (-(var_5)));
    var_11 += ((/* implicit */unsigned short) ((((min((3216850013U), (((/* implicit */unsigned int) (_Bool)1)))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1400427914)))))))) ? (((/* implicit */int) var_6)) : (142845039)));
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)127))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)125))))) : (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (770394835U)))));
    var_13 *= (_Bool)1;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) (~(arr_3 [1ULL] [i_0])));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)116)), (4294967292U)));
            }
        } 
    } 
}
