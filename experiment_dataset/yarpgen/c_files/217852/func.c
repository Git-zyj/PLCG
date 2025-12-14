/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217852
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) max(((unsigned char)23), (arr_2 [i_0])))) + (((/* implicit */int) ((arr_1 [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)9])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)23)) : (((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) var_4)))))) : ((~(((/* implicit */int) arr_2 [i_0]))))));
        var_19 = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((signed char) var_4))))) ^ ((~(((/* implicit */int) (unsigned char)41))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0]))))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_0])))) : (((/* implicit */int) ((4593671619917905920ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)47)) * (((/* implicit */int) (unsigned char)232)))), (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((_Bool) var_8);
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
        arr_9 [i_1] = ((/* implicit */unsigned char) arr_7 [i_1]);
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned char)235)), (var_12)));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) ^ (var_7))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6782))) : (var_7)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) min((var_4), (((/* implicit */signed char) var_9))))) : ((+(((/* implicit */int) (unsigned char)253)))))) : (((/* implicit */int) var_13))));
    var_23 = ((/* implicit */long long int) var_13);
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_13 [i_2] = ((/* implicit */_Bool) var_4);
        var_24 = ((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_2]))));
    }
    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_18 [i_3] [i_3] = ((/* implicit */long long int) arr_7 [(short)4]);
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((_Bool) var_10)))) ? (max(((-(((/* implicit */int) (unsigned short)541)))), (((/* implicit */int) max((var_17), (((/* implicit */short) var_1))))))) : (((var_0) / (((((/* implicit */_Bool) 4593671619917905920ULL)) ? (16776960) : (((/* implicit */int) arr_16 [i_3] [i_3]))))))));
        var_26 ^= ((unsigned char) min((((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))), (min((((/* implicit */int) arr_7 [(_Bool)1])), (var_0)))));
    }
}
