/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217645
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
                arr_6 [i_0] [i_1] = ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))) ^ (((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) ^ (18185940820611862763ULL))))) & (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_12))), (((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (var_12)))))));
                arr_7 [i_1] |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_14)), (var_13)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((signed char)-7), (((/* implicit */signed char) var_1)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 852532187U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48421))) : (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 6375973363412401695ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-15010))))))) : (6375973363412401688ULL)));
}
