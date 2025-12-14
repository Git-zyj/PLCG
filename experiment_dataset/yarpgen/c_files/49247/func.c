/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49247
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)81)) < (((/* implicit */int) arr_1 [i_0])))))));
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((int) arr_0 [i_0])))));
    }
    var_12 *= ((/* implicit */unsigned char) 3042882184U);
    var_13 += ((/* implicit */unsigned char) ((int) var_3));
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_14 -= ((/* implicit */unsigned char) (((((_Bool)1) ? (((((/* implicit */int) (signed char)-89)) / (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) arr_0 [0LL]))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            arr_13 [i_3] = ((/* implicit */unsigned char) 2770399325U);
            arr_14 [i_2] [i_3] = (((+(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (signed char)-15)));
            var_15 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) + (arr_2 [i_2])));
            var_16 = ((/* implicit */_Bool) ((arr_0 [i_3]) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (unsigned short)62241))));
        }
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            var_17 -= ((/* implicit */short) (~(((((/* implicit */int) arr_0 [i_2])) | (((/* implicit */int) arr_0 [i_4]))))));
            arr_18 [i_2] [i_4] = ((signed char) ((unsigned int) ((signed char) (_Bool)1)));
        }
        for (int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
        {
            arr_21 [i_5] = (_Bool)1;
            arr_22 [i_5] [i_5] [i_2] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (short)-23583)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)175)) || (((/* implicit */_Bool) (short)27954))))))) / ((+(((/* implicit */int) ((((/* implicit */int) arr_10 [i_5] [1LL])) != (((/* implicit */int) (unsigned char)253)))))))));
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_6 [i_2] [i_2])) + (2147483647))) >> (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned char) (short)-13126))) : (((/* implicit */int) (signed char)-126)))) - (167)))));
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                {
                    arr_28 [i_2] [i_2] [i_5] [i_7] [i_2] [(unsigned char)10] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)0)), (((signed char) ((((/* implicit */_Bool) (short)27975)) ? (((/* implicit */int) (short)27940)) : (((/* implicit */int) (_Bool)1)))))));
                    var_19 += ((/* implicit */int) (_Bool)1);
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((signed char) arr_25 [i_2] [i_2])))));
                    var_21 = ((/* implicit */unsigned int) ((11448782670730959051ULL) != (arr_3 [i_2] [i_7])));
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
                {
                    var_22 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [6ULL] [6ULL] [i_6])) & (((/* implicit */int) arr_15 [i_2] [i_5] [(short)3]))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_6])))) || (((/* implicit */_Bool) ((long long int) arr_11 [i_2]))))))));
                }
            }
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                var_24 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (signed char)111)), (arr_19 [i_2] [i_9]))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)80)))))));
                var_25 = ((/* implicit */unsigned int) (((_Bool)1) ? (((((arr_25 [i_2] [i_2]) + (9223372036854775807LL))) >> (((arr_12 [i_5]) - (1545815073))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))));
                arr_34 [i_2] [i_5] [i_5] = ((/* implicit */short) ((signed char) ((int) max((arr_20 [i_5] [1LL]), (arr_27 [i_5])))));
            }
        }
        for (int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
        {
            arr_37 [i_2] [i_2] [i_10] = ((/* implicit */unsigned long long int) (signed char)96);
            var_26 &= ((/* implicit */unsigned int) ((arr_4 [i_2]) == (((/* implicit */int) arr_33 [i_10] [i_2] [i_2] [i_2]))));
            arr_38 [i_10] [i_10] [i_10] = ((((((/* implicit */int) (signed char)120)) * (((/* implicit */int) arr_27 [i_2])))) * (((/* implicit */int) min((arr_27 [i_2]), (arr_27 [i_10])))));
            arr_39 [i_10] [i_10] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)120)) / (((/* implicit */int) (unsigned char)167))))) ? (min((8807195936890080918LL), (((/* implicit */long long int) arr_17 [i_10])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)46))))))))) ? (((((-1460452080) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (signed char)114)))) - (21))))) : (max((((/* implicit */int) (unsigned char)62)), (60740577)))));
            arr_40 [i_10] = ((/* implicit */unsigned char) ((unsigned long long int) max((arr_23 [i_2] [i_10] [i_2]), (((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_2] [i_10]))))));
        }
        var_27 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)2)) ? (732895011U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))), (((/* implicit */unsigned int) (signed char)120))));
        /* LoopSeq 3 */
        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_8))));
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-21))));
                var_30 += ((/* implicit */unsigned short) max((max((arr_41 [(unsigned char)11] [i_11] [i_11]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26395)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (unsigned char)144)))))));
                arr_46 [i_2] [i_2] [i_2] [i_11] = ((signed char) ((long long int) -4181178210750438202LL));
                arr_47 [i_11] [i_11] [i_12] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)31)), (arr_23 [i_2] [i_2] [i_12])));
            }
            arr_48 [18U] [i_11] [i_11] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((arr_29 [i_11] [i_11]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_42 [i_2] [i_11])) + (2711)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)130))) + (17091855972725018803ULL)))));
            var_31 = ((/* implicit */unsigned int) (((_Bool)1) ? (-1079571837) : (((((/* implicit */int) (unsigned char)237)) - (((/* implicit */int) (_Bool)0))))));
            arr_49 [i_2] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_32 [i_2] [i_2] [i_11] [i_2]), (((/* implicit */int) arr_15 [i_11] [i_11] [i_2]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)151)) && (((/* implicit */_Bool) 3699623289U))))))) * (((/* implicit */int) arr_6 [i_2] [i_2]))));
        }
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
        {
            arr_54 [i_2] [i_13] = ((/* implicit */unsigned char) arr_23 [i_13] [i_13] [i_2]);
            var_32 = ((/* implicit */signed char) (~(((/* implicit */int) ((arr_23 [i_2] [i_2] [i_13]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_2] [i_13] [i_2] [i_13]))))))));
            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) 510866869U))));
        }
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 19; i_15 += 3) 
            {
                for (unsigned char i_16 = 0; i_16 < 19; i_16 += 4) 
                {
                    {
                        arr_64 [i_2] [i_14] [i_14] [i_15] [i_2] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_16] [i_15] [i_15])) ? (2280890373174134958ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-2578)) ^ (((/* implicit */int) arr_55 [i_2] [(short)16] [i_2])))))));
                        /* LoopSeq 2 */
                        for (short i_17 = 0; i_17 < 19; i_17 += 3) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60535)) || (((/* implicit */_Bool) arr_9 [i_2] [i_2]))));
                            var_35 += ((/* implicit */_Bool) ((short) (-(((/* implicit */int) (unsigned char)253)))));
                            arr_67 [i_2] [i_14] [i_15] [i_15] [i_15] [i_14] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_27 [i_17]))) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) ((unsigned char) arr_55 [i_2] [i_2] [(_Bool)1])))));
                            arr_68 [i_2] [i_2] [i_2] [i_2] [i_14] = ((/* implicit */int) (_Bool)1);
                            arr_69 [i_2] [i_14] [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_2 [i_17])) + (449485562257627024LL)));
                        }
                        for (short i_18 = 0; i_18 < 19; i_18 += 3) /* same iter space */
                        {
                            arr_72 [i_14] [i_2] [i_14] [i_16] [i_16] = ((/* implicit */short) (+(arr_62 [i_2] [(_Bool)1] [i_16] [i_18])));
                            arr_73 [i_2] [i_2] [i_14] [i_15] [i_14] [(unsigned short)11] = ((/* implicit */unsigned long long int) ((arr_4 [i_2]) + (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_57 [i_16])))))));
                            arr_74 [i_2] [i_2] [i_2] [i_15] [i_16] [i_14] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)30))) ? (((((/* implicit */int) (signed char)-15)) * (((/* implicit */int) (unsigned char)144)))) : (arr_9 [i_14] [i_2])));
                        }
                        arr_75 [i_14] [i_14] [i_15] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (unsigned char)58))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_55 [i_2] [i_15] [i_16])))) : (((/* implicit */int) arr_17 [i_14]))));
                        arr_76 [(unsigned short)9] [(unsigned short)9] [i_15] [(unsigned short)9] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)38)) && (((/* implicit */_Bool) (unsigned char)105))));
                        var_36 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3973960935U)) || (arr_66 [i_15]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_70 [i_14])))) : (((unsigned long long int) var_8))));
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_27 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) : (arr_7 [i_2] [i_14]))) << (((/* implicit */int) (_Bool)1))));
        }
        var_38 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? ((-(((/* implicit */int) arr_33 [(unsigned char)9] [(unsigned char)6] [i_2] [i_2])))) : (((/* implicit */int) ((signed char) 1106149163)))))));
    }
}
