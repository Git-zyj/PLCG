/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243787
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_19 ^= min((((((int) (unsigned short)0)) << (((/* implicit */int) (unsigned short)9)))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)52)))))))));
            var_20 &= ((/* implicit */long long int) -475251742);
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
            {
                arr_10 [i_2] = ((/* implicit */long long int) arr_4 [i_0 + 1] [i_1]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
                {
                    arr_13 [i_2] [i_2] [i_2] [15U] = ((/* implicit */signed char) arr_1 [i_2]);
                    var_21 ^= ((/* implicit */signed char) ((int) arr_3 [i_0 - 2]));
                    arr_14 [i_2] [8ULL] = arr_2 [i_0 + 1];
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)19785)) & (((/* implicit */int) (unsigned char)216))));
                }
                for (int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 2])) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 + 1] [i_0 - 1])))))));
                    arr_18 [i_0] [i_0] [i_2] = ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) arr_4 [i_0 - 2] [(_Bool)0])), (arr_9 [i_0 - 1] [18] [i_0 - 1]))));
                    arr_19 [i_0] [4] [15LL] [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (268435455)));
                }
                for (int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) (signed char)2);
                        var_25 *= ((/* implicit */unsigned char) (signed char)2);
                    }
                    arr_24 [i_0] [i_0 + 1] [i_1] [i_2] [i_0] = arr_17 [i_5] [i_2] [i_2] [i_1] [i_2] [i_0];
                    var_26 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)72))) == (5961556444022433230LL))))) : (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-1976896881648555260LL))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_0 - 2] [i_1] [i_2] [i_5] [15LL] [i_5] [i_2] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_4)) != (arr_5 [i_0 - 1] [i_0 - 1]))));
                        var_27 -= ((/* implicit */unsigned char) (-(arr_4 [i_0 - 2] [i_0 + 1])));
                        var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)5776)), (3U)));
                        arr_28 [i_2] [i_2] = ((/* implicit */int) var_17);
                    }
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        var_29 += ((/* implicit */long long int) (unsigned short)32766);
                        var_30 -= ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        var_31 *= ((/* implicit */unsigned long long int) ((20U) >= (var_7)));
                        var_32 = ((/* implicit */unsigned short) min((arr_32 [i_9] [i_2] [i_1]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)35220)) | (((/* implicit */int) var_2)))))));
                    }
                    /* LoopSeq 3 */
                    for (int i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
                    {
                        var_33 = arr_37 [i_0] [i_0 + 1] [i_2];
                        arr_38 [i_10] [i_5] [i_2] [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) || (((/* implicit */_Bool) ((arr_9 [i_0] [i_0 + 1] [i_2]) * (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0 + 1] [i_5])))))));
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1])) ? (((((/* implicit */unsigned long long int) 5801714508421959878LL)) % (11965035093554650903ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_37 [i_2] [i_0 - 2] [i_2])) <= (((/* implicit */int) (unsigned short)0))))))));
                        var_35 *= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_1] [i_2] [i_1]))))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 + 1] [i_5]))) > (575549081U))))));
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_7))) * (((/* implicit */int) arr_16 [i_0 - 2] [i_2]))))) ? (((/* implicit */unsigned long long int) arr_30 [i_0] [i_2] [i_2] [(unsigned char)9] [i_0])) : (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16348))) > (-3630885735082767631LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 - 1] [i_2]))) : (((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (529138912550711208ULL)))))));
                    }
                    for (int i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */int) (signed char)98)) <= (((/* implicit */int) var_4))))) * (((/* implicit */int) (unsigned short)29833)))) > (((/* implicit */int) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_11] [i_2] [i_5] [i_2] [i_0 - 2]))))))));
                        var_38 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)94)) && ((_Bool)1))), ((!(((/* implicit */_Bool) ((signed char) var_18)))))));
                    }
                    for (int i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                    {
                        arr_43 [i_2] = ((/* implicit */short) ((unsigned char) 0U));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_2]) << ((((-(-1967228660789577475LL))) - (1967228660789577474LL)))))) ? (((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)126)))))) : (421452525786331626LL))) : (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)51585)) & (((/* implicit */int) (unsigned short)53057))))), (((134217727LL) | (-6249117117552722635LL)))))));
                        arr_44 [i_2] [i_1] [i_2] [i_5] [i_1] [i_12] = ((/* implicit */unsigned char) (!(max(((_Bool)1), ((!(((/* implicit */_Bool) (unsigned char)2))))))));
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) min((arr_41 [i_12] [i_5] [i_2] [i_1] [(unsigned short)4]), (((/* implicit */short) arr_20 [i_5])))))) ? (((((/* implicit */int) (unsigned char)250)) - (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))) : (((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */int) (unsigned short)10248)) : (((/* implicit */int) arr_41 [11LL] [i_5] [i_2] [i_1] [i_0]))))));
                    }
                }
                var_41 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */long long int) 1893885169)) : (-6905293582640915726LL))) << (((((/* implicit */int) (unsigned short)35147)) - (35140)))));
            }
            for (int i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
            {
                var_42 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_13] [i_1] [i_0 - 2])) ? (((/* implicit */long long int) arr_5 [i_0] [i_1])) : (arr_8 [i_0] [i_0] [i_1] [i_13])))) ? (((/* implicit */long long int) arr_15 [i_0 - 1] [i_1] [i_1] [i_13])) : (arr_1 [i_0]))) != (((((/* implicit */_Bool) arr_17 [4] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 - 2])) ? (arr_17 [(unsigned short)8] [i_0 + 1] [i_0] [(_Bool)1] [i_0] [8U]) : (arr_17 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 - 2])))));
                var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) (!((_Bool)1))))));
                var_44 = arr_30 [i_0] [i_0] [i_13] [i_0] [8LL];
            }
            for (long long int i_14 = 2; i_14 < 17; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        {
                            arr_56 [i_0] [i_0 - 1] [i_0 - 1] [10LL] [i_14 + 1] [5U] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_48 [i_0] [(unsigned char)9] [i_14] [i_16])) && (((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0 + 1])))))) : (max((((/* implicit */long long int) arr_20 [i_0 - 2])), ((-9223372036854775807LL - 1LL))))));
                            var_45 ^= ((/* implicit */signed char) (-(arr_3 [i_15])));
                            arr_57 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-34)), ((unsigned short)46217)));
                        }
                    } 
                } 
                var_46 -= ((/* implicit */signed char) ((max((arr_5 [i_0] [i_0]), (0))) % (((/* implicit */int) (unsigned short)65504))));
            }
        }
        /* LoopSeq 1 */
        for (long long int i_17 = 4; i_17 < 18; i_17 += 1) 
        {
            arr_61 [i_17] = (~(max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)181)) << (((arr_48 [i_17] [2LL] [i_17] [i_0 - 1]) - (294729566766165456LL)))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)127))) | (var_12))))));
            arr_62 [i_0] [i_17] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_53 [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) arr_5 [4ULL] [i_17 + 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_53 [i_0])) > (((((/* implicit */_Bool) 2147483621)) ? (((/* implicit */int) (unsigned char)251)) : (-1))))))));
        }
    }
    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) var_12))));
}
