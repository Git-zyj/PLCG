/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189590
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (+(var_1)))) ? (((var_7) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (short)1726)))) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) ((((/* implicit */int) (signed char)-110)) == (((/* implicit */int) (unsigned short)25529))))) << (((((/* implicit */int) ((unsigned char) var_5))) - (176)))))));
    var_11 ^= ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0 + 1] [i_1] = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 16383LL)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) / (arr_1 [i_1]))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1767290571U)) ? (455605012912342837ULL) : (((/* implicit */unsigned long long int) -3392748321172562441LL)))))))))));
                arr_6 [i_0] [10U] = ((/* implicit */int) ((((((/* implicit */int) var_9)) == (((/* implicit */int) (signed char)-39)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_5)))), (min((var_8), (((/* implicit */unsigned long long int) 124998356))))))));
                arr_7 [i_0] [i_0] = 6554210284175974908ULL;
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((int) var_8)) >= (((/* implicit */int) ((_Bool) 2527676725U)))))) : (((/* implicit */int) var_4))));
}
