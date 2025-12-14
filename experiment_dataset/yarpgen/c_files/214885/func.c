/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214885
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) (signed char)40)) + (((/* implicit */int) (unsigned short)65535)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(max((((/* implicit */int) max((var_7), ((signed char)42)))), ((+(((/* implicit */int) (short)16383)))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) 0U);
            }
        } 
    } 
    var_14 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
    var_15 |= ((/* implicit */short) ((((((/* implicit */_Bool) 128121217U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (17592186028032ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)0))))))) : (((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)2047)))))));
    var_16 = ((/* implicit */signed char) (unsigned short)65526);
}
