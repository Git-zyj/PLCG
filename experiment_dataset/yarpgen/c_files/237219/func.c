/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237219
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((var_8), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_0) ^ (var_13))))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_0 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_0 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) ((arr_1 [i_0]) >> (((((/* implicit */int) var_9)) - (34)))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_8 [i_1] [(short)4] = ((/* implicit */signed char) (((!(arr_5 [i_1] [i_1]))) && (((/* implicit */_Bool) arr_6 [i_1] [i_1]))));
        arr_9 [i_1] = ((/* implicit */unsigned short) (((+(arr_7 [i_1]))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1])))));
        arr_10 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1]);
        var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((-1774748034899028805LL), (1774748034899028805LL)))))) ? ((-(var_10))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) : (arr_6 [i_1] [i_1])))));
    }
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (((((var_1) + (9223372036854775807LL))) << (((((var_1) + (416132333504693786LL))) - (46LL))))))))) % (var_7)))));
    var_19 &= ((/* implicit */short) max(((((+(((/* implicit */int) (unsigned char)171)))) == (((((/* implicit */_Bool) 3729087518U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10842218440703758837ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) : (var_13))))))));
}
