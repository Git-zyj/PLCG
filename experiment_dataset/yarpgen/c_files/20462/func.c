/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20462
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */int) ((_Bool) var_4))) << (((min((((/* implicit */unsigned int) var_14)), (var_7))) - (46U))))) > ((~(((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_21 = ((2339442820U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))));
            var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)4])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) ((unsigned char) (signed char)-90)))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49390)) ^ (((/* implicit */int) (signed char)-17))))) ? (((/* implicit */int) arr_5 [i_0])) : (((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) arr_3 [i_0] [i_0]))))));
            var_24 = ((/* implicit */unsigned long long int) (+(((var_11) ? (3255302915023792599LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_3] [i_2])) && (((/* implicit */_Bool) var_2))));
            /* LoopSeq 3 */
            for (unsigned int i_4 = 2; i_4 < 23; i_4 += 3) 
            {
                var_26 = ((/* implicit */signed char) (short)-1);
                var_27 = ((/* implicit */unsigned int) ((var_12) == (-576932796)));
            }
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
            {
                var_28 += ((/* implicit */unsigned char) 29);
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((unsigned char) (unsigned char)225)))));
                            var_30 = arr_7 [i_6];
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */short) (-(var_0)));
                var_32 = (-(((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_8] [i_3] [i_2] [i_2]))))));
                var_33 = ((/* implicit */int) ((var_13) & (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            }
            var_34 = ((/* implicit */unsigned int) arr_11 [i_3] [18U]);
        }
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_10 = 3; i_10 < 22; i_10 += 4) 
            {
                var_35 = ((/* implicit */int) ((((/* implicit */unsigned int) var_3)) != (((unsigned int) var_10))));
                var_36 = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_14 [i_2] [i_10 + 2])) : (((/* implicit */int) arr_6 [i_10 - 3] [i_10 + 1])));
                var_37 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) - (((/* implicit */int) (short)14224))));
            }
            for (int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                var_38 &= ((/* implicit */_Bool) ((unsigned short) arr_23 [i_9]));
                var_39 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_9]))) : (0U)))));
                var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_2] [(signed char)2]))));
            }
            for (unsigned char i_12 = 1; i_12 < 22; i_12 += 4) 
            {
                /* LoopSeq 4 */
                for (short i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((_Bool) (signed char)-124)))));
                    var_42 |= ((/* implicit */unsigned short) ((int) arr_37 [i_2] [i_9] [i_12] [i_12] [i_2]));
                    var_43 = ((/* implicit */int) var_14);
                }
                for (unsigned short i_14 = 2; i_14 < 23; i_14 += 4) 
                {
                    var_44 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((arr_27 [i_9] [i_12 - 1] [i_12 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_14]))))));
                    var_45 = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)1653));
                }
                for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    var_46 ^= arr_26 [i_15] [(_Bool)1] [(signed char)5];
                    var_47 &= ((/* implicit */unsigned long long int) (-((-(var_4)))));
                    var_48 ^= ((/* implicit */unsigned char) (_Bool)1);
                    var_49 = ((/* implicit */short) (+((-(arr_27 [i_2] [i_9] [i_12 - 1])))));
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        var_50 = var_13;
                        var_51 = ((/* implicit */unsigned short) ((15820907855615609349ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21578)))));
                    }
                }
                for (unsigned char i_17 = 1; i_17 < 23; i_17 += 4) 
                {
                    var_52 = ((/* implicit */short) (unsigned short)43960);
                    var_53 = ((/* implicit */unsigned int) (!(((arr_24 [i_17 + 1] [i_12] [i_9] [10ULL]) >= (var_8)))));
                    var_54 |= ((/* implicit */signed char) var_1);
                    var_55 = ((/* implicit */unsigned short) (short)-14012);
                }
                var_56 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_33 [i_12 + 2] [i_12 - 1] [i_12 - 1])) == (((/* implicit */int) arr_33 [i_12 + 2] [i_12] [i_12 + 1]))));
            }
            var_57 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_38 [i_9] [i_9] [i_9] [i_2] [i_2] [i_9])) : (((/* implicit */int) arr_25 [i_9] [i_2]))));
        }
        for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                for (unsigned short i_20 = 0; i_20 < 24; i_20 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_21 = 1; i_21 < 23; i_21 += 4) 
                        {
                            var_58 = ((/* implicit */short) arr_31 [i_2] [i_19] [i_20]);
                            var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [i_21 - 1] [i_21 + 1] [i_21 + 1] [(_Bool)1] [i_21 + 1] [i_21 - 1])) ? (var_0) : (((/* implicit */int) arr_49 [i_21 - 1] [i_21 + 1] [1LL] [i_21 - 1] [i_21 + 1]))));
                            var_60 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_15)))) == (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43979))) : (var_7)))));
                        }
                        for (short i_22 = 0; i_22 < 24; i_22 += 3) 
                        {
                            var_61 -= ((/* implicit */signed char) arr_44 [i_2] [(_Bool)1]);
                            var_62 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)43978)) ? (((/* implicit */int) (unsigned short)21580)) : (((/* implicit */int) (unsigned short)21551))));
                        }
                        var_63 = ((/* implicit */signed char) ((((((/* implicit */int) arr_10 [i_18])) > (((/* implicit */int) arr_39 [i_20] [i_18] [i_19] [i_20])))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) < (((/* implicit */int) (unsigned short)43976))))))));
                        var_64 = ((/* implicit */_Bool) arr_48 [i_2] [i_18]);
                    }
                } 
            } 
            var_65 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_2] [i_18]))) == (var_9)));
            var_66 = ((/* implicit */long long int) max((var_66), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) arr_29 [i_2] [i_18])))) * (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) (unsigned short)21553))))))))));
            var_67 = ((/* implicit */short) ((arr_35 [i_2] [i_18]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_18] [(signed char)22] [i_18] [i_18])))));
        }
        /* LoopNest 3 */
        for (unsigned int i_23 = 0; i_23 < 24; i_23 += 3) 
        {
            for (short i_24 = 0; i_24 < 24; i_24 += 4) 
            {
                for (short i_25 = 1; i_25 < 22; i_25 += 4) 
                {
                    {
                        var_68 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)21601)) || (((7228760016038428111LL) == (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        var_69 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_25] [i_24] [i_23] [i_2]))));
                        var_70 = ((/* implicit */unsigned short) ((unsigned char) (signed char)41));
                    }
                } 
            } 
        } 
        var_71 = ((/* implicit */int) ((arr_22 [i_2] [i_2] [i_2] [i_2] [i_2]) << (((((/* implicit */int) ((short) var_4))) + (25966)))));
    }
    var_72 &= ((/* implicit */_Bool) ((unsigned char) var_2));
    var_73 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) (unsigned short)43962)))), (min((var_3), (((/* implicit */int) var_2)))))) * (max((var_10), (((var_11) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))));
}
