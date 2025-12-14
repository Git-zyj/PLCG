/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27739
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
    var_13 = min((((var_11) >> (((((/* implicit */int) var_0)) - (41488))))), (((/* implicit */unsigned int) var_12)));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1632072637U)) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) var_0))))));
    var_15 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) (-(arr_2 [i_0])));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2662894662U)));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_18 = ((/* implicit */short) arr_4 [i_1]);
        arr_5 [i_1] = ((/* implicit */int) arr_3 [i_1]);
        var_19 = ((/* implicit */unsigned short) max((1632072637U), (((/* implicit */unsigned int) (signed char)9))));
        var_20 -= 1632072637U;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_21 &= ((/* implicit */unsigned char) 2662894659U);
        var_22 = ((/* implicit */int) (~(arr_1 [i_2])));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_2])) > (((/* implicit */int) (unsigned short)57414)))))) : (((((/* implicit */_Bool) 2662894646U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (arr_2 [i_2])))));
    }
    var_24 = (-(2662894626U));
}
