/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3178
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
    var_20 = ((/* implicit */int) 9223372036854775797LL);
    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)8502))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_22 -= ((/* implicit */unsigned long long int) ((((-2512066346964834918LL) + (min((2853208743096859125LL), (((/* implicit */long long int) (unsigned short)8192)))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((arr_3 [i_0] [6ULL]), (((/* implicit */unsigned short) (short)8502))))) : (-687148582))))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_18)))) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 3]))))) ? (max((((((/* implicit */int) var_4)) * (((/* implicit */int) arr_5 [i_0 - 1] [i_0])))), (((/* implicit */int) (unsigned char)38)))) : (min((((((/* implicit */_Bool) (unsigned short)50319)) ? (((/* implicit */int) (_Bool)1)) : (1726882920))), (((/* implicit */int) min(((short)8502), ((short)8510))))))));
                var_24 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((arr_0 [i_0] [10]), (((/* implicit */long long int) arr_3 [10LL] [4])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-687148597) : (((/* implicit */int) (unsigned char)38)))))))) ? (((/* implicit */int) max(((unsigned short)65509), ((unsigned short)9226)))) : (min((((/* implicit */int) (unsigned char)9)), (687148585)))));
            }
        } 
    } 
}
