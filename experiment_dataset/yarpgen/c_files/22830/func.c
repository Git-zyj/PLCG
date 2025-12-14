/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22830
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
    var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (unsigned short)10344)) : (((/* implicit */int) var_8))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_15 = var_9;
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_5)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((long long int) var_13)) - (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((int) var_2))) : (var_3)));
    }
    for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        var_17 = ((/* implicit */short) (~((+(((/* implicit */int) (unsigned char)0))))));
        arr_7 [i_1] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (((((/* implicit */long long int) ((/* implicit */int) var_1))) - (2582990738142789609LL))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            arr_14 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) max((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)10344)))), (((_Bool) var_5))))) : ((+(min((((/* implicit */int) (unsigned short)54514)), (var_4)))))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (+(max((((/* implicit */int) var_8)), (var_6)))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11))))) + (min((var_3), (((/* implicit */long long int) (unsigned short)0))))))));
            arr_15 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) (signed char)106))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (signed char)81))))) ? (((/* implicit */int) ((unsigned char) (+(1384819103U))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13))))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (short)-22122))));
        }
        arr_16 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) var_2)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10LL)) ? (((/* implicit */unsigned long long int) 6811413850451219188LL)) : (13255654881284506071ULL)))) ? (min((var_7), (((/* implicit */long long int) (_Bool)1)))) : (max((var_3), (var_7)))))));
    }
}
