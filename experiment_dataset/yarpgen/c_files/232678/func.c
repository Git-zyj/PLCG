/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232678
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */int) arr_2 [i_0 + 2])), (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) arr_2 [i_0 + 1])))))), (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0 + 1])) + (28302)))))));
        arr_4 [i_0] = ((/* implicit */signed char) min((min((arr_2 [i_0]), (arr_2 [i_0 - 1]))), (min((arr_2 [i_0]), (arr_2 [i_0 - 2])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-24200)) || (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) <= (-95056611909593818LL)))));
        arr_10 [i_1] = ((/* implicit */short) ((arr_5 [i_1 + 1]) / (arr_5 [i_1 + 1])));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 95056611909593817LL)) && (((/* implicit */_Bool) 21ULL))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_13 [i_1 + 1] = ((/* implicit */short) ((((((/* implicit */_Bool) 2641935154584406852ULL)) ? (95056611909593826LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-2756))))) | (((/* implicit */long long int) arr_5 [i_1 + 1]))));
            arr_14 [i_1] = ((/* implicit */signed char) ((((5769056998808770489LL) <= (((/* implicit */long long int) arr_8 [i_1])))) ? (-5769056998808770463LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112)))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            arr_17 [i_3] = ((/* implicit */unsigned int) arr_11 [i_1]);
            arr_18 [(signed char)8] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_1 + 1])) + (((/* implicit */int) (short)14985))))) >= (((((/* implicit */_Bool) -95056611909593819LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43202)))))));
        }
        var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_1 + 1])) >= (((/* implicit */int) arr_7 [i_1 + 1]))));
    }
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_25 [i_4] [i_4] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-6)), (min((arr_5 [i_4]), (((/* implicit */unsigned int) arr_2 [i_5]))))))) ? (((/* implicit */int) arr_7 [i_5])) : (((/* implicit */int) arr_24 [i_4] [i_4] [i_4]))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) arr_5 [i_5])) ? (10761998773051630427ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))))), (arr_12 [i_4]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5] [i_5]))))))));
                /* LoopSeq 1 */
                for (short i_6 = 2; i_6 < 12; i_6 += 2) 
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((arr_27 [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6 + 1]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_4])) + (((/* implicit */int) arr_6 [i_6 - 1] [i_4]))))))), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        arr_31 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_4] [i_4])) / (((/* implicit */int) arr_30 [i_4] [i_4]))));
                        arr_32 [i_7] [i_4] [i_5] [i_4] |= -95056611909593798LL;
                        arr_33 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_7]))) + (((95056611909593826LL) >> (((/* implicit */int) arr_30 [i_6 - 1] [i_6 - 1]))))));
                    }
                    arr_34 [i_4] [i_4] [(_Bool)1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)23689))) : (-95056611909593807LL)))) ? (((/* implicit */unsigned long long int) arr_29 [i_6])) : (((((/* implicit */_Bool) 95056611909593798LL)) ? (10170642303463291329ULL) : (((/* implicit */unsigned long long int) 5769056998808770490LL))))))) || (((((/* implicit */_Bool) (unsigned char)193)) && (((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)162)), (arr_7 [i_4]))))))));
                    var_19 = ((/* implicit */long long int) arr_15 [i_6] [i_6]);
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (((95056611909593818LL) ^ (-95056611909593798LL)))))) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (short)-30522)))))));
                                var_21 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-947)), (((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-30)), (5769056998808770495LL)))) ? (((/* implicit */int) arr_22 [i_6] [i_5])) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_4] [i_4])), (arr_22 [i_4] [i_4]))))))));
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (unsigned short)20286))));
                                arr_41 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) 95056611909593798LL);
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) (short)6500)) / (((((/* implicit */_Bool) arr_16 [i_4])) ? (((((/* implicit */int) arr_1 [i_8] [i_8])) - (((/* implicit */int) arr_21 [i_4] [(_Bool)1] [i_4])))) : (((/* implicit */int) arr_30 [i_4] [i_4])))))))));
                            }
                        } 
                    } 
                }
                var_24 *= ((/* implicit */unsigned short) min((((/* implicit */int) arr_37 [i_4])), (((((/* implicit */int) arr_37 [i_4])) * (((/* implicit */int) arr_37 [i_4]))))));
            }
        } 
    } 
}
