/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28147
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
    var_19 = ((/* implicit */long long int) (signed char)-55);
    var_20 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_21 += ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-22036), (((/* implicit */short) (_Bool)1))))) ? (((int) ((((/* implicit */int) (signed char)-55)) != (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) var_17)) : ((~(((/* implicit */int) var_15))))))));
                var_22 = ((/* implicit */unsigned long long int) ((int) (unsigned short)10174));
                arr_5 [(unsigned short)0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) (unsigned short)2960)) : ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1 - 1]))))) : ((((!(((/* implicit */_Bool) (signed char)-50)))) ? (((((/* implicit */_Bool) -1686627643)) ? (-7025034864969653927LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)66))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
            }
        } 
    } 
}
