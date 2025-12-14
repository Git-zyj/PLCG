/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198091
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) -4320278223987188543LL);
        var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))), (max((((((/* implicit */_Bool) -2407763488933285421LL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [2ULL]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_0])))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_10 [(unsigned char)6] [(short)2] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) & (9223372036854775803LL))));
            var_16 = ((/* implicit */unsigned char) ((((min((-4320278223987188543LL), (-4320278223987188535LL))) / ((+(-4320278223987188535LL))))) / (min((((var_8) / (arr_7 [i_1] [(unsigned short)4]))), (((/* implicit */long long int) arr_1 [0LL]))))));
            var_17 = max((((/* implicit */long long int) min((((((/* implicit */int) (short)11081)) << (((/* implicit */int) var_4)))), (((/* implicit */int) max(((short)-11082), ((short)-11081))))))), (var_2));
            var_18 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_5 [i_1 - 1])) & (((/* implicit */int) arr_5 [i_1 - 1])))));
        }
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_19 = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1 - 1])) && (((/* implicit */_Bool) arr_11 [i_3]))))));
            var_20 = ((/* implicit */long long int) ((unsigned int) arr_0 [i_3]));
            var_21 = ((/* implicit */long long int) min((var_21), ((~(((((/* implicit */long long int) ((/* implicit */int) min(((signed char)22), (arr_2 [i_1] [(short)4]))))) | ((-(6419010282251513787LL)))))))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [3ULL]))) < (((3198118046U) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))) * (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [1U] [(signed char)1]))))) / (max((arr_1 [i_1]), (((/* implicit */unsigned int) arr_5 [i_1])))))))))));
        }
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            var_23 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)7161)) ? (9223372036854775785LL) : (((/* implicit */long long int) 4294967295U)))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-14)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_15 [(unsigned char)5] [(unsigned char)5])));
        }
        var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_11 [i_1 - 1])))))));
        var_26 = ((/* implicit */_Bool) (-(((((/* implicit */int) (short)11104)) * (((/* implicit */int) (short)-8320))))));
    }
    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        var_27 = ((/* implicit */short) arr_20 [i_5] [2ULL]);
        var_28 = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))) : (var_11))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) var_7)))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (min((12616954578803543931ULL), (((/* implicit */unsigned long long int) arr_22 [i_7] [i_7])))) : (((/* implicit */unsigned long long int) -6419010282251513787LL)))))));
            arr_26 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 3197913732U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) : ((-(164851649U)))));
        }
        var_30 -= ((/* implicit */short) (-(var_11)));
    }
    var_31 = ((/* implicit */signed char) var_1);
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) % (((long long int) var_9))));
}
