/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222806
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (unsigned short)23))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */signed char) var_7);
                    arr_8 [i_0] [i_1 + 2] = ((((/* implicit */_Bool) (unsigned char)173)) ? (((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)8))) : (0LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-2256387861041584256LL)))))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)28)))) : (((((/* implicit */_Bool) 3558486446U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))) : (4294967292U)))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) (short)-24))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (short)12561)) : (((/* implicit */int) (short)1))))) : (max((0LL), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -163635236))) ? (((/* implicit */int) ((((/* implicit */int) (short)-29)) <= (-14)))) : (var_4))))));
                }
            } 
        } 
    } 
}
