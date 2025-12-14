/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197070
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
    var_20 = ((/* implicit */signed char) min((9024178741395626351LL), (9024178741395626351LL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */int) arr_1 [i_0] [i_1]);
                var_22 *= ((/* implicit */unsigned long long int) -48790355);
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_6))));
                                arr_14 [i_0] [19ULL] [i_2] [(signed char)1] [18] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (min((9024178741395626351LL), (((/* implicit */long long int) var_6)))) : (min((((/* implicit */long long int) (unsigned short)1395)), (9024178741395626342LL)))))) - (var_16)));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) min((min((-9024178741395626351LL), (((/* implicit */long long int) 7U)))), (((((/* implicit */_Bool) 9964523317462641133ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1395))) : (262143LL)))))) : (var_17)));
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (9024178741395626345LL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (signed char i_6 = 1; i_6 < 15; i_6 += 3) 
        {
            {
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((-9024178741395626345LL) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6 - 1] [i_5] [i_6]))))))));
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_27 |= ((((/* implicit */_Bool) min(((~(-1067683332))), (((/* implicit */int) ((unsigned short) 1967135080U)))))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_5] [i_5]))))), (min((var_9), (((/* implicit */unsigned long long int) arr_16 [15ULL])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_5] [i_6] [i_7] [i_5] [i_5])) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (26311503U))))))));
                    /* LoopSeq 3 */
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        arr_26 [i_7] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) ((arr_10 [i_5] [i_8] [i_6 - 1] [i_6 - 1] [i_5]) + (((/* implicit */unsigned long long int) min((10), (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_9 = 1; i_9 < 15; i_9 += 2) 
                        {
                            arr_29 [i_9] [i_7] [i_7] [i_7] [i_6] [i_7] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((1415054540U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64150))))))));
                            var_28 += ((/* implicit */_Bool) var_6);
                            arr_30 [i_7] [i_6] [(short)10] [i_8] [i_8] = ((/* implicit */int) (-((+(arr_4 [1LL] [i_7] [i_9 - 1])))));
                            arr_31 [i_5] [i_6] [i_7] [i_5] &= ((/* implicit */int) ((9024178741395626365LL) * (((-9024178741395626329LL) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [4LL] [i_5])))))));
                        }
                        var_29 = ((((/* implicit */_Bool) 5909860446264315508ULL)) ? (5909860446264315508ULL) : (((/* implicit */unsigned long long int) 890888121)));
                        var_30 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) 9223372036854775807LL)))), (((min((252548368), (((/* implicit */int) (signed char)38)))) == (((/* implicit */int) (unsigned short)0))))));
                        var_31 = (((-(arr_4 [i_5] [i_7] [17LL]))) * (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_9 [i_6] [i_6 - 1] [3LL] [19LL]))))));
                    }
                    for (int i_10 = 2; i_10 < 14; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) var_19))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned long long int) -5363783223552235842LL)) % (var_17))))))));
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / ((+(arr_2 [i_6 + 1])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            arr_38 [i_5] [i_5] [i_5] [i_11] [i_5] |= ((/* implicit */unsigned int) min(((signed char)-39), ((signed char)-78)));
                            var_34 = var_5;
                        }
                    }
                    for (signed char i_12 = 1; i_12 < 13; i_12 += 2) 
                    {
                        arr_42 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (short)352)) % (((/* implicit */int) (unsigned short)6744))));
                        var_35 = ((/* implicit */signed char) var_8);
                        arr_43 [i_7] [i_7] [i_6] [14U] [i_12] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_6 - 1]))) % (arr_41 [i_5] [i_6] [i_5] [i_5])))));
                        var_36 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned short)64140)) & (((/* implicit */int) arr_35 [i_6 - 1] [i_12 - 1] [(_Bool)1] [(_Bool)1] [i_6 - 1]))))));
                        var_37 = ((((/* implicit */_Bool) 9024178741395626342LL)) ? (2116299877648615828ULL) : (((/* implicit */unsigned long long int) 2505455476U)));
                    }
                }
            }
        } 
    } 
}
