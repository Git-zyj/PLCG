/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34670
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
    var_20 = ((/* implicit */unsigned char) var_4);
    var_21 = ((/* implicit */long long int) min((((/* implicit */int) var_14)), (((((/* implicit */_Bool) min((var_13), (var_13)))) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) var_15)) & (var_8)))))));
    var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) var_19)) ? (((var_19) << (((var_9) + (173737936581069423LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_18)))))) >= (((unsigned int) ((((/* implicit */int) var_16)) == (((/* implicit */int) (unsigned short)13675)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) var_6))))) ? ((-(((/* implicit */int) arr_0 [i_0] [(unsigned char)1])))) : (((/* implicit */int) var_1)))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            var_23 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(10U)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_3 [i_0] [i_0] [i_1 - 1]))) : (((/* implicit */unsigned long long int) max((9U), (((/* implicit */unsigned int) arr_4 [(unsigned short)3] [i_0]))))))), (((/* implicit */unsigned long long int) arr_0 [i_1 - 2] [i_1 - 2]))));
            arr_7 [(_Bool)1] = max((arr_5 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) ? (((/* implicit */long long int) 4294967287U)) : (-4670606902416381682LL))) : (((/* implicit */long long int) var_7))))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) arr_8 [i_2]);
        var_25 += ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)6])) ? (var_9) : (((/* implicit */long long int) 4294967295U))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) arr_4 [(unsigned short)10] [(unsigned short)5])) : (((/* implicit */int) var_14)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (_Bool)1))));
        var_27 = ((/* implicit */int) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) var_16)))));
    }
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))) && (((((/* implicit */_Bool) arr_6 [i_4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13907)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_4])))))))));
        var_29 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (var_6) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) 1040187392)) ? (((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_3 [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned long long int) (-(var_6))))))));
        var_30 = (~(((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) arr_6 [i_4])) : (1069799824))));
    }
    var_31 = ((/* implicit */unsigned short) var_4);
}
