/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196803
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
    var_19 = var_2;
    var_20 = ((/* implicit */long long int) var_13);
    var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)131))))), (var_7)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) (+(18446744073709551608ULL)));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (17048477948417210316ULL) : (((/* implicit */unsigned long long int) var_0))));
        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_0 [i_0])))) * (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)36853);
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) var_10);
        arr_7 [14LL] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (arr_3 [i_1]))) << (((/* implicit */int) var_14))));
    }
    for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        var_24 = arr_9 [i_2 - 1];
        arr_10 [i_2] = ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (unsigned short)0)))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-2147483630) & (min((2147483629), (((/* implicit */int) var_12))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) var_18))))) <= ((~(-2147483640)))))) : (577489767)));
    }
}
