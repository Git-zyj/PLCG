/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203094
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned short) arr_0 [i_0]);
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)64)) <= (((/* implicit */int) (unsigned char)63))));
        var_17 &= ((/* implicit */signed char) arr_2 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)193))))) ? (((long long int) ((signed char) (unsigned char)193))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65525)))))));
        var_18 += ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) max(((unsigned char)209), ((unsigned char)143)))) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) : (-680402071855511897LL)))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)0))))))));
        var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)-21))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_5 [i_1]))))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1863665772U)))))) : (max((593476165838518690LL), (-4484625159794818607LL)))));
    }
    var_20 = ((/* implicit */unsigned long long int) max((((long long int) var_2)), (((/* implicit */long long int) 912366039))));
    var_21 |= ((/* implicit */long long int) var_14);
    var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (short)-18726)) : (((/* implicit */int) (unsigned char)111)))) - (((/* implicit */int) var_2))));
}
