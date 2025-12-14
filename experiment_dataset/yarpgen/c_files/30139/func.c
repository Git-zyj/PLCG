/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30139
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_16 = var_1;
        arr_2 [i_0] [i_0] &= ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 2983150443U)))) ? (68719460352ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
        var_17 -= ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) (+(((int) 18446744004990091264ULL))));
        var_19 ^= ((/* implicit */signed char) ((1311816870U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43383)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16475187310281557594ULL)) ? (((/* implicit */int) ((_Bool) arr_7 [i_2] [i_3]))) : (((/* implicit */int) ((((/* implicit */int) (short)-32530)) > (var_12))))));
                var_21 = ((/* implicit */signed char) (short)32531);
            }
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_2] [i_3])) | (-1943632060)));
        }
        for (int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            arr_16 [(signed char)6] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)113))));
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                var_23 *= ((/* implicit */signed char) ((2767847497U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-32517)))));
                var_24 = ((/* implicit */signed char) 2983150425U);
                arr_19 [i_5] = ((/* implicit */unsigned long long int) (unsigned short)43380);
                var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)43370)) : (((/* implicit */int) (unsigned short)43380))))) % (arr_8 [i_5])));
            }
            for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 3) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)22180)) ? (((/* implicit */long long int) ((unsigned int) arr_9 [(short)5]))) : (2251799813652480LL)));
                arr_23 [i_2] [i_2] [i_5] = ((/* implicit */int) (+(arr_11 [i_7 - 2] [i_7 + 3] [i_7 - 3])));
                /* LoopSeq 2 */
                for (signed char i_8 = 2; i_8 < 11; i_8 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        arr_31 [(_Bool)1] [i_5] [i_5] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) (unsigned short)22165))))));
                        var_27 = ((/* implicit */signed char) var_12);
                    }
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        var_28 *= ((/* implicit */int) (_Bool)1);
                        var_29 = ((/* implicit */long long int) var_2);
                    }
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        arr_36 [i_2] [(unsigned char)9] [i_5] [i_8] = ((/* implicit */short) (_Bool)0);
                        var_30 *= ((/* implicit */_Bool) (signed char)-53);
                    }
                    /* LoopSeq 2 */
                    for (signed char i_12 = 3; i_12 < 11; i_12 += 3) 
                    {
                        arr_40 [i_5] [i_5] = ((/* implicit */short) (unsigned short)43380);
                        arr_41 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (unsigned short)22165);
                        var_31 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned short)22165)) % (((/* implicit */int) (unsigned short)55330)))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */signed char) (_Bool)1);
                        arr_46 [(signed char)8] [i_2] [(signed char)8] [i_5] [(unsigned short)10] = ((/* implicit */unsigned int) arr_39 [i_2] [(short)6] [(unsigned short)5] [i_8] [(unsigned short)5]);
                        var_33 &= ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                    }
                    arr_47 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(14867414233898545822ULL))))));
                    var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22158)) ^ (((/* implicit */int) (signed char)-25)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 4; i_14 < 11; i_14 += 3) 
                    {
                        arr_50 [i_5] [i_5] [i_5] [i_8] [i_14] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) * (((((/* implicit */_Bool) (short)-32521)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_14])))))));
                        arr_51 [i_14] [i_5] [i_7] [i_5] [i_5] [i_2] = ((/* implicit */signed char) var_4);
                        arr_52 [i_5] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-17559)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (11671674976540684629ULL)));
                    }
                    for (short i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        arr_55 [i_5] [i_5] = ((/* implicit */signed char) var_6);
                        var_35 *= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)22166))));
                    }
                }
                for (long long int i_16 = 3; i_16 < 11; i_16 += 3) 
                {
                    arr_58 [i_2] [i_2] [i_7] [i_2] [i_16] [i_5] = ((((/* implicit */int) (unsigned short)22165)) >= (((/* implicit */int) (short)17539)));
                    var_36 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)194)))) * (((/* implicit */int) arr_24 [(unsigned short)5]))));
                    var_37 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))));
                }
            }
            for (short i_17 = 0; i_17 < 12; i_17 += 3) 
            {
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((signed char) (signed char)-97)))));
                arr_63 [i_5] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)805))));
            }
            arr_64 [i_5] [i_5] = ((/* implicit */unsigned char) ((signed char) (short)8359));
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8359))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (3659603750U)))));
        }
        arr_65 [i_2] = ((/* implicit */_Bool) (short)-17559);
        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (short)17558))));
    }
    var_41 = ((/* implicit */unsigned char) ((((unsigned int) (~(((/* implicit */int) var_8))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
}
