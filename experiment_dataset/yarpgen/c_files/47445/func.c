/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47445
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
    var_16 = ((/* implicit */int) ((short) ((long long int) 2943435411090443661LL)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned short)1792);
            var_17 -= ((/* implicit */signed char) min((var_8), (((/* implicit */int) ((short) 2943435411090443661LL)))));
            arr_7 [i_1] [i_0 - 2] = ((/* implicit */short) max((((arr_1 [i_0] [i_0 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) (-(arr_0 [i_1]))))));
            var_18 = ((/* implicit */int) var_6);
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 3) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_5)) || (((((/* implicit */_Bool) (unsigned short)63743)) && (((/* implicit */_Bool) -2943435411090443662LL))))))));
                            var_19 = ((/* implicit */long long int) min((max((max((arr_1 [i_0] [i_5]), (((/* implicit */unsigned long long int) (unsigned char)255)))), (((/* implicit */unsigned long long int) ((short) arr_14 [i_5] [i_5] [i_5] [i_2] [i_5]))))), (((/* implicit */unsigned long long int) max((arr_13 [i_2] [i_2 - 1] [i_3] [(signed char)8] [i_5]), (arr_13 [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 1]))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775804LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 12932088474530007160ULL)) || (((/* implicit */_Bool) var_15))))) : (arr_14 [i_5 - 3] [i_2] [i_0 + 1] [i_2] [i_0 + 1])))) ? ((+(((/* implicit */int) (short)-24078)))) : ((-(((/* implicit */int) arr_17 [i_2 - 1] [i_2 - 1] [i_0 - 2] [i_0 - 1] [i_0 + 1]))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_2]))) : (((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)992)), (var_7)))) | (var_12)))));
            var_22 = ((/* implicit */_Bool) arr_4 [i_2 - 1] [i_0]);
        }
        arr_19 [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) (~(((/* implicit */int) (short)24077))));
        var_23 = ((/* implicit */short) max(((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)54280))) / ((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_5)))) || (arr_3 [i_0] [i_0 + 1]))))));
    }
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2))), (((/* implicit */long long int) ((unsigned char) 15528431296158680660ULL))))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_20 [i_6])) || (((/* implicit */_Bool) 3893213670U))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_28 [i_6] = ((/* implicit */short) 12268647478974394820ULL);
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 3; i_9 < 19; i_9 += 1) 
                    {
                        arr_32 [i_6] [i_8] [i_7] [i_6] = ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_26 [i_6])), ((signed char)-108)))) ? (max((arr_30 [i_6] [i_7] [i_8] [i_9] [i_6]), (((/* implicit */int) (_Bool)1)))) : (1764204211)))) + (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_6]))))), (((long long int) -2108573735764988854LL)))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (short)-13669)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((arr_30 [i_6] [i_8] [i_7] [i_6] [i_6]), (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_27 [i_7] [i_6])), (arr_21 [i_6]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((var_4) < (9223372036854775787LL))))))));
                        var_25 &= ((/* implicit */unsigned int) ((short) (-(((/* implicit */int) (short)8184)))));
                        arr_33 [16U] [16U] [i_8] [i_9] |= ((((/* implicit */long long int) min((min((((/* implicit */int) (short)(-32767 - 1))), (var_7))), (((/* implicit */int) (unsigned short)61235))))) / (min((((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (7592122854126655824LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [i_6] [i_6]))))), ((-(9223372036854775807LL))))));
                        var_26 = ((/* implicit */short) (unsigned short)1771);
                    }
                    for (long long int i_10 = 2; i_10 < 17; i_10 += 2) 
                    {
                        arr_37 [i_6] [i_7] [i_8] [i_8] [i_6] [i_10] = ((/* implicit */unsigned int) 277010921);
                        var_27 = ((int) arr_29 [i_10 - 1] [i_10] [i_10 + 2]);
                    }
                }
            } 
        } 
        var_28 = ((/* implicit */long long int) ((short) arr_20 [i_6]));
    }
    for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (int i_13 = 1; i_13 < 24; i_13 += 3) 
            {
                {
                    arr_46 [i_13] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 1099511627520LL))))), (max(((unsigned char)96), (((/* implicit */unsigned char) (_Bool)1))))))), ((-(min((var_5), (arr_43 [i_12])))))));
                    arr_47 [i_13] [i_12] [i_13 - 1] = ((/* implicit */signed char) var_12);
                    arr_48 [i_11] [i_11] |= ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(268435200U)))) ? (((/* implicit */unsigned long long int) arr_39 [i_12])) : (((((/* implicit */_Bool) arr_42 [i_12])) ? (576460752303423488ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_11] [i_11] [i_11]))))))), (((/* implicit */unsigned long long int) var_14))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 1; i_14 < 24; i_14 += 4) 
                    {
                        for (unsigned short i_15 = 4; i_15 < 22; i_15 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */int) var_14);
                                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) max((401753610U), (((/* implicit */unsigned int) var_1)))))));
                            }
                        } 
                    } 
                    arr_53 [i_13] = ((/* implicit */_Bool) ((short) ((long long int) ((562881233944576LL) << (((((((/* implicit */int) (short)-769)) + (785))) - (15)))))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) arr_51 [i_11] [i_11]))));
        var_32 = ((/* implicit */short) arr_43 [i_11]);
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 25; i_16 += 2) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    arr_60 [i_11] [19ULL] [19ULL] = ((/* implicit */int) (signed char)-77);
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
                    {
                        var_33 = ((/* implicit */long long int) arr_62 [i_11] [i_16] [i_17] [i_18]);
                        var_34 = ((/* implicit */long long int) ((short) ((2340070611717262530LL) + (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_17] [i_18]))))));
                        var_35 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_45 [i_16] [i_11] [i_18]), (arr_45 [i_11] [i_16] [i_11])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) arr_50 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) max((arr_43 [i_17]), (((/* implicit */long long int) (unsigned short)1792)))))))) : (((/* implicit */int) arr_51 [i_16] [i_18]))));
                    }
                    for (short i_19 = 0; i_19 < 25; i_19 += 3) 
                    {
                        arr_65 [i_11] [i_11] [(short)3] [i_11] [i_11] [(short)3] = max((((((/* implicit */_Bool) arr_51 [i_16] [i_19])) ? (arr_64 [i_11] [i_11] [i_17] [i_11] [(unsigned short)14] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_19] [0LL]))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_45 [i_11] [i_16] [i_19]))))));
                        arr_66 [(_Bool)1] [i_16] [i_16] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)90))) : (arr_64 [i_11] [i_16] [i_16] [i_16] [i_17] [13LL])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_19]))) : (arr_43 [i_11]));
                        var_36 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_17] [i_19])) | (var_7)))), (min((var_2), (((/* implicit */long long int) arr_45 [i_11] [i_16] [i_19]))))));
                    }
                    arr_67 [i_11] = var_0;
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_11] [i_11]))) * (10803697440580049019ULL))))));
                }
            } 
        } 
    }
    for (long long int i_20 = 1; i_20 < 11; i_20 += 3) 
    {
        arr_71 [i_20] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((min((((/* implicit */int) (unsigned char)191)), (1978914327))), (((int) arr_49 [i_20] [i_20] [i_20]))))), (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)4)) * (((/* implicit */int) (short)1469))))), (min((var_13), (((/* implicit */long long int) (signed char)-42))))))));
        arr_72 [i_20] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)0)), (arr_13 [i_20] [i_20 + 3] [i_20] [i_20 + 3] [i_20]))))) / ((-(72057594037927935LL)))));
        var_38 = ((((/* implicit */int) min((((/* implicit */short) arr_15 [i_20 + 3] [i_20])), (arr_42 [i_20 + 1])))) | (((/* implicit */int) ((unsigned short) arr_1 [i_20 + 3] [i_20]))));
        var_39 = ((/* implicit */short) arr_30 [i_20] [i_20] [i_20] [i_20] [i_20]);
    }
}
