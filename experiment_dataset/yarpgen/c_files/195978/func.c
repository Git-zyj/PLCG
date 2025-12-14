/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195978
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
    var_20 |= (~(((((long long int) (unsigned char)247)) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (var_4) : (((/* implicit */int) (signed char)66))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) min((var_21), ((+(((/* implicit */int) (unsigned char)255))))));
                var_22 -= ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */short) ((arr_1 [i_0] [(signed char)16]) > (((/* implicit */long long int) arr_3 [i_0]))))), (arr_6 [i_0] [7U] [7U]))))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) ((signed char) arr_4 [i_0])))))))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_4 [i_0 + 4])));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
    var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) max((var_16), (((/* implicit */short) (_Bool)0)))))))) & (((((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) ? (((4294967270U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))))) : (4294967295U)))));
}
