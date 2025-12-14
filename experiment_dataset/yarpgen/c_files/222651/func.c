/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222651
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
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) 1898810538U);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max(((-((~(2396156757U))))), (var_1)));
                arr_7 [(short)9] [(short)9] [i_0] = ((/* implicit */long long int) (-(max((((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60396))) : (var_10))), (((((/* implicit */_Bool) var_8)) ? (2396156757U) : (var_1)))))));
                var_13 -= ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */short) (_Bool)1)), (arr_0 [i_0 - 1] [i_1 + 4]))));
                var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)103))))) ? (((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)173)))) : (((/* implicit */int) min(((signed char)115), ((signed char)124))))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */unsigned long long int) var_3);
}
