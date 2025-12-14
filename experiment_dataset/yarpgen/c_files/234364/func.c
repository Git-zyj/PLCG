/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234364
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 -= max((((((/* implicit */_Bool) ((unsigned char) var_8))) ? (arr_2 [i_0]) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-9276)), ((unsigned short)65534)))))), ((~(arr_2 [i_0]))));
        var_15 |= ((/* implicit */unsigned int) (-(min((((/* implicit */int) var_13)), (arr_2 [i_0])))));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_4 [i_1 + 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531)))))) ? (min(((~(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (short)-9276)), (2304717109306851328ULL))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)6679))))))))));
        var_17 = ((/* implicit */long long int) max(((-(((/* implicit */int) (short)27645)))), (((/* implicit */int) max(((unsigned short)2), (((/* implicit */unsigned short) var_5)))))));
        arr_5 [i_1 + 2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_13))))) : ((-(arr_4 [i_1])))))));
    }
    for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_18 ^= ((/* implicit */long long int) (+((+(435418721U)))));
        arr_9 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -9223372036854775803LL)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_0 [i_2]))))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)-9280)))))))));
        var_19 ^= min((((/* implicit */int) ((((/* implicit */int) (unsigned short)65534)) < ((~(((/* implicit */int) var_10))))))), (((arr_2 [i_2]) + (arr_2 [i_2]))));
    }
    var_20 += ((/* implicit */_Bool) max((((/* implicit */int) var_3)), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (short)-22431)))) - (((((/* implicit */_Bool) (short)-9269)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65511))))))));
    var_21 &= ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (short)-8886)))));
    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
}
