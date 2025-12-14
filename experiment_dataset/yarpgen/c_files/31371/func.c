/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31371
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 2; i_3 < 7; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (~(((unsigned int) 2147352576))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3 - 2] [i_3] [i_1])) * ((-(((/* implicit */int) arr_9 [i_3] [i_2])))))))));
                        arr_12 [i_0] [i_0] [i_3] = ((/* implicit */short) arr_3 [i_0]);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (-(((2147352576) / (2147352576)))));
                            var_21 = ((/* implicit */unsigned short) ((signed char) ((unsigned char) arr_14 [i_2] [i_3])));
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) ^ (arr_3 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-3)))))) : (((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) -187465897)))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_5] = (~(((/* implicit */int) arr_15 [i_0] [i_3] [i_3 - 1] [i_3] [i_3])));
                            arr_20 [i_0] [i_1] [i_2] [i_3 - 1] [i_3] = ((/* implicit */_Bool) ((unsigned int) arr_15 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_5]));
                        }
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((long long int) arr_3 [i_0])))));
                            var_24 = ((((unsigned long long int) 2147352576)) ^ (arr_5 [i_0] [i_1] [i_3 - 1]));
                        }
                        var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_16 [i_2])) != (((unsigned long long int) arr_14 [i_3] [i_3]))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)14769)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14769))) : (511ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14768)))));
                        var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7])) ? (532676608U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_7])))))) && ((!(((/* implicit */_Bool) (short)-14768))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 2; i_8 < 10; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned char) arr_7 [i_0] [i_0] [i_2] [i_8 + 1]));
                            arr_30 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (5627842022985670575ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8 - 2])))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (507904U)));
                        }
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_9]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (signed char)-62))))));
                            arr_35 [(unsigned char)5] [i_1] [i_2] [i_7] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14338762108944918733ULL)) && (((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_0] [5U] [i_2] [i_7] [i_9])))));
                        }
                    }
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
                    {
                        var_31 -= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (signed char)-3)))));
                        var_32 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)120))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */int) (~(arr_43 [i_0] [2U] [i_2] [i_11])));
                        var_34 ^= ((/* implicit */long long int) (unsigned char)159);
                        arr_44 [i_11] [i_2] [i_1] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_40 [(signed char)7] [i_1] [(unsigned short)10] [i_11] [i_0])) < (arr_43 [i_0] [i_1] [1U] [i_11])));
                        var_35 = arr_8 [i_11] [i_11] [i_2] [i_1] [i_1] [(unsigned char)7];
                    }
                    arr_45 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_27 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                        {
                            arr_51 [i_0] [i_13] = ((/* implicit */int) ((unsigned long long int) (unsigned short)43053));
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) 4121149097U)) : (arr_17 [i_1] [i_2] [i_2])));
                            arr_52 [i_0] [i_1] [i_1] [i_12] [i_13] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_13] [i_0] [i_2] [i_1] [i_0]))) / (-9211519484757345485LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36032)))));
                        }
                        for (short i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
                        {
                            arr_57 [i_0] [i_1] [i_2] [i_2] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_1] [i_2] [i_12])) && (((/* implicit */_Bool) arr_29 [i_1] [i_12] [i_14]))));
                            var_37 = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) (unsigned short)43053)) : (((/* implicit */int) arr_56 [i_12]))))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned char) ((arr_53 [i_0] [i_1] [i_2] [i_12] [i_15]) / (((/* implicit */int) arr_14 [i_0] [i_15]))));
                            arr_60 [i_15] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)30))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned short)29503)) ? (((/* implicit */int) arr_47 [i_2] [i_12] [i_2] [0LL] [i_0])) : (((/* implicit */int) (short)18466))))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_50 [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)22483)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_12] [i_15] [0ULL])))) : (((((/* implicit */int) (unsigned short)7263)) >> (((arr_0 [i_15]) - (3329029397U)))))));
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [1ULL] [i_1] [1ULL]))))) ? (3248194621048571481ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248)))));
                        }
                        var_41 = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) arr_24 [i_0] [i_1] [i_2])))));
                        arr_61 [i_2] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_12])) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_0]))));
                        arr_62 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_12])) ? (((/* implicit */int) arr_29 [i_0] [i_1] [i_1])) : (((/* implicit */int) (short)18447))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (+(((unsigned int) 2305843009079476224LL)))))));
                        var_43 = ((/* implicit */unsigned long long int) arr_64 [i_1] [i_16] [i_16]);
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            arr_69 [i_0] [i_0] [i_16] [i_0] = ((/* implicit */unsigned int) arr_40 [i_0] [i_17] [i_2] [i_16] [i_17]);
                            arr_70 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_0] [i_17])) ? (((/* implicit */int) arr_50 [i_0] [i_1])) : (((/* implicit */int) arr_50 [i_2] [i_0]))));
                            arr_71 [i_0] [i_2] [i_2] [i_17] [i_17] [i_17] &= ((arr_66 [i_0] [i_1] [i_2] [i_16] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))));
                            var_44 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_2] [i_1] [i_2])) ? (((/* implicit */int) arr_58 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_58 [i_0] [i_0] [i_0]))));
                            var_45 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)197)))) ? (2900940119U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174)))));
                        }
                    }
                    var_46 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2])) : (-469571930)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_18 = 0; i_18 < 11; i_18 += 3) 
        {
            arr_75 [i_18] = ((/* implicit */unsigned int) (unsigned short)65535);
            var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) ((short) ((((/* implicit */_Bool) 2900940119U)) ? (((/* implicit */int) (unsigned short)65535)) : (-1053444775)))))));
        }
    }
    for (short i_19 = 0; i_19 < 18; i_19 += 3) 
    {
        var_48 ^= ((/* implicit */unsigned short) (unsigned char)26);
        /* LoopSeq 1 */
        for (short i_20 = 3; i_20 < 17; i_20 += 2) 
        {
            arr_81 [i_20] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_80 [i_20 - 2])))) ? (max((-198867443), (1053444775))) : (((/* implicit */int) min((arr_80 [i_20 - 1]), (arr_80 [i_20 - 3]))))));
            arr_82 [i_19] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(7331310302665795324ULL)))))) ^ (min((((/* implicit */unsigned long long int) (unsigned short)65504)), (((unsigned long long int) (unsigned short)29483))))));
        }
        var_49 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (arr_78 [i_19])))) ? (((((/* implicit */_Bool) arr_77 [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18455))) : (arr_79 [i_19] [i_19] [i_19]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_80 [i_19]))))));
        var_50 = ((/* implicit */short) 2900940119U);
        arr_83 [i_19] [i_19] = max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)1)), (1769284977U)))), (arr_77 [i_19]))), ((~(((((/* implicit */_Bool) arr_77 [i_19])) ? (arr_77 [i_19]) : (((/* implicit */unsigned long long int) 127LL)))))));
    }
    var_51 += ((/* implicit */short) (((~(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_9)))))) - (((/* implicit */int) ((short) (short)5157)))));
}
