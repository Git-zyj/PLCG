/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200176
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) arr_2 [i_1]);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) /* same iter space */
                    {
                        var_12 *= ((/* implicit */short) arr_8 [i_0] [i_3 - 2] [i_1 + 1]);
                        arr_15 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : (arr_3 [i_1 - 1])));
                    }
                    for (unsigned short i_4 = 3; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned short) var_8);
                        var_14 = (((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3693179004800409077ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_22 [i_5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_4 - 2] [i_5] [i_4 - 2] [i_4 - 1] [i_4 + 1])) < (((/* implicit */int) (short)12626))));
                            var_15 &= ((/* implicit */signed char) ((var_6) ? (((/* implicit */int) (unsigned char)127)) : (arr_4 [i_4 - 1] [i_4 - 3] [i_4 - 3])));
                        }
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) -629387697)) : (arr_8 [i_0] [i_1] [i_6])));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_2] [i_2] [i_4] [i_6])) ? (arr_6 [i_1 + 1] [i_1 + 2] [i_4 - 3]) : (((/* implicit */unsigned long long int) (-(3932160))))));
                        }
                    }
                    for (unsigned short i_7 = 3; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_18 [i_7 - 1] [i_1 + 1])) : (((/* implicit */int) arr_18 [i_7 - 1] [i_1 + 1]))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 4; i_8 < 9; i_8 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned short) arr_23 [i_2] [i_2] [i_2] [i_7 - 3] [i_8 - 4] [i_7 - 3] [i_0]);
                            var_20 = ((/* implicit */signed char) (short)6);
                        }
                    }
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (942019526841342417ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1082426828)) ? (arr_5 [i_0] [i_1] [i_1]) : (((/* implicit */int) (unsigned char)131)))))));
                    var_22 = 1399805307328673914ULL;
                    var_23 += ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]))))));
                }
                for (signed char i_9 = 1; i_9 < 10; i_9 += 2) 
                {
                    var_24 = ((/* implicit */int) 942019526841342432ULL);
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (long long int i_11 = 3; i_11 < 10; i_11 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max((max((((/* implicit */int) (unsigned char)245)), (((((/* implicit */int) (signed char)37)) >> (((var_0) - (1263652927U))))))), (((/* implicit */int) (_Bool)1)))))));
                                arr_38 [i_0] [i_9 + 1] [i_10] [i_9 + 1] = ((/* implicit */unsigned char) -1657101287519397568LL);
                                arr_39 [i_0] [i_1 - 1] [i_9] [i_10] [i_10] = ((/* implicit */unsigned int) ((max((max((arr_3 [i_11]), (4650636519990963211ULL))), (((/* implicit */unsigned long long int) arr_5 [i_11] [i_10] [i_0])))) / (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_9] [i_10]))));
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14984922855406310331ULL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))))) ? ((-(((/* implicit */int) (signed char)21)))) : (((/* implicit */int) (unsigned short)63891))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)65522), (((/* implicit */unsigned short) arr_24 [i_9 + 1]))))) + (((/* implicit */int) arr_2 [i_1 - 1]))));
                                var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_14 [(signed char)8] [(signed char)8] [(signed char)8])) > (max((arr_34 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 1610612736U))))));
                            }
                        } 
                    } 
                }
                arr_45 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_3 [i_0]) >> (((arr_8 [i_0] [i_1 + 1] [i_1]) - (5884127405268123929ULL))))), (var_4)))) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_1 - 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_16 [i_1] [i_1]))));
                            arr_53 [i_1] &= min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63891))) : (arr_34 [i_1 + 1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) var_7)));
                            var_30 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_51 [i_0] [i_1 + 1] [i_15] [i_14])), (arr_34 [i_0] [i_1 + 2] [i_1 + 2] [i_1 - 1])));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)37)))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)3)))))))) : ((((_Bool)1) ? (arr_29 [i_0] [i_1] [i_1 + 2] [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_26 [i_1 - 1] [i_1] [i_1 - 1] [i_0] [i_0])) ? (arr_30 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_32 = ((/* implicit */int) var_1);
}
