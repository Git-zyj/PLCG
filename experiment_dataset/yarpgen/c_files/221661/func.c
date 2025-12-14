/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221661
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
    var_12 = ((/* implicit */unsigned int) var_8);
    var_13 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) min(((short)32763), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */int) var_11)) * (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(unsigned short)21] [i_1] [i_1] = ((/* implicit */_Bool) (signed char)112);
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (min((((/* implicit */unsigned long long int) (-((~(arr_0 [i_1])))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (unsigned char)128))))), (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) -1636773436))))))))));
                arr_7 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned char) arr_1 [i_1]);
                arr_8 [i_1] [9U] [i_1] = ((/* implicit */short) arr_1 [18LL]);
            }
        } 
    } 
}
