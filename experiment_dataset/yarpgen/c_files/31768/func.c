/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31768
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
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_2 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) + (arr_2 [i_0 - 2])));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [14LL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */long long int) min(((signed char)127), (arr_1 [i_0])))), (min((arr_2 [i_0]), (((/* implicit */long long int) var_7)))))) : (((((/* implicit */_Bool) (+(18446744073709551610ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)4] [i_0 + 3]))) : (((-3562374964580544471LL) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))))));
            var_17 *= ((/* implicit */short) min(((-((+(((/* implicit */int) (short)-4760)))))), (((/* implicit */int) min((min((var_1), (((/* implicit */unsigned char) arr_1 [i_0])))), (var_1))))));
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_18 = ((/* implicit */long long int) arr_4 [i_0] [i_2]);
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) max((var_10), (((/* implicit */signed char) var_15))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94))) : (4294967295U))))) * (((/* implicit */unsigned int) ((int) arr_1 [i_0 + 1])))));
        }
        arr_10 [i_0] = ((/* implicit */long long int) var_5);
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (+(((8973075259034842291ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
        arr_14 [i_3] = ((/* implicit */signed char) ((long long int) min((((((/* implicit */_Bool) var_7)) ? (-1145840359) : (((/* implicit */int) arr_12 [i_3] [i_3])))), (((/* implicit */int) arr_12 [i_3] [i_3])))));
    }
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) min((18446744073709551615ULL), (15ULL)))))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (unsigned short)29)), (var_8)))))) ? (((long long int) var_12)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (short)0))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_7)))))))))))));
    /* LoopSeq 3 */
    for (long long int i_4 = 4; i_4 < 15; i_4 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) var_11);
        var_23 = ((((/* implicit */_Bool) max((arr_15 [i_4 - 3]), (arr_15 [i_4 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)114)))))) : ((+(min((((/* implicit */long long int) var_2)), (4416091684334241158LL))))));
    }
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_24 += (-((((_Bool)1) ? (((7521808206830143944LL) >> (((((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])) - (55206))))) : (((/* implicit */long long int) 4294967295U)))));
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [i_5] [4LL])))) + (max((arr_7 [12U] [12U]), (arr_7 [i_5] [(short)14]))))))));
        var_26 = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned long long int) min((arr_0 [i_5] [i_5]), (((/* implicit */unsigned short) arr_12 [i_5] [i_5]))))), ((-(var_6))))));
    }
    for (short i_6 = 1; i_6 < 13; i_6 += 3) 
    {
        var_27 = ((/* implicit */signed char) (~(((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)-23)))) && ((!(((/* implicit */_Bool) 8184U)))))))));
        arr_22 [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) arr_13 [i_6 + 1]))), (((((/* implicit */int) arr_13 [i_6 - 1])) * (((/* implicit */int) arr_13 [i_6 + 2]))))));
        arr_23 [i_6] = ((/* implicit */long long int) ((((((/* implicit */int) (short)-32743)) + (2147483647))) >> (((((/* implicit */int) (signed char)-92)) + (121)))));
    }
    var_28 = ((/* implicit */unsigned int) ((_Bool) var_7));
}
