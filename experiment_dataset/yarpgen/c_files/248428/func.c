/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248428
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) var_4);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 3082043976U)) ? (((/* implicit */int) ((short) (_Bool)0))) : (((/* implicit */int) var_5)))) : (min((695089575), (((/* implicit */int) var_10))))));
        arr_5 [i_0] = (unsigned char)6;
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2147483640)), (var_16)))) ? (((/* implicit */unsigned long long int) min((arr_7 [i_1]), (((/* implicit */int) (signed char)-113))))) : (min((((/* implicit */unsigned long long int) (short)-32049)), (var_7))))), (((/* implicit */unsigned long long int) -2147483640))));
        arr_8 [i_1] [i_1] |= ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) (+(2305843009196916736ULL))))), (max((((/* implicit */int) (short)32048)), (((((/* implicit */_Bool) 2013265920)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [(signed char)1] [i_2] |= ((/* implicit */short) ((_Bool) var_6));
        var_19 = ((/* implicit */int) arr_9 [i_2]);
        arr_12 [i_2] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) arr_10 [i_2])), (arr_9 [i_2])))), (min((min((((/* implicit */int) var_13)), (-2147483641))), (((/* implicit */int) min(((unsigned char)193), (((/* implicit */unsigned char) var_13)))))))));
        arr_13 [i_2] [i_2] = ((var_1) >> (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))))));
        var_20 = (!(((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-10266)) : (var_8))) + (2147483647))) << (((((((/* implicit */_Bool) arr_9 [i_2])) ? (var_16) : (var_17))) - (7961572815456562759ULL)))))));
    }
    var_21 = ((/* implicit */long long int) var_14);
    var_22 = ((/* implicit */unsigned int) var_2);
}
