/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224422
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
    var_16 = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_2))), (((/* implicit */unsigned long long int) (signed char)116)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 = ((signed char) (!(((/* implicit */_Bool) (unsigned char)48))));
                    arr_6 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */int) arr_3 [i_0] [i_0])), (2147483647))), (((/* implicit */int) (unsigned char)48))))) ? ((~(((((/* implicit */_Bool) (unsigned char)120)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))))))) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) (unsigned char)125)) >> (((var_8) - (1772720553U))))) <= (((((/* implicit */int) arr_0 [i_0 - 1])) * (((/* implicit */int) (unsigned char)222))))))) << (((((/* implicit */int) arr_5 [4U] [4U] [i_0] [i_0 - 1])) - (38414)))));
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */int) var_8);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)52139))))), (min((var_13), (((/* implicit */long long int) (unsigned char)207))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_3))) : (((long long int) ((12938234509416920355ULL) > (((/* implicit */unsigned long long int) var_9)))))));
}
