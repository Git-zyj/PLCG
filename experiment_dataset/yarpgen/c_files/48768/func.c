/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48768
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
    var_15 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_2)) >= (((/* implicit */int) var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1734459245513910848LL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((273883171035135843LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))))))) <= (var_14)))) : (((/* implicit */int) var_2))));
    var_16 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
    var_17 |= ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (((+((+(((/* implicit */int) arr_1 [i_0])))))) | ((+(((/* implicit */int) (unsigned short)65535))))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24197)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-18))))) : ((~(arr_3 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_2 [i_0])))), ((!(((/* implicit */_Bool) (unsigned char)104)))))))) : (3037286175U)));
                var_20 = ((/* implicit */unsigned int) ((unsigned short) arr_4 [i_0] [i_0] [i_1 - 2]));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_7))));
}
