/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206574
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
    var_20 = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-73))) : (67106816U))))) ? (max((((/* implicit */unsigned long long int) var_7)), (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned short)65535))))))));
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) 1063280532U))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) (short)(-32767 - 1))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (_Bool)1))))) >> (((((/* implicit */int) var_3)) - (57962)))))), (max((18446744073709551602ULL), (((/* implicit */unsigned long long int) ((_Bool) -2020839823))))))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min(((-(3804977306U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)32767)), (var_16)))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) ((unsigned char) var_18)))) & (var_0)));
    var_26 = ((/* implicit */unsigned long long int) ((short) (-(((((/* implicit */int) (unsigned char)18)) * (((/* implicit */int) (unsigned char)246)))))));
}
