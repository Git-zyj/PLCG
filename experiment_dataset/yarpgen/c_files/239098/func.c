/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239098
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(1961990073684167195ULL)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!((!((_Bool)1))))))));
    var_13 &= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (828059438U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? ((~(((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) var_0))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])));
        var_14 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)78))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_0 [i_0]))))))));
        arr_3 [i_0] [(unsigned char)11] &= ((/* implicit */unsigned char) (_Bool)1);
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */int) (_Bool)0);
        arr_7 [(_Bool)1] = ((/* implicit */unsigned char) arr_1 [i_1] [1LL]);
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (unsigned char)1))));
        arr_8 [i_1] = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) arr_10 [i_2]);
        arr_13 [i_2] [(unsigned short)3] = ((/* implicit */short) -1);
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            arr_19 [i_3] = ((/* implicit */_Bool) 8896793477438282402ULL);
            var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)144))));
            var_18 = ((/* implicit */short) min((var_18), (((short) arr_1 [i_3] [i_4]))));
        }
        for (unsigned char i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) max(((unsigned char)1), (((/* implicit */unsigned char) max(((_Bool)1), (arr_20 [i_3] [i_5 + 2] [i_3]))))));
            arr_22 [i_5] [i_5 - 1] = ((/* implicit */_Bool) arr_16 [i_5 + 1]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((arr_23 [i_3] [i_5 - 1] [i_6] [i_6]) ? (268435455ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5 + 2] [i_5 + 1])) ? (arr_18 [i_3] [i_5 + 2] [(unsigned char)13]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [5])))))));
            }
            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_5 - 1]))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) ? (min((((/* implicit */int) arr_1 [i_3] [i_5])), (max((((/* implicit */int) arr_4 [i_3])), (-3))))) : (((/* implicit */int) ((unsigned short) arr_5 [i_3])))));
        }
        var_24 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))) : (20ULL)));
        var_25 ^= ((/* implicit */unsigned long long int) (~(arr_18 [i_3] [i_3] [i_3])));
    }
    var_26 = ((/* implicit */unsigned long long int) var_0);
    var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
}
