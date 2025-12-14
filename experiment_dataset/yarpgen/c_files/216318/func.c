/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216318
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
    var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((var_16) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) | (((var_0) & (((/* implicit */unsigned long long int) var_1))))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) (unsigned short)0);
        var_20 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 2])) != (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned int i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        arr_6 [i_1] [(_Bool)1] = min((((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1]))) || (((/* implicit */_Bool) ((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))), ((!(arr_3 [i_1]))));
        var_21 = ((/* implicit */short) ((min((arr_2 [i_1]), (((/* implicit */unsigned long long int) var_12)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_0 [i_1 - 2]))))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((unsigned int) (_Bool)0)) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))))))));
    }
}
