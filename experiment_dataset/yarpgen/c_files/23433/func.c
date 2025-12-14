/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23433
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */long long int) 1894225350U)) - (((((/* implicit */long long int) ((/* implicit */int) var_1))) - (var_2))))) : (((((/* implicit */_Bool) ((134217727LL) * (((/* implicit */long long int) ((/* implicit */int) (short)20888)))))) ? (((/* implicit */long long int) (+(268427264U)))) : ((~(var_5)))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
                    var_16 |= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) ((unsigned short) ((arr_2 [(short)18] [(short)18]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383)))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) ((short) var_9));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((4294967295U), (var_8)))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 255)) ? (-1763237941034862497LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31)))))))));
    }
    for (int i_3 = 1; i_3 < 22; i_3 += 3) 
    {
        var_19 = min((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-5455))))) ? (981872523U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5442))))), ((~(((((/* implicit */_Bool) arr_10 [i_3])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (((~(var_8))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_8 [i_3])), (arr_10 [i_3])))))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (((/* implicit */int) (unsigned short)16383)))) + (((/* implicit */int) ((unsigned char) (unsigned char)127))))))));
        var_21 *= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52589)) ? (((/* implicit */int) (short)5428)) : (((/* implicit */int) (unsigned char)225))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned char)240))))) : (var_5)))));
    }
}
