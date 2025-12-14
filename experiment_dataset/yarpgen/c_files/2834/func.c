/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2834
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((arr_3 [i_0] [i_1 - 4] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (var_14)));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_10))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (281474976710655LL)))))));
                var_17 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((short) 343698086))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [(unsigned char)14]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14))) : (arr_5 [8U] [8U])))) : ((~(((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) 864238921U))))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)16)) <= (((/* implicit */int) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (1273313215) : ((-((~(((/* implicit */int) var_5))))))));
}
