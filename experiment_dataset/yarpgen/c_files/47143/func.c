/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47143
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((15094901162343922328ULL), (((/* implicit */unsigned long long int) (unsigned short)31744)))))));
    var_19 *= ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3351842911365629287ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140))) : (var_0)))) || (((/* implicit */_Bool) max((arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 3]), (arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_2]))))));
                    var_21 = ((/* implicit */unsigned int) var_17);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115)))));
    var_23 = ((/* implicit */unsigned long long int) var_13);
}
