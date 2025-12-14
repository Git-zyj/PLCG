/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192604
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_4 [i_0] [20ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (max((max((((/* implicit */unsigned long long int) var_8)), (var_14))), (((((/* implicit */_Bool) 4294967277U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27517))) : (18322171753398645978ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_8)))) ? (((((/* implicit */_Bool) var_12)) ? (var_10) : (var_9))) : (var_10))))));
            var_20 *= ((/* implicit */unsigned long long int) ((int) ((min((((/* implicit */unsigned long long int) var_2)), (var_16))) >> ((((+(((/* implicit */int) var_15)))) - (148))))));
        }
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_10)) : (var_12))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) + (2147483647))) >> (((((/* implicit */int) var_13)) + (28677))))))))) ? (((((/* implicit */_Bool) ((unsigned int) var_7))) ? (max((var_12), (var_0))) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) var_3)))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_18)), (var_2)))), (((((/* implicit */unsigned long long int) var_1)) & (var_16)))))));
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        arr_7 [i_2] = ((/* implicit */unsigned int) max((((max((((/* implicit */unsigned long long int) (unsigned short)27518)), (7367755552735805539ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_18)), (var_7)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_13)), (var_7)))) : (((var_0) / (((/* implicit */unsigned long long int) var_1))))))));
        var_22 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_13), (((/* implicit */short) var_15)))))) - (((var_3) / (var_8)))))) * (max((((((/* implicit */unsigned long long int) var_7)) | (var_14))), (max((((/* implicit */unsigned long long int) (unsigned short)27517)), (12624002494361697535ULL)))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) var_10)), (var_16))), (max((((/* implicit */unsigned long long int) var_1)), (var_14))))))));
    }
    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min((2032), (((/* implicit */int) (unsigned short)27517)))))));
}
