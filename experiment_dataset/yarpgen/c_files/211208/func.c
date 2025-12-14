/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211208
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
    var_18 = ((/* implicit */long long int) var_8);
    var_19 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((unsigned char) ((((/* implicit */_Bool) min((var_17), ((unsigned short)30118)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    var_20 = ((/* implicit */unsigned char) -6926629647404432241LL);
                    arr_10 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) (short)8213)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114))) : (85764956U))))), (((/* implicit */unsigned int) (short)-8224))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_14);
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)0)))))))))));
}
