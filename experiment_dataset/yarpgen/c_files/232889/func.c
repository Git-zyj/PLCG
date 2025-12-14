/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232889
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
    var_20 = (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4));
    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((var_18) + (((/* implicit */unsigned long long int) var_8))))))) ? ((+(((/* implicit */int) var_9)))) : (var_8)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 - 2] = (signed char)-104;
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) -9071362912481824195LL))));
        var_23 = ((/* implicit */int) max((min((((/* implicit */long long int) (~(arr_1 [i_0 - 3])))), ((~(var_10))))), (((/* implicit */long long int) (~(arr_1 [i_0 - 2]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_24 -= ((int) ((((/* implicit */_Bool) (unsigned short)48030)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned short)58071))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned long long int) min(((((((-(((/* implicit */int) arr_9 [i_2] [i_1])))) + (2147483647))) << ((((~(arr_6 [i_1]))) - (2886471598U))))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
            arr_10 [i_2] &= ((unsigned long long int) arr_5 [i_2]);
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) & (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_1] [i_2]))))) : (((max((9071362912481824202LL), (((/* implicit */long long int) 2143289344U)))) & (((/* implicit */long long int) arr_6 [i_1]))))));
            arr_11 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_9 [i_2] [i_1]))))) ? (max((((/* implicit */unsigned int) ((int) -9071362912481824195LL))), (max((((/* implicit */unsigned int) var_13)), (var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1])))));
            var_27 = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_2]);
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
        {
            arr_15 [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_14 [i_1] [i_3]) == (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-100)))))));
            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1]))));
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) -6533938806348469637LL))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
        {
            arr_19 [i_1] [i_4] [i_4] = ((/* implicit */_Bool) (signed char)-92);
            arr_20 [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(2447139679U)))) ? (-1415836632) : (((/* implicit */int) arr_7 [i_1]))));
        }
        var_29 = ((/* implicit */unsigned int) max((var_15), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_19)), (2151677951U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (8673453340012575637LL)))));
    }
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_12 [i_5] [i_5]), (arr_12 [i_5] [i_5]))))));
        var_31 = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) var_10))), (((((/* implicit */_Bool) arr_3 [(signed char)2] [i_5])) ? (((/* implicit */int) arr_3 [(unsigned short)17] [i_5])) : (var_5)))));
    }
}
