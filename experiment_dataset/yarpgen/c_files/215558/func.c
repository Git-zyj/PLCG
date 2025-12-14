/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215558
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) arr_1 [(_Bool)1]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) 616695039U);
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_9 [i_4] [i_0] [i_4] [(_Bool)1] [i_4]))));
                                var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_4] [i_2] [9LL] [i_2] [i_0]))));
                                var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 5226843416611333425LL))) ? (((/* implicit */int) arr_4 [i_2])) : (((int) arr_10 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4]))));
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-18560))) < (-6749316898046745645LL))))) % (((((/* implicit */_Bool) arr_3 [i_3])) ? (3851873542507245378ULL) : (arr_7 [i_1] [i_3] [i_4]))))))));
                            }
                        } 
                    } 
                    var_17 &= ((/* implicit */long long int) ((arr_8 [i_2 - 1] [(signed char)8] [i_2 - 1] [i_2]) - (((/* implicit */int) ((((/* implicit */long long int) var_7)) != (-7328181139691885066LL))))));
                    var_18 -= ((/* implicit */unsigned int) ((unsigned long long int) (+(arr_12 [i_0] [5ULL] [i_0] [(_Bool)1] [5ULL]))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_19 += ((/* implicit */signed char) (+(((/* implicit */int) max((((unsigned short) arr_12 [i_0] [8ULL] [i_0] [i_1] [i_5])), (((unsigned short) var_10)))))));
                    var_20 |= ((/* implicit */unsigned long long int) (((-(arr_11 [i_0] [9LL] [6] [1] [i_0]))) % (((/* implicit */long long int) ((min((arr_8 [i_1] [i_0] [i_1] [i_0]), (var_0))) * (((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [i_1] [i_1] [i_5]))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((((unsigned long long int) var_3)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                                var_22 += ((/* implicit */_Bool) (unsigned char)212);
                                var_23 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (((arr_4 [i_7 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_6]))) : (1328941852U)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_10 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0]))))));
                    var_25 = ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) max((arr_19 [i_5] [i_1]), (((/* implicit */int) arr_15 [i_5] [i_0]))))));
                }
                var_26 = ((/* implicit */long long int) var_0);
                /* LoopSeq 4 */
                for (long long int i_8 = 3; i_8 < 9; i_8 += 2) 
                {
                    var_27 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_8])) ? (((/* implicit */long long int) (-(((((/* implicit */int) var_6)) - (((/* implicit */int) var_2))))))) : ((~(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : (var_5)))))));
                    var_28 ^= ((/* implicit */short) (!(((/* implicit */_Bool) 5226843416611333441LL))));
                    var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
                }
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    var_30 = ((((((/* implicit */_Bool) min((arr_16 [i_0] [3LL] [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_9]))))) && ((!(((/* implicit */_Bool) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) : (var_7));
                    var_31 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)26269)) * (((/* implicit */int) (!(((/* implicit */_Bool) -69722636))))))) / ((-(((/* implicit */int) (_Bool)1))))));
                    var_32 = ((/* implicit */long long int) (!(((_Bool) arr_20 [i_0] [i_1] [i_9]))));
                }
                for (short i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) 927053056U))))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_10] [i_11])) : (((/* implicit */int) arr_4 [i_1]))))))) : (((/* implicit */long long int) ((unsigned int) 5110017505832775892ULL))))))));
                        var_34 = ((/* implicit */short) ((unsigned int) ((arr_21 [i_0] [5LL] [i_11]) & (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0]))))));
                        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 3367914213U))))))))));
                    }
                    for (int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_13 = 1; i_13 < 8; i_13 += 2) 
                        {
                            var_36 = ((/* implicit */long long int) 927053065U);
                            var_37 = ((/* implicit */long long int) -1044436640);
                            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) arr_27 [i_0] [i_0] [i_0]))));
                        }
                        for (unsigned int i_14 = 4; i_14 < 10; i_14 += 2) 
                        {
                            var_39 &= ((/* implicit */long long int) min((min((((/* implicit */int) var_6)), (((int) 1664920791U)))), (((/* implicit */int) (short)6471))));
                            var_40 = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) (_Bool)0))))))));
                        }
                        var_41 = ((/* implicit */unsigned long long int) ((short) min((13336726567876775724ULL), (((/* implicit */unsigned long long int) 1670956925)))));
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (((+(arr_1 [i_0]))) + (((/* implicit */unsigned long long int) ((long long int) ((arr_27 [i_1] [i_10] [i_12]) == (((/* implicit */int) arr_10 [i_0] [i_0] [i_10] [i_1] [i_10] [i_12])))))))))));
                    }
                    for (int i_15 = 3; i_15 < 11; i_15 += 2) 
                    {
                        var_43 &= ((/* implicit */unsigned short) var_10);
                        var_44 |= ((/* implicit */unsigned long long int) ((var_1) - (((/* implicit */long long int) ((((unsigned int) arr_13 [i_0])) * (((/* implicit */unsigned int) 654788218)))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        var_45 = min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) ((3075795578U) ^ (((/* implicit */unsigned int) arr_22 [i_1] [i_10] [i_16]))))) ? (((/* implicit */long long int) (+(-1207177002)))) : (max((var_10), (arr_21 [i_0] [i_0] [i_10]))))));
                        var_46 = ((/* implicit */_Bool) min((((((((/* implicit */unsigned long long int) -5226843416611333425LL)) * (arr_7 [(unsigned char)2] [i_10] [2U]))) ^ (((/* implicit */unsigned long long int) arr_19 [i_0] [i_16])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_10])))))));
                        var_47 += ((/* implicit */short) ((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) arr_6 [i_0] [(unsigned short)6] [i_1] [i_16]))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_32 [i_16] [i_16] [i_10] [i_10] [i_10] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (4294967295U)))), (var_8))))));
                    }
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        var_48 -= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned short)7627)), (arr_16 [i_17] [i_17] [i_17]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_13 [i_1])) - (var_8))))));
                        var_49 |= ((/* implicit */short) min((var_1), (((/* implicit */long long int) (+(((arr_26 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0])))))))));
                        var_50 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_0)) : (arr_40 [i_0] [i_1] [(_Bool)1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_0] [i_1] [(unsigned short)4]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))))))) : (var_5))) <= ((+((-(var_9)))))));
                    }
                    for (unsigned short i_18 = 2; i_18 < 9; i_18 += 4) 
                    {
                        var_51 *= (!(((/* implicit */_Bool) ((654788202) / (((/* implicit */int) (unsigned char)38))))));
                        var_52 = ((/* implicit */long long int) 4349471217512098956ULL);
                        var_53 ^= ((/* implicit */long long int) (unsigned short)41831);
                    }
                }
                /* vectorizable */
                for (unsigned char i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    var_54 += ((/* implicit */unsigned int) arr_45 [i_19] [i_1]);
                    var_55 = ((/* implicit */short) ((((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])) - (((/* implicit */int) arr_34 [i_0] [7U] [4] [i_1] [i_19] [i_19]))));
                    var_56 = ((/* implicit */unsigned int) ((var_0) | (arr_42 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        } 
    } 
    var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) var_10))));
    var_58 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (var_0)))) ? (max((3367914240U), (((/* implicit */unsigned int) (unsigned short)41835)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))));
}
