/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226380
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_13) ? (-2822508037109270110LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52891)))))) == (min((((/* implicit */unsigned long long int) -2822508037109270111LL)), (18446744073709551611ULL)))))) << (((((/* implicit */int) min(((unsigned short)52896), ((unsigned short)52891)))) - (52868)))));
    var_21 *= ((/* implicit */unsigned short) ((max((min((2822508037109270130LL), (2822508037109270109LL))), (((/* implicit */long long int) ((2822508037109270109LL) > (((/* implicit */long long int) var_3))))))) & (((/* implicit */long long int) ((/* implicit */int) min((min(((unsigned short)12644), (((/* implicit */unsigned short) var_2)))), (((/* implicit */unsigned short) var_12))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_22 += ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)60218))));
        arr_4 [i_0] = (unsigned short)12;
        arr_5 [i_0 - 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)52891))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (unsigned short)47241)))) : (((/* implicit */int) var_12)))))));
        var_24 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (2822508037109270109LL))) - (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)47235)))))));
    }
}
