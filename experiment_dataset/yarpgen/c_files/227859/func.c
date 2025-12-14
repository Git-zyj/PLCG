/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227859
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
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)2630))));
        arr_3 [i_0] = ((/* implicit */_Bool) (((!((!(arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)7] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) var_3)) : ((~(var_11)))))));
        var_17 += ((/* implicit */short) ((unsigned char) min((((/* implicit */long long int) arr_0 [i_0 - 1])), (arr_2 [i_0 - 1] [i_0 - 1]))));
        arr_4 [(signed char)10] = ((((/* implicit */_Bool) ((-656036172) | (min((656036172), (((/* implicit */int) arr_0 [i_0]))))))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)4] [(unsigned short)4]))) : (min((((/* implicit */long long int) -275231005)), (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)253)) > (((/* implicit */int) arr_1 [5LL] [i_0]))))), (arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? ((+(656036155))) : (-656036156)))) || (((/* implicit */_Bool) 656036156))));
        arr_8 [i_1] = (-((~(((/* implicit */int) arr_0 [i_1])))));
        /* LoopSeq 3 */
        for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            var_19 = ((/* implicit */signed char) var_2);
            arr_13 [i_1] = ((/* implicit */signed char) (~(656036155)));
            arr_14 [i_2] [i_1] [i_1] = (!(((/* implicit */_Bool) max(((unsigned short)7), (((/* implicit */unsigned short) (_Bool)1))))));
        }
        for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_20 = var_11;
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) 4193280U)))));
            arr_18 [i_1] [i_1] [i_3] = ((/* implicit */long long int) -2216380);
        }
        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) arr_12 [i_1] [7ULL] [i_4]);
            arr_21 [i_4] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((((-656036156) + (2147483647))) >> (((/* implicit */int) arr_9 [i_1] [2LL] [10LL]))))) <= (var_1))) ? (max((((/* implicit */unsigned long long int) min((656036152), (((/* implicit */int) var_7))))), (11330751586420943499ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4398046511103LL), (arr_15 [i_4] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (arr_6 [i_4]))))));
        }
    }
    var_23 = ((/* implicit */_Bool) var_1);
    var_24 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)126))))), (var_2)));
    var_25 += ((/* implicit */unsigned char) ((min((((/* implicit */int) var_4)), (((((/* implicit */int) var_14)) - (((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((short) var_11))) || (((/* implicit */_Bool) max((((/* implicit */int) (signed char)121)), (656036174)))))))));
}
