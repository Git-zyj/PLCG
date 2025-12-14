/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38461
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535)))))))));
                var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)128))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) -6725518103809436816LL))) - (((/* implicit */int) max(((unsigned short)1960), (((/* implicit */unsigned short) (unsigned char)232)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                        {
                            var_13 ^= (-(((/* implicit */int) (!(((/* implicit */_Bool) max((4323455642275676160LL), (((/* implicit */long long int) arr_14 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_4])))))))));
                            var_14 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_4]))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                        {
                            var_15 ^= min((arr_16 [i_0] [i_1] [i_2] [i_5] [i_5]), (((/* implicit */long long int) (short)-11611)));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65533)) ? ((-(((/* implicit */int) arr_10 [i_0 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2])))) : ((+(((/* implicit */int) (unsigned short)6976))))));
                            var_17 = ((/* implicit */signed char) (~((+((-(((/* implicit */int) (short)-12424))))))));
                            var_18 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (unsigned short)24))))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_4)))));
                            var_19 = ((/* implicit */short) var_2);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */int) ((long long int) (-(((/* implicit */int) (unsigned char)127)))));
                            var_21 = ((/* implicit */long long int) ((unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0 + 2] [i_0]));
                            var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((signed char) var_2))), (min((arr_8 [i_0] [i_0 + 3] [i_0 + 1] [i_1 + 2] [i_2]), (arr_8 [i_0] [i_0 - 1] [i_0 + 1] [i_1 + 1] [(unsigned short)15])))));
                            var_23 = ((/* implicit */signed char) (unsigned short)26531);
                        }
                        var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) (-(1583718186U)))) | ((-(var_3)))))));
                        var_25 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [9LL] [i_1 + 2] [i_3])))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_7 = 3; i_7 < 16; i_7 += 1) 
                {
                    var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)40928))));
                    var_27 = ((/* implicit */signed char) (_Bool)1);
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1 - 1]))));
                    var_29 = ((/* implicit */short) max((var_29), ((short)-12402)));
                    var_30 = var_2;
                    var_31 = ((/* implicit */unsigned short) (((-(var_5))) + (((/* implicit */long long int) ((/* implicit */int) ((short) arr_21 [i_8] [i_1]))))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [(_Bool)1]))) | (arr_5 [i_0 + 2] [i_0 + 2] [i_1 + 2])));
                }
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)75)) - (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 2147483640)), (-5441914059780711115LL)))))))));
                    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-11731)) : (((/* implicit */int) var_2))))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        var_35 = ((/* implicit */int) ((short) (-(arr_25 [i_10] [2LL]))));
        var_36 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_0))))));
    }
    for (short i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_12 = 2; i_12 < 22; i_12 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                var_37 = (((_Bool)1) ? (((/* implicit */unsigned long long int) var_4)) : (var_3));
                var_38 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_33 [i_12 + 2] [i_12] [i_13])) ^ (((((/* implicit */_Bool) 4215936581517995020ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))) : (var_6)))));
            }
            /* LoopSeq 4 */
            for (short i_14 = 1; i_14 < 22; i_14 += 1) 
            {
                var_39 = ((/* implicit */short) ((((/* implicit */long long int) arr_34 [i_12 + 2] [i_14] [i_14 + 1] [2])) + (-3863623546265612559LL)));
                var_40 = ((/* implicit */short) ((arr_33 [i_11] [16U] [i_12 + 2]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151)))));
                var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1073741824))));
            }
            for (unsigned short i_15 = 1; i_15 < 22; i_15 += 2) 
            {
                var_42 = ((/* implicit */short) ((1037853502144345908ULL) > (((/* implicit */unsigned long long int) (+(arr_33 [i_11] [i_12] [i_15]))))));
                var_43 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)90))));
            }
            for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 4) 
            {
                var_44 |= ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_48 [10ULL] [10ULL] [i_16 + 1] [i_11])))));
                /* LoopSeq 2 */
                for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    var_45 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_9))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        var_46 |= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)33488))))));
                        var_47 &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32750))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned char) (+(arr_34 [i_12 - 1] [i_16 + 1] [i_16 - 1] [i_16 - 1])));
                        var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7ULL)) ? (((unsigned int) -497185006)) : (((/* implicit */unsigned int) arr_49 [i_12 + 2] [i_16 - 1] [i_16] [19ULL]))));
                        var_50 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)11))));
                        var_51 = ((/* implicit */unsigned char) (~(arr_46 [i_12 - 1])));
                        var_52 = ((/* implicit */signed char) (~(((/* implicit */int) arr_45 [i_11]))));
                    }
                    var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) -1501561364711030703LL))));
                }
                for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 4) 
                {
                    var_54 -= ((/* implicit */_Bool) ((unsigned int) (signed char)119));
                    var_55 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1LL))));
                }
            }
            for (unsigned short i_21 = 0; i_21 < 24; i_21 += 3) 
            {
                var_56 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_46 [i_21])) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) arr_59 [11] [i_21] [i_12] [i_11]))))));
                var_57 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_0)))));
                var_58 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)13))));
                var_59 = ((/* implicit */unsigned short) var_6);
            }
            var_60 = (-(arr_56 [i_12 - 2] [i_12 - 1] [i_12 + 2] [i_12]));
            var_61 = ((/* implicit */signed char) (~(arr_34 [i_11] [i_11] [i_12 - 1] [i_12])));
        }
        /* vectorizable */
        for (signed char i_22 = 2; i_22 < 22; i_22 += 4) /* same iter space */
        {
            var_62 = ((/* implicit */unsigned int) ((short) arr_38 [(unsigned char)10] [i_11] [i_22]));
            /* LoopNest 2 */
            for (signed char i_23 = 0; i_23 < 24; i_23 += 4) 
            {
                for (short i_24 = 4; i_24 < 23; i_24 += 1) 
                {
                    {
                        var_63 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5504357190532963778LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)39002)))))));
                        var_64 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)9))));
                    }
                } 
            } 
            var_65 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(4745581211940140542ULL))))));
        }
        /* LoopNest 3 */
        for (short i_25 = 0; i_25 < 24; i_25 += 1) 
        {
            for (unsigned int i_26 = 1; i_26 < 22; i_26 += 2) 
            {
                for (unsigned char i_27 = 0; i_27 < 24; i_27 += 2) 
                {
                    {
                        var_66 = ((/* implicit */signed char) arr_49 [i_11] [i_25] [(signed char)4] [i_26]);
                        var_67 = ((/* implicit */long long int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_28 = 0; i_28 < 24; i_28 += 3) 
                        {
                            var_68 = ((/* implicit */signed char) (~(((unsigned long long int) var_7))));
                            var_69 = ((/* implicit */signed char) arr_49 [i_26 + 2] [i_26 + 2] [i_26 + 1] [(_Bool)1]);
                        }
                        /* LoopSeq 2 */
                        for (signed char i_29 = 4; i_29 < 22; i_29 += 2) 
                        {
                            var_70 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) var_1))), (5267544349887427332LL)));
                            var_71 = (!(((/* implicit */_Bool) max((arr_38 [i_26] [i_26] [i_26 + 1]), (8271254700333216104ULL)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_30 = 3; i_30 < 21; i_30 += 4) 
                        {
                            var_72 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_50 [i_26 - 1] [i_30 + 1] [i_30 - 2]))));
                            var_73 = ((/* implicit */unsigned int) arr_84 [i_11] [i_25] [9ULL] [i_27] [(unsigned short)15] [i_25]);
                        }
                    }
                } 
            } 
        } 
        var_74 = ((/* implicit */unsigned int) (~((~(min((var_4), (((/* implicit */long long int) var_2))))))));
        var_75 = ((/* implicit */unsigned char) min((min((min((2118817146), (((/* implicit */int) (signed char)40)))), ((~(((/* implicit */int) (unsigned short)30399)))))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)156)) || (((/* implicit */_Bool) 154150418525359387ULL)))))));
        var_76 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_51 [i_11])))));
    }
    for (short i_31 = 0; i_31 < 16; i_31 += 2) 
    {
        var_77 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_75 [i_31] [11] [i_31] [i_31]))) <= (((/* implicit */int) (unsigned short)32855))));
        var_78 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (short)-23357))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((13701162861769411052ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_31] [(unsigned char)23] [i_31])))))))));
        var_79 = ((long long int) (~(((/* implicit */int) (unsigned char)10))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_32 = 0; i_32 < 16; i_32 += 1) 
        {
            var_80 |= ((/* implicit */unsigned int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_31])))));
            var_81 = ((/* implicit */unsigned short) min((var_81), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)37616)))))));
            var_82 = ((/* implicit */_Bool) ((unsigned long long int) arr_70 [i_31] [i_32]));
        }
        for (unsigned short i_33 = 0; i_33 < 16; i_33 += 2) 
        {
            var_83 = ((/* implicit */short) min((var_83), (((/* implicit */short) (-(((/* implicit */int) max(((short)32758), (((/* implicit */short) (signed char)-36))))))))));
            var_84 &= ((/* implicit */_Bool) ((unsigned char) ((_Bool) var_9)));
        }
    }
}
