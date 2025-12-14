/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195455
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            var_13 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0])))) < (arr_5 [i_0]));
            var_14 = ((/* implicit */unsigned short) min((min((min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned int) (unsigned short)61929)))), (((/* implicit */unsigned int) 4190208)))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))));
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) var_9))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_7 [i_3] [i_0] [i_0])), (var_3)));
                            var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) (signed char)-45))))) ? ((-(var_7))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-66))))), (((/* implicit */long long int) (+(((arr_12 [i_0] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))) : (arr_4 [10ULL] [i_4]))))))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-37)) | (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_6 = 2; i_6 < 23; i_6 += 1) 
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-45)) - (((/* implicit */int) (signed char)44))));
                var_20 += max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_6 - 1] [i_6] [i_5] [i_6 - 1]))) - (var_1)))) ? ((-(((/* implicit */int) (signed char)17)))) : (((/* implicit */int) arr_9 [i_6 + 2] [i_0] [i_0] [i_5])))), ((-(((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_6 + 2] [(signed char)4])))));
                var_21 = ((/* implicit */_Bool) max((min((arr_4 [i_6 + 1] [i_6 - 1]), (((/* implicit */unsigned int) arr_10 [i_0] [i_6 + 2] [i_6] [i_6] [i_6])))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0] [i_6 - 1] [i_0] [i_0])))))));
            }
            for (unsigned char i_7 = 2; i_7 < 22; i_7 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_2))) << (((((unsigned int) (signed char)-37)) - (4294967254U)))));
                        var_23 = ((/* implicit */long long int) ((-471664365) % (((/* implicit */int) (unsigned short)8192))));
                        var_24 *= ((/* implicit */unsigned long long int) 4294967295U);
                        var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
                        arr_27 [i_0] [i_5] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_7 + 1] [i_8] [i_9])) ? (((/* implicit */int) arr_21 [i_9] [(unsigned short)6] [i_7 + 3] [18] [(unsigned short)6])) : (((/* implicit */int) arr_21 [i_9] [23ULL] [i_7] [20] [23ULL]))));
                    }
                    var_26 -= (+(((/* implicit */int) (signed char)44)));
                    arr_28 [i_8] [i_8] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((-3799818420274232444LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)10)))));
                    arr_29 [i_0] [i_0] [i_0] [i_7] [i_7] [i_8] |= (-(arr_17 [i_7 - 1]));
                    var_27 |= ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)44)) ? (613155155) : (arr_25 [i_0] [i_0] [i_5] [i_5] [12LL] [i_0] [17])))));
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 24; i_10 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_10 - 1] [i_10 - 2] [11])))))));
                    var_29 = ((/* implicit */unsigned long long int) var_6);
                }
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) min((var_5), (((/* implicit */short) min((arr_20 [i_7 + 2] [i_7 - 2] [(unsigned short)3] [i_7]), (arr_20 [i_7 + 2] [i_7 - 2] [(signed char)21] [i_7])))))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 4; i_12 < 22; i_12 += 2) 
                    {
                        {
                            var_31 |= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_21 [i_12 - 2] [i_12] [i_12] [i_12 - 3] [i_12])), (arr_22 [i_12 - 4] [i_12] [i_12] [i_12 + 1] [i_12 + 2] [i_12 + 2]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9)))))))));
                            var_32 ^= ((/* implicit */int) ((long long int) ((arr_18 [i_0] [i_7 - 2] [i_0] [(unsigned short)22]) >> (((arr_18 [i_11] [i_7] [i_5] [(unsigned char)18]) - (10466478610094148005ULL))))));
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 68719443968LL)), (9810214578254774013ULL)))))))));
                            var_34 *= ((/* implicit */_Bool) (+((+(arr_3 [(unsigned char)19] [i_5])))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_13 = 2; i_13 < 22; i_13 += 4) /* same iter space */
            {
                var_35 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)56)) == (var_10)));
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    var_36 += ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)246))));
                    var_37 -= ((/* implicit */unsigned short) ((_Bool) (signed char)36));
                    var_38 = ((((/* implicit */int) arr_10 [i_14] [(_Bool)1] [(_Bool)1] [(unsigned char)1] [i_13])) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)37))))));
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_4))) ^ (((((/* implicit */int) var_5)) >> (((var_10) - (766904637)))))));
                }
                for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    arr_43 [i_13] [i_13] [i_5] [22ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2125191656U))));
                    var_40 ^= ((/* implicit */unsigned long long int) var_2);
                }
                var_41 += ((((/* implicit */_Bool) 0LL)) && (arr_12 [i_13 + 3] [i_13 + 1]));
            }
            var_42 = ((/* implicit */signed char) arr_39 [i_5] [i_5]);
            /* LoopSeq 2 */
            for (unsigned short i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    for (unsigned short i_18 = 1; i_18 < 22; i_18 += 1) 
                    {
                        {
                            var_43 &= ((/* implicit */int) 13817603493362328191ULL);
                            var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_18 + 2] [i_18 - 1]))) * (arr_37 [i_18 + 1] [i_18 + 1] [i_5] [i_0]))), (9007199120523264ULL))))));
                        }
                    } 
                } 
                arr_52 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((0LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))))))) == (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_16] [(_Bool)1] [(_Bool)1]))) + (max((((/* implicit */long long int) (unsigned char)199)), (var_7)))))));
                var_45 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_5] [1U] [i_16] [i_16] [i_16])))))));
                arr_53 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (signed char)-45)))) < (((/* implicit */int) min((arr_20 [(signed char)20] [i_5] [i_16] [i_16]), (arr_9 [i_0] [i_0] [i_5] [i_16]))))));
                var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) (signed char)-37))));
            }
            for (unsigned short i_19 = 0; i_19 < 25; i_19 += 4) /* same iter space */
            {
                arr_56 [i_19] [i_19] = ((/* implicit */unsigned short) max(((+((+(var_2))))), (((/* implicit */long long int) (_Bool)1))));
                var_47 = ((/* implicit */int) (((-(((/* implicit */int) arr_14 [i_0] [i_19])))) < (((((/* implicit */int) arr_20 [i_19] [i_19] [i_19] [i_19])) + (((/* implicit */int) arr_47 [(_Bool)1] [i_0] [i_5] [i_19]))))));
            }
            var_48 = ((int) ((arr_48 [i_0] [i_0] [(unsigned short)4] [i_0] [i_0] [i_0]) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [13U])))));
            var_49 = (-(((/* implicit */int) var_4)));
        }
        var_50 = (~(((((/* implicit */_Bool) ((var_7) >> (((/* implicit */int) (signed char)37))))) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((((/* implicit */int) arr_39 [i_0] [3ULL])) & (((/* implicit */int) arr_41 [i_0] [i_0])))))));
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        arr_60 [i_20] [i_20] = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_20] [i_20] [(_Bool)1] [i_20]))));
        var_51 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_21 [i_20] [i_20] [(_Bool)1] [i_20] [i_20])) : (139029715))))) & (((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))));
    }
    for (int i_21 = 2; i_21 < 15; i_21 += 1) 
    {
        var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_31 [i_21] [i_21] [i_21]))) - (((/* implicit */int) (_Bool)1)))))));
        arr_64 [i_21 - 2] = ((/* implicit */short) (+((-(((unsigned long long int) var_8))))));
    }
    for (int i_22 = 1; i_22 < 15; i_22 += 4) 
    {
        var_53 -= ((/* implicit */unsigned short) (~((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-37)) && (((/* implicit */_Bool) 6073829077698856851ULL)))))))));
        var_54 |= (!(((/* implicit */_Bool) min((((int) arr_19 [i_22] [i_22] [i_22])), (((/* implicit */int) (signed char)-58))))));
        var_55 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) ((signed char) (signed char)64)))), (((((/* implicit */int) arr_21 [i_22 + 3] [24LL] [i_22 + 3] [i_22] [7])) ^ (((/* implicit */int) arr_21 [i_22 - 1] [i_22 + 1] [i_22] [i_22] [i_22]))))));
    }
    var_56 = ((/* implicit */unsigned int) var_1);
    var_57 &= ((/* implicit */signed char) ((long long int) ((unsigned short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (signed char)127))))));
    var_58 = ((/* implicit */unsigned long long int) ((var_7) == (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_11))))) % (((((((/* implicit */int) (signed char)-61)) + (2147483647))) << (((var_11) - (2680216808709169732LL))))))))));
    var_59 *= ((/* implicit */short) (-(var_2)));
}
