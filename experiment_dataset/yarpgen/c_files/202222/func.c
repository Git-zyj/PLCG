/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202222
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) (short)-673);
        var_17 |= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) ((arr_3 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13)))))) != (max((((/* implicit */int) (unsigned char)3)), (0))))));
        var_18 &= ((/* implicit */unsigned long long int) ((arr_3 [i_0]) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (13)))) / ((-(4294967284U))))))));
        arr_4 [i_0] &= ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) : (arr_0 [i_0] [i_0]))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_5)))) ^ (var_2)));
            var_20 = ((arr_5 [i_2]) > (((/* implicit */unsigned int) arr_9 [i_1] [i_1])));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (arr_5 [i_1])));
        }
        var_22 = ((/* implicit */int) (~(arr_5 [i_1])));
        arr_11 [i_1] = ((/* implicit */unsigned char) ((var_10) + (((/* implicit */unsigned int) -1))));
    }
    var_23 = ((/* implicit */long long int) (short)659);
    var_24 = ((/* implicit */int) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_2))) >> (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (short)13594)))))), (((/* implicit */unsigned long long int) var_0))));
}
