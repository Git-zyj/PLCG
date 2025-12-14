/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228232
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
    var_19 = ((/* implicit */signed char) (-((-(2345556142857088056ULL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_20 = ((((((/* implicit */unsigned long long int) ((arr_1 [i_1]) ? (((/* implicit */int) var_0)) : (-1895640666)))) * (16101187930852463559ULL))) >> (((((((((/* implicit */_Bool) (signed char)-78)) ? (18113599642295181582ULL) : (1152780767118491648ULL))) << (((((2345556142857088058ULL) + (((/* implicit */unsigned long long int) 2147483634)))) - (2345556145004571636ULL))))) - (1008806316530991072ULL))));
                    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)32751)) ? (17293963306591059955ULL) : (((/* implicit */unsigned long long int) (~(-2147483622)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53142)))));
                    var_22 &= ((((/* implicit */unsigned long long int) -1895640665)) <= (10354465150322793349ULL));
                    var_23 = ((/* implicit */unsigned int) ((signed char) (((((+(-4596811641888483990LL))) + (9223372036854775807LL))) << ((((((-(((/* implicit */int) (unsigned short)2)))) + (7))) - (5))))));
                }
                var_24 = (-(min((((/* implicit */long long int) arr_1 [i_0 + 2])), (-1757434170572662198LL))));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((471552663) == (((/* implicit */int) arr_3 [i_1] [i_0])))) ? (((/* implicit */int) (short)13167)) : (((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32757))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4197624022269758624LL)) ? (1219213140U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32752)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1431))) : (3248692596U)))));
                var_26 = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_0]);
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-81)) * (((/* implicit */int) (short)-32761))));
}
