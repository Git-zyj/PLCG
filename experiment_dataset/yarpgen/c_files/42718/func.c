/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42718
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
    var_17 = ((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) >> (0ULL))), (((((/* implicit */_Bool) ((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58)))))) ? (var_3) : (((/* implicit */int) var_7))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (-(min((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (var_16))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) != (var_0))))))));
        var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)-10555)) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0 + 3])))), (((((/* implicit */_Bool) 3732528372U)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) (signed char)122))))));
        arr_4 [(short)4] [(short)4] = ((/* implicit */short) var_5);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_13) : (var_16)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_19 -= ((/* implicit */int) (!((!(arr_6 [i_1] [i_1])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)207));
            arr_10 [i_1] [i_1] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 18446744073709551588ULL)))) && (((/* implicit */_Bool) (unsigned char)176))));
        }
    }
    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3]))) : (var_13))))) >> (((/* implicit */int) ((((unsigned long long int) var_4)) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)8))))) << (min((arr_8 [i_3] [i_3 + 1]), (((/* implicit */unsigned int) (_Bool)0))))));
        var_22 = ((/* implicit */unsigned short) min(((unsigned char)36), ((unsigned char)58)));
        arr_15 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((unsigned long long int) -9223372036854775801LL)), (((/* implicit */unsigned long long int) arr_11 [i_3 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((7ULL), (((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_3 + 1])))))));
    }
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)27)) ? (-118293363195977168LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10555)))))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_17 [i_4] [(unsigned char)22])))) | (min((arr_17 [i_4] [i_4]), (var_16)))));
        arr_21 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 2644408345360333400LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)216)) || (((/* implicit */_Bool) 2372007199615117579ULL)))))) : (((((/* implicit */_Bool) -1778170831373286512LL)) ? (13105104300493679357ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4]))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) min((arr_17 [i_6] [i_6]), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10545)) ? (((/* implicit */int) arr_7 [i_5])) : (((/* implicit */int) (short)10554))))))))));
            arr_28 [i_5] [i_5] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) (unsigned char)197)) : ((+(((/* implicit */int) arr_22 [i_6]))))));
        }
        arr_29 [i_5] = ((/* implicit */unsigned long long int) var_10);
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (signed char i_8 = 3; i_8 < 23; i_8 += 4) 
            {
                for (unsigned char i_9 = 1; i_9 < 22; i_9 += 3) 
                {
                    {
                        arr_37 [i_5] [i_7] [i_8 - 3] [i_9 + 2] [i_5] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6952773454906958565LL)) || (((((((/* implicit */_Bool) (short)10554)) && (((/* implicit */_Bool) 18446744073709551609ULL)))) && (((/* implicit */_Bool) (short)-10562))))));
                        var_25 = (short)10557;
                        arr_38 [i_5] [(unsigned char)4] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-10567)), (2653135439U)));
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_0))));
                            arr_43 [i_5] [i_7] [i_8] [i_5] [i_10] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((var_9) * (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 92368680U))))) : (((/* implicit */int) (unsigned char)255))))));
                            arr_44 [i_5] [3ULL] [i_5] [i_5] [i_10] = var_1;
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 3; i_11 < 23; i_11 += 3) 
                        {
                            arr_48 [i_5] [i_7] [i_5] [i_9] [i_5] = ((unsigned char) (unsigned char)255);
                            var_27 = ((/* implicit */unsigned long long int) arr_47 [i_11] [i_9] [i_8] [i_7] [i_5]);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) max((((arr_45 [i_5] [i_5] [i_7] [i_8] [i_9] [i_12]) >> (((((/* implicit */int) (unsigned short)50206)) - (50177))))), (((((/* implicit */_Bool) -7179210580217286855LL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_12])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) : (((((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */unsigned long long int) var_3)) : (var_9))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                            arr_53 [(unsigned char)14] [i_7] [i_7] [i_5] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_5] [i_8] [i_12] [i_7])) ? (-6750298380993999131LL) : (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))));
                            var_29 = ((/* implicit */long long int) min((var_29), ((+(((((var_13) + (9223372036854775807LL))) << (((((/* implicit */int) arr_35 [i_5] [i_9 + 2] [i_8 - 1] [i_8])) - (191)))))))));
                            arr_54 [i_5] [i_7] [i_8] [i_5] [i_9] [i_12] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_27 [i_5])))), (((((/* implicit */_Bool) 2424777081U)) ? (((/* implicit */int) arr_27 [i_5])) : (((/* implicit */int) arr_27 [i_5]))))));
                        }
                    }
                } 
            } 
        } 
        arr_55 [i_5] = ((/* implicit */long long int) var_6);
    }
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)34)) | (((/* implicit */int) (short)10563))))) : (max((1219145552U), (((/* implicit */unsigned int) var_3))))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)73)), (14155315538115242586ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187)))));
    var_31 = ((/* implicit */short) (unsigned char)53);
}
