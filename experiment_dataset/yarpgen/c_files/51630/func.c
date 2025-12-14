/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51630
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_16))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) (signed char)127);
        var_19 = ((/* implicit */signed char) -2048233257);
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 + 1])) + (((/* implicit */int) (signed char)-111))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 += ((/* implicit */short) var_1);
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) arr_4 [i_1])) : (min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((-(((/* implicit */int) var_6))))))));
        var_23 = ((/* implicit */long long int) ((var_7) ? (var_9) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (418117626331717878ULL)))) >= (((/* implicit */int) max(((unsigned short)12602), (((/* implicit */unsigned short) (signed char)-127))))))))));
    }
    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52934))) % (710096977643596857ULL))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) <= (min((var_4), (((/* implicit */unsigned int) var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-116)) - (((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) (signed char)126))))))));
    var_25 |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_2)) <= (((((/* implicit */int) var_2)) >> (((/* implicit */int) var_5)))))))));
    var_26 = ((/* implicit */int) max((var_26), (((int) var_9))));
}
