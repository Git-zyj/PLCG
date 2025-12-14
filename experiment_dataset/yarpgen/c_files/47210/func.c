/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47210
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
    var_16 = ((/* implicit */signed char) min(((short)27172), (var_11)));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_1 [14LL]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [(short)13] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)1043)), (1359288944)));
            var_18 = ((/* implicit */unsigned char) ((int) (signed char)-2));
            arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)24)), (arr_2 [i_0 + 3])))) && (((/* implicit */_Bool) (short)-15879))));
            /* LoopSeq 4 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_5 [i_0] [i_1] [6ULL]))));
                var_20 = ((/* implicit */unsigned short) ((unsigned char) ((((unsigned long long int) 0U)) << (((1359288964) - (1359288960))))));
            }
            for (int i_3 = 3; i_3 < 19; i_3 += 1) 
            {
                var_21 += ((/* implicit */unsigned char) 4037986925U);
                var_22 += ((/* implicit */unsigned int) ((4888474071750476586ULL) << (((var_5) - (233481753U)))));
                var_23 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (arr_5 [i_3 + 1] [i_1] [i_1]) : (arr_5 [i_1] [(_Bool)1] [i_1]))), (((unsigned long long int) arr_1 [(short)3])))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20115)) ? (((/* implicit */int) (unsigned char)248)) : (1611872476)))) + (arr_5 [11LL] [i_1] [i_1])))));
                arr_12 [i_1] [10LL] [i_0 - 4] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) (~(4037986899U))))), (((7788112909502198172ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)171))))))))));
            }
            for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                arr_17 [i_1] [1LL] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_4])) ? (arr_11 [i_4] [(unsigned short)10]) : (arr_11 [20ULL] [i_0 + 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)20108)) < (((/* implicit */int) arr_3 [i_0]))))))))))));
                arr_18 [i_0] [i_1] [i_1] [11U] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_8 [i_1] [i_1])), (((unsigned long long int) arr_15 [(_Bool)1] [i_0 - 2] [i_0] [i_0]))));
            }
            for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    arr_26 [i_0] [i_1] [i_5] [18LL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((135610811), (((/* implicit */int) arr_21 [i_0] [18ULL] [i_0] [18ULL]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0 + 2] [i_0 + 2] [(signed char)17] [3ULL]))) - (12701508466502212555ULL))))))) : (((int) arr_2 [i_0 + 1]))));
                    var_24 = ((/* implicit */_Bool) (short)0);
                    arr_27 [(signed char)4] [8LL] [(unsigned short)2] [i_1] [i_5] [i_6] = min((max((arr_15 [i_6] [i_6 + 1] [i_0 + 2] [i_0 - 4]), (arr_15 [i_6] [i_6 + 1] [i_0 + 2] [i_0 + 2]))), (((/* implicit */unsigned short) arr_23 [i_0] [i_5] [12] [19U])));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 2; i_8 < 20; i_8 += 1) 
                    {
                        arr_34 [i_0 - 4] [i_1] = ((/* implicit */unsigned char) arr_31 [i_8 - 2] [i_0 + 3]);
                        arr_35 [i_1] [i_5] [i_0] [i_1] = ((/* implicit */short) ((long long int) arr_16 [i_0] [i_1]));
                        arr_36 [i_0] [i_1] [3U] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(1359288944)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 - 3] [i_0 - 4] [i_0 + 2] [i_0 - 4]))) : (arr_30 [i_0 + 3] [i_0 + 3] [i_1])));
                    }
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */int) (short)-32767);
                        var_26 = ((/* implicit */int) ((unsigned char) var_6));
                        var_27 += ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (2922872502213121348ULL)))) ? (((arr_2 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [8] [i_7] [i_9])) < (((/* implicit */int) arr_24 [(short)7] [i_7] [(short)7] [i_9] [11LL] [(short)7])))))));
                        var_28 |= ((/* implicit */unsigned char) arr_14 [i_0 - 2] [i_0 + 3] [i_9]);
                        arr_39 [i_0 - 4] [i_1] [i_0 - 3] [i_0 - 3] [i_0 - 1] [1ULL] [i_0] = ((/* implicit */unsigned short) 6393122999639981092ULL);
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        var_29 *= ((/* implicit */unsigned char) (~(((arr_25 [i_5] [i_0] [i_0]) >> (((-6732680343858056781LL) + (6732680343858056838LL)))))));
                        var_30 = ((/* implicit */unsigned char) arr_37 [i_0] [i_0] [12LL] [i_0] [i_5] [i_1] [i_10]);
                    }
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        arr_44 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) var_14)));
                        arr_45 [i_0] [i_0] [(_Bool)1] [i_7] [i_1] = ((/* implicit */unsigned int) arr_23 [i_1] [i_0] [i_1] [i_0]);
                        var_31 ^= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_31 [i_5] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0] [(unsigned char)13] [i_0] [(unsigned char)13] [i_0]))) : (arr_11 [i_1] [i_1]))));
                    }
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)128));
                        arr_48 [(unsigned short)0] [i_1] [(unsigned short)0] [i_1] = ((/* implicit */long long int) ((unsigned long long int) 15199185269200515904ULL));
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0 - 4] [(signed char)1])))))));
                        var_34 += ((/* implicit */unsigned char) (-(arr_46 [(short)8] [i_0 + 3] [i_0 - 4] [i_0 + 2])));
                    }
                    for (unsigned char i_13 = 3; i_13 < 19; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) (unsigned short)10507))))));
                        var_36 ^= ((/* implicit */long long int) (short)-32767);
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))));
                        var_38 = (-(((((/* implicit */_Bool) arr_31 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) 4294967282U)) : (arr_42 [i_1] [i_1] [i_5] [i_1]))));
                    }
                    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) arr_10 [i_5]))));
                }
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    var_40 = ((/* implicit */unsigned char) (~((((-(arr_25 [i_0] [i_1] [i_1]))) + (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_1] [i_0] [i_0 + 1])))))));
                    arr_55 [(unsigned short)5] [i_1] [(unsigned short)5] [i_1] [16ULL] = ((/* implicit */long long int) 4037986899U);
                    arr_56 [i_0] [i_0] [(short)17] [i_1] [(short)17] = ((/* implicit */short) (-(((unsigned long long int) var_15))));
                }
                /* vectorizable */
                for (long long int i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    var_41 = ((/* implicit */unsigned long long int) (~(arr_28 [i_1] [i_0 - 3])));
                    var_42 = ((/* implicit */int) arr_54 [(unsigned short)3] [1LL] [(unsigned short)3] [16ULL] [(unsigned short)3] [(unsigned short)3]);
                    var_43 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_49 [i_0 + 1] [i_0 + 3] [i_0 + 2] [i_0] [(unsigned char)10] [i_0 - 4]))));
                    var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) (unsigned short)20115))));
                }
                for (signed char i_16 = 1; i_16 < 19; i_16 += 3) 
                {
                    arr_61 [i_0] [i_0] [i_1] [i_5] [(_Bool)1] = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */int) arr_0 [11ULL])) > (((/* implicit */int) arr_60 [i_16 + 2] [(unsigned char)14] [i_0 + 1] [i_0 + 1]))))) ^ (((/* implicit */int) arr_49 [(unsigned short)6] [(unsigned short)7] [7ULL] [i_5] [19] [(unsigned short)6])))) & ((-(((/* implicit */int) (short)17655))))));
                    arr_62 [i_0] [i_1] [i_5] [i_16] = ((/* implicit */unsigned long long int) arr_22 [i_1] [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 4; i_17 < 20; i_17 += 1) 
                    {
                        var_45 = ((/* implicit */_Bool) (unsigned short)0);
                        var_46 = ((/* implicit */unsigned char) max((((max((((/* implicit */unsigned long long int) (unsigned short)58759)), (10886197496328263010ULL))) ^ (((/* implicit */unsigned long long int) min((arr_25 [11U] [i_5] [i_0]), (((/* implicit */long long int) var_7))))))), (((/* implicit */unsigned long long int) (unsigned char)255))));
                    }
                }
            }
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_19 = 1; i_19 < 21; i_19 += 4) 
            {
                var_47 = ((/* implicit */_Bool) arr_53 [(_Bool)1] [i_18] [i_0]);
                var_48 += ((((/* implicit */_Bool) 281474976677888ULL)) ? (((/* implicit */unsigned long long int) 1107799389U)) : (15019220002869626891ULL));
            }
            arr_71 [i_0] [i_18] [(_Bool)1] = ((/* implicit */unsigned char) (~(((3252680214U) << (((/* implicit */int) ((_Bool) arr_33 [4LL])))))));
            var_49 = ((/* implicit */unsigned long long int) min((((signed char) arr_41 [i_0] [i_0 - 4] [i_0 - 4] [i_0 + 1] [i_0 - 3] [i_0 - 4] [i_0 + 3])), (min((arr_41 [i_18] [i_0 - 3] [i_0 - 4] [i_0 + 1] [i_0 - 3] [i_0] [i_0 + 3]), (arr_41 [i_0] [4] [i_0 - 4] [i_0 + 1] [i_0 - 3] [(unsigned short)17] [i_0 + 3])))));
        }
        var_50 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) ? (min((3427524070839924707ULL), (3ULL))) : (((/* implicit */unsigned long long int) ((long long int) 15199185269200515905ULL))))) < (((/* implicit */unsigned long long int) arr_66 [i_0 + 3] [i_0 + 3] [i_0 - 3]))));
    }
    var_51 = ((/* implicit */unsigned short) var_8);
}
