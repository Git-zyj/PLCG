/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245370
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                var_15 = ((/* implicit */int) max((var_15), ((-(((int) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) : (562949953421311ULL))))))));
                arr_7 [i_1] = ((/* implicit */_Bool) max((min((((/* implicit */int) ((short) var_7))), (((((/* implicit */int) (unsigned char)143)) ^ (((/* implicit */int) var_9)))))), (((/* implicit */int) ((signed char) arr_0 [i_1 - 1] [i_1 - 1])))));
                var_16 *= ((/* implicit */unsigned int) ((unsigned short) min(((~(((/* implicit */int) (unsigned char)103)))), (((((/* implicit */int) var_14)) & (((/* implicit */int) (signed char)-45)))))));
                arr_8 [13ULL] [i_1 + 1] [i_1 + 1] |= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)23593)), ((~(var_11)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) >= (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_6)), (var_13)))))));
    var_18 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) ((unsigned short) (signed char)(-127 - 1))))), (max((((((/* implicit */int) var_4)) >> (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (signed char)67)))))))));
    var_19 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((2497601355926161768ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) : (((/* implicit */int) ((var_6) <= (((/* implicit */int) (unsigned short)53415))))))));
}
