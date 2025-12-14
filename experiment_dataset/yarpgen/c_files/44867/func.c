/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44867
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
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_0))))) & (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */signed char) (_Bool)1)))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (var_7) : (((/* implicit */int) var_15)))))))), (min((var_1), (((/* implicit */int) var_4)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 14995501645208559227ULL)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (signed char)69)))), (min((((/* implicit */int) arr_1 [i_0])), (var_3)))));
        arr_3 [21ULL] [i_0] = ((/* implicit */unsigned char) var_14);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 += ((/* implicit */signed char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_1] [18U] [i_1])) : (((/* implicit */int) (signed char)69)))), (max((((/* implicit */int) arr_6 [i_1] [20] [i_1])), (1555837363)))));
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [(unsigned char)16])))))));
            var_22 = ((/* implicit */unsigned char) (~(((arr_0 [i_1]) ? (max((arr_8 [i_1] [i_2]), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1])))))))));
            var_23 = ((/* implicit */unsigned long long int) (((_Bool)1) ? ((((~(((/* implicit */int) (signed char)127)))) & (((/* implicit */int) (short)20763)))) : ((+(((/* implicit */int) (_Bool)1))))));
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((var_8), (((/* implicit */unsigned char) arr_5 [i_1])))))));
        }
        /* LoopSeq 3 */
        for (signed char i_3 = 2; i_3 < 22; i_3 += 3) 
        {
            var_24 = ((/* implicit */signed char) var_3);
            var_25 = ((/* implicit */unsigned char) (~(arr_12 [i_1])));
        }
        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            var_26 = ((/* implicit */unsigned char) (-((+(((arr_14 [i_1] [i_1]) ? (((/* implicit */int) arr_15 [i_1] [i_4] [i_4])) : (((/* implicit */int) arr_1 [2LL]))))))));
            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */signed char) arr_14 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) min((var_3), (var_17)))) ? (((((/* implicit */_Bool) (signed char)-118)) ? (var_11) : (((/* implicit */int) arr_6 [i_1] [(unsigned char)14] [i_1])))) : (((/* implicit */int) (!(arr_5 [i_1])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 + 2] [i_4 - 1])) || (((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 + 2] [i_4 - 1])))))));
        }
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_28 -= (-(min((arr_10 [i_1] [i_1] [i_1]), (arr_10 [i_5] [i_5] [i_1]))));
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (signed char)-17))))) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)233)))))) & (((/* implicit */int) min((var_15), (((/* implicit */unsigned char) (signed char)118))))))))));
            var_30 = (unsigned char)96;
        }
        arr_19 [i_1] [i_1] = min((min(((+(((/* implicit */int) arr_14 [i_1] [i_1])))), (((/* implicit */int) ((signed char) var_2))))), (arr_17 [i_1] [i_1] [i_1]));
    }
    var_31 = ((/* implicit */unsigned char) ((var_9) & (((/* implicit */unsigned long long int) -662420806991206862LL))));
    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (signed char)64)) & (var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */int) var_13)) & (var_11))))))));
    var_33 = ((/* implicit */signed char) min(((~(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))));
}
