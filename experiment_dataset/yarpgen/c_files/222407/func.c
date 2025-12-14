/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222407
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
    var_20 &= ((/* implicit */signed char) var_13);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_2 [i_0]))));
        var_22 += ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) arr_2 [i_0])) - (123))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_23 += ((/* implicit */short) ((long long int) (-(((/* implicit */int) (short)-6472)))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
        arr_8 [i_1] = ((unsigned char) var_12);
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1])) / (((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) (short)-9236)) : (((/* implicit */int) var_10)))))))));
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_25 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_13)))), ((((+(((/* implicit */int) arr_9 [i_2])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))));
        var_26 = ((/* implicit */short) arr_9 [i_2]);
        arr_11 [i_2] = ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_2] [i_2])) <= (-450588443)))) <= (min((var_7), (((/* implicit */int) var_13)))));
    }
}
