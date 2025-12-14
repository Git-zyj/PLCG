/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28655
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) /* same iter space */
    {
        var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)22528))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (max((var_12), (((/* implicit */unsigned int) var_9)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0 - 1] [i_0])))));
        var_14 = ((((/* implicit */int) min(((short)-6736), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-87)))))))) < ((~(((/* implicit */int) ((unsigned char) 4281460149U))))));
        var_15 = ((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (signed char)-85)))) >> (((((/* implicit */int) (signed char)-67)) + (86))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) (unsigned char)255);
        var_17 = ((/* implicit */int) (-(((((/* implicit */_Bool) min(((signed char)-51), ((signed char)-51)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [9LL]))) : (var_5)))));
    }
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-113)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22529)))))) & (var_8)))));
}
