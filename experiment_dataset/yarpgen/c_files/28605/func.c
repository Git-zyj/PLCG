/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28605
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((arr_0 [i_0 + 1]) ? (arr_1 [i_0]) : (arr_1 [i_0 + 1]))) & (arr_1 [i_0 + 1])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_4 [i_0 + 1] [i_0 + 1]))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                var_19 = ((/* implicit */unsigned long long int) (unsigned short)44104);
                var_20 ^= ((/* implicit */unsigned int) var_5);
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    arr_12 [i_3] [i_1 - 3] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)21431)) / (((/* implicit */int) (_Bool)1))));
                    arr_13 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */short) ((unsigned int) -228285746));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 3] [i_1 - 2])) << (((((/* implicit */int) (signed char)-1)) + (20)))));
                }
                for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) ((arr_4 [i_4] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54)))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)40915)) : (((/* implicit */int) (unsigned short)44104))))));
                    var_23 = (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_0 + 1] [i_2] [i_4] [i_4] [i_4] [i_4])) != (((/* implicit */int) var_13)))))) : (var_12));
                }
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    arr_20 [i_2] [i_2] = ((/* implicit */signed char) var_16);
                    arr_21 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) var_3))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_5]))));
                }
            }
        }
        /* LoopSeq 4 */
        for (int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_24 = ((/* implicit */_Bool) max((var_24), ((!(((/* implicit */_Bool) max((arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0 + 1])))))))));
            var_25 = ((/* implicit */signed char) ((_Bool) (_Bool)1));
            arr_24 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_6] [i_6] [i_6] [i_6] [i_6]))) + (arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((0U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0 + 1] [i_6] [i_0 + 1] [i_6]))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_6] [i_0 + 1] [i_0])))))));
        }
        for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 3) 
        {
            arr_29 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (4294967281U)));
            var_26 = ((/* implicit */short) (-(((/* implicit */int) min((arr_10 [i_7] [i_7] [i_7] [i_7 - 2] [i_7] [i_7]), (arr_10 [i_7 - 4] [i_7 - 4] [i_7 - 4] [i_7 - 3] [i_7 - 3] [i_7]))))));
            arr_30 [i_7] = ((/* implicit */unsigned long long int) (((~(var_12))) & (((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7 - 3])))))));
            var_27 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (unsigned char)34)))) >= (((arr_5 [i_0 + 1] [i_0 + 1] [i_7 + 2]) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_0 + 1] [i_7] [i_7] [i_7 - 3])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_11 [i_7] [i_0 + 1] [i_0 + 1] [i_0 + 1])), (max((((/* implicit */unsigned int) var_13)), (1058662581U)))))) : (arr_4 [i_0] [i_7])));
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
        {
            var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_0 + 1])) ? (((/* implicit */int) ((_Bool) (short)-32762))) : (var_8)));
            arr_34 [i_0] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_5 [i_8] [i_0 + 1] [i_8])) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)44093)) : (1785206814)))));
            var_29 = ((/* implicit */signed char) ((var_8) + (((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))));
        }
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_10])) ? (var_9) : (((/* implicit */int) (unsigned char)34)))) / (((/* implicit */int) arr_14 [i_0] [i_0]))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-10)) & (((/* implicit */int) (_Bool)1))))) * (arr_4 [i_0 + 1] [i_0 + 1])));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) ((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) arr_38 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_38 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                        var_33 &= ((/* implicit */short) (~(((/* implicit */int) arr_48 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_11] [i_0] [i_0 + 1]))));
                    }
                    arr_50 [i_9] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 1207261335U))) ? (((/* implicit */int) (short)-18260)) : (((/* implicit */int) var_10))));
                    var_34 ^= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_13)))))) : (1207261316U)));
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) arr_1 [i_9]))));
                }
                for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    var_36 = ((/* implicit */_Bool) arr_31 [i_10] [i_10] [i_10]);
                    arr_54 [i_0] [i_10] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18263)) ? (arr_33 [i_0] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)29579)) ^ (((/* implicit */int) arr_25 [i_10]))));
                }
                for (long long int i_15 = 4; i_15 < 13; i_15 += 1) 
                {
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)18255))))) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (short)16222)))))));
                    var_39 = ((((((/* implicit */_Bool) (short)29598)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) >= (((/* implicit */unsigned int) var_14)));
                }
                for (short i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    arr_62 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_17 [i_0] [i_9] [i_0 + 1] [i_0 + 1] [i_9] [i_16]))));
                    arr_63 [i_0 + 1] [i_9] [i_10] [i_16] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_10] [i_0 + 1] [i_0 + 1] [i_0 + 1])) + (((/* implicit */int) arr_11 [i_10] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                }
                arr_64 [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)17363)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (var_17))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))));
                arr_65 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_10))) / (((/* implicit */int) var_7))));
            }
            for (unsigned int i_17 = 0; i_17 < 14; i_17 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    arr_70 [i_0 + 1] [i_18] [i_17] [i_18] [i_0] [i_0] = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) 3087705944U))));
                    /* LoopSeq 2 */
                    for (unsigned short i_19 = 2; i_19 < 12; i_19 += 2) 
                    {
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) + (((/* implicit */int) (signed char)-10))))) ? (((/* implicit */long long int) var_12)) : (-8979892291094716634LL)));
                        var_41 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_19])) ? (1656435630U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_67 [i_0] [i_0] [i_0] [i_19])) : (((/* implicit */int) arr_43 [i_0] [i_0] [i_0 + 1] [i_0])))))));
                    }
                    for (signed char i_20 = 0; i_20 < 14; i_20 += 3) 
                    {
                        var_42 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (8979892291094716649LL) : (((/* implicit */long long int) var_6))))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32551))) : (2827582703U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_72 [i_17] [i_9] [i_17] [i_9] [i_17])) ? (arr_68 [i_9] [i_9] [i_9] [i_20]) : (((/* implicit */int) (short)18240))))));
                        arr_75 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */short) (!((_Bool)0)));
                    }
                    arr_76 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (unsigned short)58202);
                }
                var_43 = ((unsigned char) (!(((/* implicit */_Bool) 2800468971U))));
                arr_77 [i_0] [i_9] = ((/* implicit */unsigned int) var_11);
            }
            for (unsigned short i_21 = 0; i_21 < 14; i_21 += 2) 
            {
                var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (2800468963U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_21])))));
                /* LoopSeq 1 */
                for (unsigned short i_22 = 1; i_22 < 12; i_22 += 2) 
                {
                    arr_84 [i_0 + 1] = ((/* implicit */_Bool) ((arr_52 [i_22] [i_22] [i_22] [i_21]) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_23 = 0; i_23 < 14; i_23 += 4) 
                    {
                        arr_88 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned int) ((int) arr_32 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_45 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_78 [i_0] [i_9] [i_22]))) : (var_2)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))));
                    }
                    var_46 = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (short i_24 = 3; i_24 < 12; i_24 += 2) 
                    {
                        var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_85 [i_22 + 1] [i_9] [i_21])) ? (arr_85 [i_22 + 1] [i_9] [i_0]) : (((/* implicit */int) (short)18934))));
                        var_48 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_1 [i_0])))));
                    }
                    var_49 ^= ((/* implicit */unsigned short) ((unsigned int) arr_6 [i_0 + 1] [i_22 + 2] [i_22 + 2]));
                }
                arr_92 [i_0] [i_0] [i_21] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_57 [i_0] [i_0]) == (arr_73 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))) * (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (arr_66 [i_0 + 1] [i_9])))));
            }
            var_50 = ((/* implicit */int) ((((((/* implicit */unsigned int) var_14)) | (3087705944U))) >> (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (2167097287U)))));
        }
        arr_93 [i_0] = ((/* implicit */unsigned short) arr_42 [i_0] [10ULL] [i_0 + 1] [i_0]);
    }
    var_51 = ((/* implicit */unsigned int) ((_Bool) (unsigned short)1391));
    var_52 = ((unsigned short) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_16)))) ? (max((var_17), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8))))));
    var_53 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (-1523948822) : (((/* implicit */int) ((_Bool) (short)-16230))))), (((((/* implicit */_Bool) (unsigned short)15414)) ? (((/* implicit */int) (short)-17646)) : (((/* implicit */int) (_Bool)1))))));
    var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned short)7352))));
}
