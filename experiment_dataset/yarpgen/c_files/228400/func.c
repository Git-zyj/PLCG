/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228400
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) min(((signed char)-74), ((signed char)-1))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) ((((/* implicit */int) (short)127)) | (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_12) : (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) (short)127)))))) + (2147483647))) << (((max((arr_0 [i_0]), (((/* implicit */unsigned int) (short)120)))) - (375429350U))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */int) (signed char)50);
            var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_4)))))) : ((((-(arr_2 [i_0]))) / (arr_2 [i_0])))));
            arr_5 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-20)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)-128)) && (((/* implicit */_Bool) var_8)))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] = ((int) ((unsigned short) arr_3 [i_0] [i_2]));
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_13);
        }
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) (+(-518993844005260979LL)));
                        var_19 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (_Bool)1)))))));
                        arr_18 [i_0] [i_3] [i_4] [i_0] = (-(((/* implicit */int) var_11)));
                    }
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        arr_23 [i_0] [i_0] [5U] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)50)) >> ((((-(var_9))) - (2834821805974611669LL)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((var_9) ^ (518993844005260961LL))), (((/* implicit */long long int) max(((~(((/* implicit */int) (signed char)39)))), (((/* implicit */int) (_Bool)1))))))))));
                            var_21 = ((/* implicit */short) (+(max((((/* implicit */long long int) (unsigned short)2)), (max((((/* implicit */long long int) var_1)), (arr_2 [i_4])))))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */short) (~((-(((/* implicit */int) var_0))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_4] [i_3] [i_4] [i_6])) >> (((518993844005260973LL) - (518993844005260955LL)))));
                            var_24 &= ((/* implicit */unsigned short) var_10);
                        }
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            var_25 -= ((/* implicit */short) var_0);
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_15 [i_6] [i_4] [i_6]))), (((arr_15 [i_6] [i_3] [i_4]) | (arr_15 [i_6] [i_6] [i_9]))))))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) min((((((/* implicit */int) var_11)) * (((/* implicit */int) arr_24 [i_0] [i_3] [i_4] [i_6] [i_9])))), (((/* implicit */int) var_7)))))));
                        }
                        var_28 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_6] [i_3] [i_3] [i_6] [i_4])) | (((/* implicit */int) var_1))))), (max((var_9), (((/* implicit */long long int) arr_31 [i_0] [i_3] [(short)7] [i_6] [(signed char)0]))))));
                    }
                    var_29 *= ((/* implicit */unsigned char) arr_25 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3]);
                    /* LoopNest 2 */
                    for (signed char i_10 = 3; i_10 < 9; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_30 *= ((/* implicit */_Bool) min((((/* implicit */int) var_4)), ((-(((/* implicit */int) var_11))))));
                                arr_38 [i_11] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)195);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) var_5)))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
    {
        var_32 *= ((/* implicit */unsigned int) -3841908860205691829LL);
        /* LoopNest 3 */
        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 23; i_15 += 3) 
                {
                    {
                        var_33 -= ((/* implicit */_Bool) var_2);
                        var_34 = ((/* implicit */signed char) ((arr_42 [i_12]) * (max((((/* implicit */unsigned long long int) arr_47 [i_15] [i_12] [i_12] [i_12])), (((unsigned long long int) var_5))))));
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_41 [2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [20ULL]))))) : (((/* implicit */int) var_14)))))));
                    }
                } 
            } 
        } 
        arr_51 [i_12] [i_12] = ((/* implicit */signed char) var_0);
    }
    for (signed char i_16 = 3; i_16 < 17; i_16 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_17 = 0; i_17 < 18; i_17 += 4) 
        {
            for (unsigned short i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                {
                    arr_61 [i_16 - 1] [i_16] = ((/* implicit */_Bool) min((((unsigned long long int) ((((/* implicit */_Bool) (signed char)-68)) && (((/* implicit */_Bool) (unsigned char)4))))), (((/* implicit */unsigned long long int) max((arr_49 [i_17] [i_16] [i_16] [(unsigned char)15]), (arr_57 [i_16 - 1] [i_16 - 3]))))));
                    var_36 = ((/* implicit */unsigned int) ((arr_40 [i_16] [i_16]) / (((/* implicit */long long int) ((3) ^ (((/* implicit */int) var_5)))))));
                    var_37 = ((/* implicit */short) min((arr_40 [i_16 - 3] [i_16]), (((/* implicit */long long int) var_2))));
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 518993844005260983LL)) ? (((((/* implicit */_Bool) max((var_1), ((signed char)-12)))) ? (((((/* implicit */int) (short)127)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_47 [i_16 - 1] [i_16 - 1] [i_16] [i_18])), (var_14))))));
                }
            } 
        } 
        var_39 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)36379)) << (((/* implicit */int) (_Bool)1))))) ? ((~(112225329U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_47 [i_16] [i_16] [i_16] [i_16])), (var_7)))) : (((/* implicit */int) var_2)))))));
    }
}
