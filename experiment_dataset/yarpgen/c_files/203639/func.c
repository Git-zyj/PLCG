/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203639
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) ((signed char) (((_Bool)0) || (((/* implicit */_Bool) 1508136504U)))));
        var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)42), ((signed char)-114))))) : (((((/* implicit */_Bool) 20ULL)) ? (441673456U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) <= (arr_1 [(_Bool)1]))) ? ((+(3493869891U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 10; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3] [i_2 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_1] [i_2 + 1]))))), (((((/* implicit */_Bool) arr_2 [i_1] [i_2 - 1])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 - 2] [i_2 - 1])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 3) 
                    {
                        var_23 &= ((/* implicit */unsigned short) (_Bool)1);
                        var_24 = ((/* implicit */unsigned long long int) ((unsigned int) var_3));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_16 [i_1] [i_1] [(short)9] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_3 [i_3])), (var_16))), (min((((/* implicit */unsigned int) var_14)), (var_8)))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (max((((/* implicit */int) var_0)), (((((/* implicit */int) (unsigned short)26)) + (((/* implicit */int) (unsigned char)192))))))));
                        var_25 *= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 1])))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_7])) ? (((/* implicit */int) arr_10 [i_1] [i_6] [i_7])) : (arr_9 [i_1] [i_6] [i_7] [i_8])))) ? ((-(((/* implicit */int) arr_22 [i_8] [(_Bool)1] [i_8] [(unsigned short)7])))) : (arr_9 [i_8] [i_7] [i_6] [i_1])));
                        var_27 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) -3985587943111696892LL)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) 3746192165U))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_17 [i_8]))) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) arr_17 [10ULL]))));
                        var_29 = ((/* implicit */long long int) ((((arr_12 [i_7] [i_8] [i_7] [(signed char)3] [i_1]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_7] [i_7] [i_8])))) * (((((((/* implicit */int) (signed char)-123)) & (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) arr_10 [i_1] [i_7] [i_7]))))));
                        var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned char)224), (((/* implicit */unsigned char) (_Bool)0)))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
    {
        var_31 = ((/* implicit */short) var_6);
        arr_28 [i_9] = ((/* implicit */long long int) max((var_3), (((/* implicit */signed char) ((_Bool) arr_27 [i_9])))));
        arr_29 [i_9] [4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_26 [i_9] [i_9])))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9]))) ^ (12171085937982610815ULL)))) ? (((/* implicit */int) ((2681043317744298701ULL) < (((/* implicit */unsigned long long int) 548775143U))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)11774)) == (((/* implicit */int) var_4))))))) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                {
                    var_32 = ((/* implicit */short) (+(((/* implicit */int) ((short) var_12)))));
                    var_33 = ((/* implicit */short) arr_27 [i_10]);
                    arr_35 [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-124))));
                }
            } 
        } 
        arr_36 [i_9] [i_9] = ((/* implicit */short) (((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (var_9)))))) >= (((/* implicit */int) var_3))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 2) 
    {
        var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)230)) ? (3746192163U) : (2046922480U))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_34 [i_12] [i_12])) : (((/* implicit */int) (signed char)127)))))));
        var_35 = ((/* implicit */unsigned short) arr_27 [i_12]);
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            for (signed char i_14 = 2; i_14 < 16; i_14 += 1) 
            {
                {
                    var_36 = ((/* implicit */unsigned int) (unsigned char)25);
                    arr_45 [i_13] |= ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-124))))) ? (((/* implicit */unsigned long long int) 548775131U)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (21ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_37 [(unsigned char)9])), (var_17))))) : (min((((/* implicit */unsigned long long int) (unsigned char)29)), (arr_26 [i_12] [i_13]))))));
                }
            } 
        } 
    }
    var_37 |= ((/* implicit */long long int) var_13);
    /* LoopNest 3 */
    for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 3) 
    {
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 1; i_17 < 12; i_17 += 1) 
            {
                {
                    var_38 &= ((/* implicit */short) ((unsigned short) ((unsigned int) var_10)));
                    var_39 ^= ((/* implicit */_Bool) max(((-(max((var_15), (var_8))))), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (7363254295198997875ULL)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((21ULL) >> (((/* implicit */int) (signed char)63))))) && (((/* implicit */_Bool) (+(arr_57 [i_15] [i_16 + 1] [i_17 - 1] [i_17] [i_15]))))));
                            var_41 = ((4294967290U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))));
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_4))))), (max(((unsigned char)1), (((/* implicit */unsigned char) arr_56 [i_15] [i_16] [(_Bool)1])))))))) - ((+(261503921532799477ULL)))));
                            arr_60 [i_16] [i_15] [i_18] [i_19] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_14))));
                        }
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_13))) || (((/* implicit */_Bool) max((arr_38 [i_15]), (((/* implicit */unsigned long long int) -2))))))))) & (max((((/* implicit */unsigned long long int) var_3)), (((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121)))))))));
                        var_44 = ((/* implicit */unsigned int) (unsigned char)211);
                        var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) (unsigned char)12))));
                    }
                    for (long long int i_20 = 0; i_20 < 13; i_20 += 1) 
                    {
                        arr_63 [1U] [i_15] [i_17 - 1] [i_15] = ((/* implicit */_Bool) var_12);
                        var_46 = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_9)))));
                        var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) arr_62 [0U] [i_17 + 1] [i_15] [0U])) | (((/* implicit */int) var_13)))) : (min((-258088491), (((/* implicit */int) var_11)))))), (((258088490) ^ (((/* implicit */int) (signed char)-119)))))))));
                    }
                    var_48 += ((/* implicit */signed char) (unsigned char)4);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_21 = 3; i_21 < 23; i_21 += 2) 
    {
        for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 4) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                {
                    var_49 -= ((/* implicit */unsigned short) arr_66 [13LL]);
                    var_50 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) 213578424)), (((((/* implicit */_Bool) arr_65 [i_21])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2068134212994110776ULL)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 0; i_24 < 24; i_24 += 2) 
                    {
                        for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 2) 
                        {
                            {
                                var_51 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_70 [i_21])) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) var_1)))))));
                                var_52 *= ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_53 = ((/* implicit */_Bool) (+(max((3300729528U), (548775104U)))));
}
