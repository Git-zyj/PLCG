/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51433
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
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_3)), (max((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967289U))), (var_1)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_8))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) (+(-1452136547)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = ((-17LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))));
            var_13 = ((/* implicit */unsigned int) var_2);
            arr_5 [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) 2581635875U))));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */short) var_3);
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2581635863U)) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_0] [(_Bool)1]))))) * (((((/* implicit */_Bool) -601009449)) ? (var_0) : (arr_7 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19102)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-31))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)785)), (var_3)))) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [(signed char)0] [(_Bool)1])))))))));
        }
        for (long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
        {
            var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (arr_0 [(signed char)2] [(signed char)2])))) ? (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))) : (((/* implicit */int) (!(arr_2 [i_0] [7LL]))))))) : (((((/* implicit */_Bool) arr_7 [4])) ? (((/* implicit */unsigned long long int) arr_0 [4U] [4U])) : (var_0)))));
            var_17 = ((/* implicit */unsigned char) arr_9 [i_0] [i_3] [i_0]);
        }
    }
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20757)) ? (arr_12 [i_4]) : (arr_12 [i_4])))) ? (max((((/* implicit */unsigned long long int) arr_12 [i_4])), (var_4))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_4])), (arr_11 [i_4] [i_4])))));
        var_19 = arr_11 [i_4] [i_4];
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_4])) ? (arr_11 [i_4] [i_4]) : (arr_11 [i_4] [i_5])))) ? (((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_11 [i_5] [i_4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_15 [i_4])), (arr_14 [12LL] [i_4] [i_4])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))));
            arr_16 [i_4] [i_4] = ((/* implicit */unsigned short) (_Bool)0);
            var_21 += ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_15 [i_5])), (((((/* implicit */_Bool) max((arr_13 [i_4] [i_5]), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_12 [i_5])))))));
        }
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_14 [i_4] [(unsigned char)6] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) : (arr_11 [i_4] [i_4])))))) ? (601009452) : (((/* implicit */int) var_8)))))));
    }
    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        arr_20 [i_6] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_15 [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_6])) | (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_6)) ? (arr_11 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))) ? (arr_13 [i_6] [i_6]) : (min((((/* implicit */unsigned long long int) 2581635854U)), (arr_13 [i_6] [i_6])))));
        arr_21 [i_6] &= arr_12 [i_6];
    }
    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        var_23 = ((/* implicit */_Bool) 8821372227155827821ULL);
        /* LoopSeq 2 */
        for (long long int i_8 = 2; i_8 < 13; i_8 += 3) 
        {
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_7]))))), (arr_13 [i_8] [i_7]))))));
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_11 [(unsigned char)22] [(unsigned char)22]), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_7])) - (((/* implicit */int) var_2))))) : (arr_12 [(signed char)0])))) ? (min((((/* implicit */unsigned long long int) max((arr_19 [i_8 - 1]), (((/* implicit */unsigned char) var_2))))), (9625371846553723801ULL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_8]))))) ? (((/* implicit */unsigned long long int) 1713331436U)) : (((((/* implicit */_Bool) arr_25 [i_8 + 1])) ? (arr_24 [i_7] [i_7] [i_8]) : (((/* implicit */unsigned long long int) -8013723022188938015LL)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
            {
                arr_31 [i_7] [i_9] = ((/* implicit */long long int) arr_18 [i_8 + 1] [i_7]);
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */unsigned long long int) 0LL)) : (12888507798287684305ULL)));
                var_27 ^= (-(arr_24 [i_9] [i_9] [i_9]));
            }
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_10))));
                    var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) max((108231292U), (((/* implicit */unsigned int) arr_30 [i_7] [i_8] [i_10] [i_11])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5812))) : (arr_35 [i_11] [i_10] [i_8 - 1] [i_8] [i_7] [i_7])));
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) min(((~(((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-5003846269762488820LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))))))))));
                    arr_36 [i_7] [i_7] [(_Bool)1] [i_7] [i_7] [i_7] = ((/* implicit */long long int) var_2);
                }
                arr_37 [i_7] [i_8] [i_7] [i_7] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(4225218544U)))) ? (min((((/* implicit */unsigned long long int) var_2)), (var_4))) : (min((((/* implicit */unsigned long long int) 2581635854U)), (268419072ULL))))) >> (((var_5) + (1202137516)))));
            }
            for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((arr_38 [i_7] [i_7] [7LL] [i_12]), (arr_38 [(unsigned short)12] [i_8] [i_8 - 2] [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (arr_14 [i_8] [(unsigned short)10] [i_7]))))) : (((((/* implicit */unsigned long long int) arr_29 [i_7])) ^ (arr_39 [i_7] [i_8]))))), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_23 [i_7] [i_8])) : (((/* implicit */int) var_7))))))));
                /* LoopSeq 2 */
                for (unsigned int i_13 = 1; i_13 < 13; i_13 += 1) 
                {
                    arr_43 [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7]))) : (arr_24 [i_13] [i_12] [i_8])))) ? ((-(((/* implicit */int) arr_23 [i_8 - 1] [i_13 - 1])))) : (((/* implicit */int) var_10))));
                    /* LoopSeq 2 */
                    for (int i_14 = 1; i_14 < 11; i_14 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) arr_45 [i_7] [0LL] [i_12] [i_13] [i_14 - 1]))))) ? (((/* implicit */int) arr_25 [i_8])) : (var_5))) | (((/* implicit */int) ((unsigned char) arr_44 [i_7] [i_13] [i_13] [i_12] [i_13 + 1] [i_14 + 1] [i_14])))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -290778997)) ? (((/* implicit */int) (_Bool)1)) : (arr_45 [i_7] [i_8] [i_12] [i_13] [i_7])))) ? (arr_38 [i_7] [i_8 - 1] [i_14 + 1] [i_14 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_8] [i_8] [i_8] [i_8 + 1] [i_8 - 1] [i_8 - 2])))))) ? (arr_12 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106)))));
                    }
                    /* vectorizable */
                    for (short i_15 = 3; i_15 < 11; i_15 += 3) 
                    {
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) (short)-5812)) ? (arr_35 [i_15] [7] [i_12] [i_13 - 1] [(signed char)7] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_12])))))))))));
                        arr_49 [i_13] [i_13] [i_13] [i_13] [i_15] [i_13] [i_7] = ((/* implicit */unsigned int) arr_26 [i_7]);
                    }
                    arr_50 [i_7] [i_7] [i_13] [i_12] [i_13] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_7])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_7] [i_8 + 1])))))) ? (((((/* implicit */_Bool) arr_17 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5812))) : (arr_44 [i_13] [i_13] [i_8 - 2] [i_8] [i_8 - 2] [i_13] [i_7]))) : (((/* implicit */unsigned long long int) var_5))))));
                    arr_51 [i_13] [i_8 - 2] [i_13] = ((((/* implicit */_Bool) min((arr_24 [i_13 + 1] [i_8 - 2] [i_8 - 1]), (((/* implicit */unsigned long long int) 69748745U))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [6U] [i_13] [i_13 - 1] [i_13 - 1] [i_13]))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_8 - 1] [(short)22] [i_8 - 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : ((+(max((((/* implicit */long long int) (signed char)-21)), (arr_48 [i_7] [(_Bool)1] [(_Bool)1] [i_12] [4])))))));
                    arr_55 [i_8] [10U] [i_8] [i_16] [i_12] = ((/* implicit */unsigned long long int) arr_46 [8] [i_12] [i_8] [i_7] [8]);
                }
                arr_56 [(_Bool)1] = ((/* implicit */unsigned int) arr_47 [i_7] [i_7] [i_8] [(unsigned short)0]);
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 33554431)) ? (((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) (_Bool)1)), (arr_12 [16U])))))) : (var_4)));
                var_37 += ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_17] [i_17] [(_Bool)0] [i_7] [i_7]))))), (max((-738529486), (((/* implicit */int) arr_15 [i_7]))))));
            }
            arr_59 [(signed char)7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_54 [i_7] [i_7] [i_7] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [(short)4] [i_8] [i_7] [(short)4] [(short)8]))) : (var_1))))))));
            var_38 = var_5;
        }
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            var_39 *= ((/* implicit */_Bool) (short)5811);
            var_40 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 4186736004U)) + (((((/* implicit */_Bool) ((arr_30 [i_18] [i_7] [i_7] [i_7]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_7] [i_18 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)120))))) : (((((/* implicit */_Bool) arr_60 [i_7] [i_18] [i_18])) ? (arr_24 [i_18] [i_18 + 1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_18])))))))));
            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) min((((arr_26 [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19010))))), (((/* implicit */unsigned long long int) ((long long int) arr_26 [i_7]))))))));
        }
    }
}
