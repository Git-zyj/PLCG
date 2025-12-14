/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206183
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1]))) | (1085654934U))));
                var_12 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)54805)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (signed char)2))))))));
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) <= (var_10))))))) > (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)0)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (unsigned char)175))));
}
