/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52105
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
    var_10 = ((/* implicit */signed char) -514938631);
    var_11 = ((/* implicit */unsigned char) (signed char)-42);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_3);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)13994)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) (signed char)42)))))))) ^ (1821789862U)));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-36))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 1821789862U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))) : (min((var_4), (((/* implicit */unsigned int) (short)(-32767 - 1)))))))) : (max((max((((/* implicit */unsigned long long int) (signed char)-14)), (arr_5 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_7)) != (var_1))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((4110904859U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33863)))));
    }
    for (int i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        arr_12 [i_2] = (signed char)-42;
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_13 = 184062437U;
            arr_16 [i_3] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 17927119935976742897ULL)))))));
            arr_17 [i_3] [i_2] [i_2] &= ((/* implicit */int) ((((/* implicit */_Bool) 3037177149U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 + 1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2]))))))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) (unsigned char)252);
            var_15 = ((/* implicit */unsigned int) ((arr_8 [i_2 - 1]) << ((((-(3425535685U))) - (869431554U)))));
            arr_21 [i_4] [i_2] = ((/* implicit */signed char) 5158641402231315157ULL);
            arr_22 [i_4] [i_2] = ((/* implicit */short) arr_0 [i_2]);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)56)), ((unsigned short)6308)))) < (arr_18 [i_2] [i_5]))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (4110904859U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36)))))) ? (((((/* implicit */_Bool) 1615073789U)) ? (184062447U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59228))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2]))))))))));
            var_17 = ((/* implicit */short) min(((+(((((/* implicit */_Bool) (unsigned short)40375)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47088))) : (4294967295U))))), (((/* implicit */unsigned int) max((((((/* implicit */int) (signed char)73)) / (((/* implicit */int) (short)-2117)))), (((/* implicit */int) arr_13 [i_5])))))));
            var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? (2473177433U) : (arr_9 [i_2 + 1]))))));
            arr_25 [i_5] [i_2] |= ((/* implicit */short) 106432638);
        }
        var_19 = ((/* implicit */unsigned char) (!((((!(((/* implicit */_Bool) var_4)))) && ((!(((/* implicit */_Bool) (short)-18701))))))));
        var_20 = ((/* implicit */int) 184062447U);
    }
}
