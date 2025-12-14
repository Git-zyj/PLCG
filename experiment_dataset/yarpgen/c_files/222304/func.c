/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222304
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
    var_16 = ((/* implicit */unsigned short) max(((unsigned char)11), ((unsigned char)245)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) == (((/* implicit */int) var_10))))) >> (((max((((/* implicit */int) (unsigned char)244)), (-482374687))) - (229)))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) min((arr_1 [i_0] [15]), ((unsigned char)16)))) & (var_14)))));
                var_18 -= ((/* implicit */int) (unsigned char)244);
                var_19 = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) (short)-22638)), (36028762659225600LL)))));
            }
        } 
    } 
    var_20 += ((/* implicit */_Bool) var_13);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (((_Bool)0) ? (var_6) : (((/* implicit */int) var_5))))), (min((var_8), (((/* implicit */long long int) (unsigned char)0))))))) ? (min((((/* implicit */unsigned long long int) ((int) var_13))), (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_12)))) ? ((-(var_6))) : ((+(2147483647))))))));
    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2123247645)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (-7050284658186609026LL)))) ? (min((((/* implicit */int) ((((/* implicit */_Bool) (short)-22650)) || (((/* implicit */_Bool) 1545586006))))), (var_0))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_12)))) ? (var_9) : (((/* implicit */int) (short)22659))))));
}
