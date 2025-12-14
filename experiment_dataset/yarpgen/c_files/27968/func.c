/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27968
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0 - 1] [i_1] [i_1] |= ((/* implicit */signed char) var_1);
                arr_5 [i_0 - 1] [(unsigned char)5] [(unsigned char)5] = ((/* implicit */short) ((((2868036132557460613LL) == (524160LL))) ? ((+(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0))) > (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) & (var_12))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (~(((((/* implicit */int) var_7)) % (((/* implicit */int) var_16))))))) : (min((((/* implicit */long long int) var_3)), (var_15)))));
    var_21 = ((((6843934225565420757ULL) >> (((-7257976725381839911LL) + (7257976725381839957LL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((6814546038047174056ULL) == (max((6814546038047174056ULL), (((/* implicit */unsigned long long int) (signed char)127)))))))));
    var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */short) var_18))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_18)), (var_6)))))))) ? (((min((((/* implicit */long long int) var_19)), (var_8))) + (((var_13) + (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_19)), (var_3)))))))));
}
