/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35659
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)47390)), (var_13)))) | (((unsigned long long int) (~(((/* implicit */int) (unsigned char)124)))))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((((/* implicit */_Bool) (unsigned short)2224)) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 + 1])))))))));
            var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) 1676754691U)) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
            arr_6 [i_0] [13LL] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) + (var_8)))))) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_7))))))) : (((((((/* implicit */_Bool) var_6)) ? (2565692265U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) | (((((/* implicit */_Bool) (signed char)0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
            var_18 *= ((((/* implicit */_Bool) (unsigned char)0)) ? (((((arr_4 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) : (1871180301U))) >> ((((~(1526856325U))) - (2768110943U))))) : (min((((/* implicit */unsigned int) (unsigned short)27376)), (arr_3 [(unsigned short)10] [i_0] [i_0]))));
        }
        for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), ((~(max((((((/* implicit */_Bool) (unsigned short)18134)) ? (arr_9 [i_0]) : (3866102720U))), ((~(3866102720U)))))))));
            var_20 *= ((/* implicit */unsigned long long int) (((~(arr_8 [(unsigned char)4] [i_2]))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) max((((/* implicit */long long int) 3561171008U)), (-1235018666471649837LL))))))));
        }
    }
    var_21 -= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) max((var_0), (var_8)))) + (max((var_11), (((/* implicit */long long int) var_10)))))) + (var_12)));
}
