/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3940
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2854405210U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (min((((/* implicit */int) (short)606)), (138098280)))))) ? (-338353830) : (((/* implicit */int) (signed char)22))));
        var_12 -= ((/* implicit */long long int) 338353811);
    }
    for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 2) 
    {
        arr_6 [i_1 - 2] [i_1] = var_4;
        arr_7 [i_1] = ((/* implicit */long long int) max((max(((-(var_11))), (max((0U), (((/* implicit */unsigned int) (unsigned short)43752)))))), ((~(((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    }
    var_13 ^= ((/* implicit */short) var_5);
    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (((~(((/* implicit */int) var_1)))) ^ ((~(((/* implicit */int) var_10))))))), (var_11)));
}
