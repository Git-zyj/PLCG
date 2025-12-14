/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244935
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
    var_19 = min((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) << (((((unsigned int) var_6)) - (3086733629U)))))), (((unsigned int) ((((/* implicit */int) (unsigned char)220)) >> (((var_12) - (3103140533U)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [(short)18] [(short)18] [i_1] [i_2] |= ((/* implicit */unsigned int) var_13);
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_1 [i_0]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_0)))))) << (((((/* implicit */int) var_3)) + (75))))))));
    var_22 ^= ((/* implicit */long long int) var_17);
    var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (-1443110861) : (((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) 1443110860)))))))), (min((var_14), (max((((/* implicit */unsigned int) -753341923)), (4095U)))))));
}
