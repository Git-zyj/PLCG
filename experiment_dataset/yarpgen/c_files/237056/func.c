/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237056
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
    var_15 = ((/* implicit */unsigned int) ((-1482134010) <= (((/* implicit */int) (unsigned short)2047))));
    var_16 = -3300265459223419015LL;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_17 ^= max(((unsigned short)22677), (var_14));
                    var_18 *= ((/* implicit */signed char) (+(((/* implicit */int) (short)679))));
                    var_19 ^= ((/* implicit */unsigned short) (_Bool)1);
                    var_20 |= 690986019;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) : (min((((/* implicit */unsigned long long int) var_3)), (var_1))))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42846))) - (2016U))) + (1U))))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned short)254)) : ((+(var_0)))))) ? (((/* implicit */int) (unsigned short)22677)) : (((/* implicit */int) var_3))));
}
