/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246275
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
    var_17 = ((/* implicit */signed char) var_3);
    var_18 = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_10))), (var_16))) + (((((/* implicit */_Bool) var_1)) ? (max((511ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (0U))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (_Bool)1)), ((((!(arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (var_10)))));
        arr_2 [i_0] [(_Bool)1] |= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)15)))));
    }
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 |= ((/* implicit */_Bool) 0U);
            var_21 = arr_4 [i_1];
            var_22 ^= ((/* implicit */signed char) (+(max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))) * (72057593970819072ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (16777215U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))));
        }
        arr_8 [i_1 - 3] [i_1] = ((/* implicit */long long int) arr_4 [i_1]);
        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((72057593970819072ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2339)))))) && (((/* implicit */_Bool) 18374686479738732556ULL)))))));
    }
    var_24 &= ((/* implicit */_Bool) var_5);
}
