/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31616
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-6481))))), (((unsigned int) var_1))))) || (((((((/* implicit */_Bool) (unsigned short)6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)179))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)27)))))));
                var_15 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) arr_2 [i_0]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_4 [i_0] [i_0] [11U])))))) ? (((/* implicit */int) ((short) max((((/* implicit */unsigned short) var_12)), ((unsigned short)30965))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-12693))))) || (arr_2 [i_0]))))));
                var_16 *= ((/* implicit */_Bool) (-(arr_5 [i_0] [(unsigned short)2])));
                arr_6 [i_1] [i_1] [i_1] = min(((unsigned short)65530), (((/* implicit */unsigned short) (_Bool)1)));
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned short) (~(var_5)));
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6481)) ? (((/* implicit */unsigned long long int) var_7)) : (5118594101163809317ULL)))) ? (var_7) : (((/* implicit */int) var_11))))) ? (((((((/* implicit */int) (signed char)34)) % (((/* implicit */int) var_8)))) >> (((((/* implicit */int) var_3)) - (63))))) : (((((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (short)-1)))) | (((/* implicit */int) (unsigned char)179)))));
}
