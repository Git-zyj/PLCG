/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44412
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47607))) + (1056859564U))), (((/* implicit */unsigned int) var_8))))) ? (var_10) : (((/* implicit */long long int) max((3238107731U), ((((_Bool)1) ? (1056859548U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9770))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)53))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)6])) ? (((long long int) (unsigned short)65535)) : (-357853794426236925LL)));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_1 [i_0 - 1] [i_0 + 2]) : (arr_1 [i_0 - 1] [i_0 + 1])));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) <= (-8594686073872456220LL)));
                    var_19 = ((/* implicit */_Bool) arr_11 [i_3]);
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        for (int i_5 = 1; i_5 < 15; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3] [i_4]);
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((-8594686073872456220LL) < (-1327397904542288092LL))))));
                                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) 1948932690U))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_14 [i_1 - 1] [10ULL] [0LL] [i_4 + 3])) : (((/* implicit */int) arr_3 [i_4 + 2] [i_1 - 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) ((var_4) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1056859564U)) || (((/* implicit */_Bool) var_10))))))));
                        var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) -1073741824)) ^ (1056859564U)));
                    }
                    for (short i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 2])) | (((/* implicit */int) arr_7 [i_7] [i_2]))));
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_7] [i_8]))));
                            var_28 = ((/* implicit */signed char) ((arr_21 [i_1 - 2] [i_1 - 1]) + ((((_Bool)0) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-14)))))));
                            var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 4899543085117050735LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [(short)5])))) % (((/* implicit */int) arr_11 [i_1 - 2]))));
                        }
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [(_Bool)1] [i_1 - 1] [i_3])) ? (((/* implicit */int) (short)28419)) : (arr_1 [i_3] [i_7])));
                    }
                    for (short i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                    {
                        var_31 *= ((/* implicit */signed char) (-((~(((/* implicit */int) var_8))))));
                        var_32 &= ((/* implicit */long long int) (-(((/* implicit */int) arr_22 [14LL] [i_1 - 2] [i_1] [(short)6]))));
                    }
                }
                for (short i_10 = 1; i_10 < 15; i_10 += 3) 
                {
                    var_33 += ((/* implicit */signed char) max((((/* implicit */int) arr_3 [i_1 - 1] [(short)9])), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)65430))))) ? (((/* implicit */int) arr_10 [(short)11] [(unsigned char)3] [i_1 + 1])) : ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_14 [i_1] [i_1] [1U] [i_10]))))))));
                    var_34 ^= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_21 [i_1] [i_1 - 1])) ? (arr_21 [(unsigned short)5] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-36))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */signed char) var_3);
                                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((max((((int) var_3)), (((/* implicit */int) ((_Bool) 8594686073872456220LL))))) != (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */long long int) ((((arr_2 [i_1 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1]))) : (var_6))) - (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) arr_12 [3ULL] [i_2] [i_2] [i_1] [i_1] [(unsigned char)3])))))));
                    var_38 = (+(max((((((/* implicit */_Bool) (signed char)40)) ? (8594686073872456220LL) : (((/* implicit */long long int) 1897839998)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_5)) : (var_6)))))));
                }
                /* LoopSeq 2 */
                for (signed char i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (var_13)))), (((((/* implicit */_Bool) 606450046709270389ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))) : (var_6))))))));
                    var_40 = ((/* implicit */unsigned int) arr_10 [(short)1] [(_Bool)1] [i_1]);
                    var_41 = ((/* implicit */short) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) 1073741847)) ? (((/* implicit */unsigned int) -66072456)) : (var_6)))))) <= (min((var_3), (((/* implicit */long long int) var_1))))));
                    var_42 = ((/* implicit */long long int) (_Bool)1);
                }
                for (long long int i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        for (long long int i_16 = 0; i_16 < 16; i_16 += 3) 
                        {
                            {
                                var_43 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_15 [i_1 - 2] [i_2])) >> (((var_3) - (5559802009684330464LL)))))));
                                var_44 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) 6534590100196860962LL)) ? (((/* implicit */unsigned long long int) 0LL)) : (377992579061325030ULL))), (((((/* implicit */_Bool) 1056859558U)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_2])))))))));
                                var_45 = (((~(arr_21 [i_1 - 1] [i_1]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_1] [i_1] [12LL] [i_1 - 1])) ? (arr_39 [i_1] [(unsigned short)6] [(signed char)8] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [7ULL] [i_1] [i_1 - 1])))))));
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 18068751494648226583ULL)))) ? ((-(var_11))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
                    var_47 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_45 [(_Bool)1] [i_1] [i_1] [i_1]))))), (16380U)));
                }
                var_48 = ((/* implicit */unsigned int) (((_Bool)0) ? (max((((/* implicit */long long int) ((arr_5 [i_1]) > (-2451339925406074629LL)))), (arr_17 [i_1 - 2] [6]))) : (((/* implicit */long long int) (~(1016463241))))));
            }
        } 
    } 
}
