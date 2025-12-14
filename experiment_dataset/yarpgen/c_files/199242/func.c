/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199242
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
    var_12 = ((/* implicit */long long int) var_8);
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_13 -= ((/* implicit */int) min((((/* implicit */unsigned int) arr_0 [(_Bool)1])), (27U)));
        var_14 = ((/* implicit */unsigned int) var_5);
        var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)6])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_0 [(unsigned char)12])) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)2])))))));
    }
    for (signed char i_1 = 2; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1 - 2] [i_1 + 1] |= ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */short) (signed char)96)), (var_7))))));
        arr_7 [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967294U)), (287667426198290432ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 127ULL)) ? (((/* implicit */unsigned long long int) 536870896)) : (562949953421311ULL))))));
        var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1 - 2]))))), ((~(((unsigned long long int) (signed char)-64))))));
        arr_8 [i_1 + 1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [8U]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_17 = ((/* implicit */int) (!(((((/* implicit */_Bool) max((((/* implicit */short) var_5)), (var_4)))) && (((/* implicit */_Bool) (unsigned char)202))))));
        arr_11 [15U] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_2])) || (((((/* implicit */int) arr_2 [i_2] [i_2])) >= (((/* implicit */int) (signed char)-1)))))), ((!(((/* implicit */_Bool) 2021962266U))))));
        arr_12 [(short)3] [1ULL] = (!(((/* implicit */_Bool) arr_9 [i_2])));
    }
    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3474527229325543724LL)) ? (16777215U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) var_10)) : (((long long int) 15U))))) ? (((((var_11) >= (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) var_10))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(var_6))) | (((((/* implicit */_Bool) 1125899906842623LL)) ? (4294967281U) : (((/* implicit */unsigned int) var_3))))))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
}
