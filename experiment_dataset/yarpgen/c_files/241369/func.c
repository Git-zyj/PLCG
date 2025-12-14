/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241369
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */int) (short)21189)) >> (((((/* implicit */int) (unsigned char)111)) - (90))))))));
    var_14 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), ((unsigned short)65521)));
                    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned short) (unsigned char)33))) ? (((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_3 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530))))) >= (((/* implicit */unsigned long long int) ((long long int) ((short) arr_7 [i_0]))))));
                }
            } 
        } 
    } 
}
