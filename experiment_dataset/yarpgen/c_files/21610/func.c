/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21610
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)102))) != (4024293599924142466LL)))) + (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-111)))))));
        var_10 ^= ((/* implicit */short) (_Bool)1);
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_11 += ((/* implicit */unsigned char) (-(((arr_5 [i_1]) + (arr_5 [i_1])))));
        var_12 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (arr_5 [i_1])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)110))))) : ((-(arr_5 [i_1]))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            for (unsigned char i_3 = 3; i_3 < 13; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_5 [i_2]))) <= (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)19), ((signed char)-111))))))), ((!(((/* implicit */_Bool) (signed char)117))))));
                    var_14 = ((/* implicit */unsigned char) (_Bool)1);
                    var_15 = ((/* implicit */short) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) == (15039229149415500727ULL)))), ((unsigned char)120)));
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_1])), (var_1)))) + (arr_7 [i_1] [i_1] [i_1])));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) (_Bool)1);
    }
    /* LoopSeq 2 */
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
    {
        arr_13 [(unsigned short)2] [i_4] = ((unsigned int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((((/* implicit */int) (unsigned char)79)) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-111)), ((unsigned char)160))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (short)-32753))))))), (((/* implicit */int) (short)-14044))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) arr_20 [(signed char)18]);
                                arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_4] [i_4] [(short)2] [i_8 - 2] [i_6])) << (((((/* implicit */int) arr_21 [i_4] [8LL] [8LL] [i_7] [i_8 + 1])) - (185)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_8 - 1] [i_7] [i_5])) ? (min((((/* implicit */unsigned int) 65535)), (var_8))) : (max((arr_12 [i_4]), (arr_20 [i_8]))))))));
                                var_19 = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) arr_18 [i_5] [i_7] [i_5])) ? (((/* implicit */long long int) arr_20 [i_5])) : (arr_24 [i_4] [i_5] [i_7] [i_8 - 1]))))) + ((~(max((((/* implicit */long long int) (signed char)0)), (-7290469920611637379LL)))))));
                                var_20 = ((/* implicit */_Bool) max((arr_24 [i_4] [1] [i_4] [i_4]), (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_8 + 1] [i_8 - 2])))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)109))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)79)))))) : (((unsigned int) 1029240661U))));
                            }
                        } 
                    } 
                    arr_26 [i_4] [i_5] [(_Bool)1] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) max(((unsigned char)0), (var_3))))));
                }
            } 
        } 
        arr_27 [i_4] = ((/* implicit */unsigned char) (-((-(max((4294967295U), (((/* implicit */unsigned int) arr_11 [(signed char)15] [(signed char)15]))))))));
    }
    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_3))))));
                    arr_34 [i_9] [(unsigned char)16] [i_11] = ((/* implicit */signed char) ((arr_20 [i_11]) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_11] [i_11] [i_10] [i_9]))) * (arr_20 [i_11])))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) * (925957524U))) : ((+(925957528U)))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)47572)) >> ((+(((/* implicit */int) (_Bool)1))))));
                        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_10] [i_11]))));
                    }
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned char i_13 = 4; i_13 < 18; i_13 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_14 = 1; i_14 < 18; i_14 += 2) 
            {
                var_26 = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) arr_24 [i_9] [(signed char)10] [(signed char)10] [i_14])) ? (arr_33 [i_9] [i_13] [i_13] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_13]))))) | (((/* implicit */unsigned long long int) ((arr_39 [i_9] [i_13] [i_14 + 2] [i_14]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)38768)))))))));
                var_27 &= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_14] [i_13])))))));
            }
            /* vectorizable */
            for (short i_15 = 0; i_15 < 20; i_15 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (signed char)-103))))));
                arr_44 [i_15] [i_13] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_2))))));
                /* LoopSeq 1 */
                for (unsigned char i_16 = 1; i_16 < 19; i_16 += 2) 
                {
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (unsigned short)38765))));
                    arr_47 [i_9] [i_9] [i_15] [i_9] = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_13] [2LL]))) + (arr_23 [i_9] [i_13 + 1] [i_15] [(signed char)14] [(unsigned short)2] [i_16 - 1])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 1; i_17 < 19; i_17 += 1) 
                    {
                        var_30 = arr_16 [i_13 - 4] [i_13 - 1] [i_17];
                        arr_52 [(signed char)14] [i_16 - 1] [i_15] [i_13] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17963)) || (((/* implicit */_Bool) arr_23 [i_9] [i_13] [(unsigned char)10] [i_15] [(unsigned char)10] [i_17]))))) != (((((/* implicit */int) (unsigned char)101)) * (((/* implicit */int) (unsigned char)224))))));
                        var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_36 [i_17 - 1] [i_17] [(signed char)9] [i_17 - 1]))));
                    }
                    var_32 = (!(((/* implicit */_Bool) -5748791313610306333LL)));
                }
            }
            var_33 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)-62)) % (((/* implicit */int) (unsigned char)119))));
        }
        for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) 
        {
            arr_55 [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-118)))))));
            var_34 = ((/* implicit */signed char) arr_46 [i_18] [i_9] [i_18] [i_18] [i_18]);
        }
        for (unsigned short i_19 = 0; i_19 < 20; i_19 += 1) 
        {
            var_35 ^= ((/* implicit */short) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_9] [i_9] [i_19] [1ULL])))));
            var_36 = max((((arr_33 [i_9] [i_19] [i_19] [i_19]) - (arr_33 [i_9] [i_19] [i_9] [i_9]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-111))) : (-16LL)))));
            var_37 = ((/* implicit */unsigned int) max(((unsigned short)47572), (((/* implicit */unsigned short) (signed char)121))));
            var_38 = ((/* implicit */unsigned char) (signed char)-111);
            var_39 |= ((/* implicit */signed char) 7916090395332333084ULL);
        }
        for (long long int i_20 = 1; i_20 < 19; i_20 += 2) 
        {
            arr_64 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-23583))))) ? (((((/* implicit */int) arr_50 [i_20 + 1] [9U] [i_9] [i_20 - 1] [(unsigned char)11] [i_9])) | (((/* implicit */int) arr_37 [i_20 - 1] [i_9])))) : ((~(((/* implicit */int) arr_50 [i_9] [i_20] [i_9] [(signed char)19] [i_20] [i_9]))))));
            /* LoopNest 2 */
            for (unsigned char i_21 = 1; i_21 < 17; i_21 += 1) 
            {
                for (unsigned char i_22 = 0; i_22 < 20; i_22 += 3) 
                {
                    {
                        arr_72 [1ULL] [i_21] [1ULL] [i_9] [5LL] [19ULL] = ((/* implicit */unsigned short) (short)-32766);
                        arr_73 [i_22] [i_9] [i_20] [(unsigned char)14] [(short)0] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_28 [i_20 - 1] [i_21 + 3])) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) arr_28 [i_20 - 1] [i_21 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_22] [i_21] [i_20] [i_20] [i_9]))))))))));
                        var_40 = ((/* implicit */long long int) (short)12335);
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((5748791313610306333LL) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_20 - 1] [i_20 - 1])))))) ? (571781049U) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_36 [i_9] [i_20 + 1] [i_20 + 1] [i_21 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_20 - 1] [i_20 + 1])))))))));
                    }
                } 
            } 
            var_42 = ((/* implicit */unsigned long long int) (((~((-(514597210U))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -6018493893060623383LL)) && (((/* implicit */_Bool) arr_29 [i_20 - 1]))))))));
            var_43 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-27157))) + (1543186278U)))) == (arr_38 [i_20 - 1] [i_20 - 1] [i_20 + 1])));
        }
    }
    var_44 = ((/* implicit */unsigned short) (short)12325);
    var_45 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_9))))));
    /* LoopSeq 2 */
    for (unsigned int i_23 = 0; i_23 < 16; i_23 += 4) 
    {
        arr_78 [i_23] [i_23] = ((/* implicit */unsigned short) (-(((arr_75 [i_23]) / (arr_75 [i_23])))));
        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) var_9))));
        arr_79 [i_23] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */long long int) var_6)), (-6018493893060623407LL))), (((/* implicit */long long int) (signed char)110)))))));
    }
    for (unsigned short i_24 = 3; i_24 < 13; i_24 += 1) 
    {
        var_47 = ((/* implicit */short) var_7);
        var_48 = ((/* implicit */unsigned short) arr_53 [(short)18]);
        var_49 &= ((/* implicit */signed char) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
    }
}
