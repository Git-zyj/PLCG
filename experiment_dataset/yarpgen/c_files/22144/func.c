/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22144
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
    var_18 = ((/* implicit */int) (~(var_2)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (~((-(-944407430806340157LL)))));
                arr_5 [i_0] [i_0 - 3] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(max((((/* implicit */long long int) (_Bool)1)), (-944407430806340157LL))))))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((var_6) + (((/* implicit */int) (_Bool)0))))) / ((+(var_11)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)33158)) - (516096)))))), (var_11)));
    var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~((-(var_7)))))), (((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_16))))))));
}
