/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38272
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3769629863U), (((/* implicit */unsigned int) (unsigned char)27))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) (unsigned short)1023))))))) >= ((-(3769629863U)))));
    var_16 = ((/* implicit */_Bool) 2556479809U);
    var_17 = ((/* implicit */short) min((((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) 525337432U)) < (15937703876305663899ULL)))))), (min((var_7), (((/* implicit */long long int) var_11))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((438523356U) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2))))))) ? (((/* implicit */int) var_5)) : (min((((/* implicit */int) (unsigned short)16352)), (370137755)))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 525337448U)) && (((/* implicit */_Bool) ((unsigned char) -1581262614)))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned char) var_7);
}
