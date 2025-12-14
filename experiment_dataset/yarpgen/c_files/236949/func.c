/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236949
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_13))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */_Bool) arr_0 [i_1 - 2]);
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((4030309715U) & (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) max((min((((/* implicit */int) (signed char)-121)), (1047552))), (max((var_14), (((/* implicit */int) (short)4095))))))) | ((-(var_1)))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) var_17)) > (((((/* implicit */_Bool) (unsigned short)63380)) ? (((/* implicit */int) (_Bool)0)) : (var_14)))))), (((((/* implicit */_Bool) var_13)) ? (min((-543575903779520413LL), (((/* implicit */long long int) (signed char)-109)))) : (((/* implicit */long long int) ((var_15) >> (((((/* implicit */int) var_16)) - (68)))))))))))));
}
