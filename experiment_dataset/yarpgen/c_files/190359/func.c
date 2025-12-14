/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190359
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */int) arr_1 [i_0]);
        var_19 = ((/* implicit */signed char) (-(var_13)));
    }
    for (signed char i_1 = 3; i_1 < 20; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_20 -= ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) (signed char)(-127 - 1))))) % (((/* implicit */int) min((arr_9 [i_4] [i_2] [i_2] [i_1]), (((/* implicit */unsigned short) var_15))))))));
                        arr_12 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)8989)), ((~(((/* implicit */int) (unsigned short)64142)))))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (max((((/* implicit */int) (_Bool)0)), ((-(1603558794)))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_5 = 4; i_5 < 19; i_5 += 4) 
                        {
                            var_22 = ((((((/* implicit */_Bool) ((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_15)), (var_0)))) : (((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1]))))))) == (((((((/* implicit */unsigned long long int) 1603558791)) >= (var_14))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))) : (((((/* implicit */_Bool) var_12)) ? (var_5) : (var_5))))));
                            var_23 = ((/* implicit */unsigned int) max((((6693326534915346782ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10072))))), (((/* implicit */unsigned long long int) arr_10 [i_1 + 2] [i_1 + 2]))));
                            var_24 = ((/* implicit */long long int) min((((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))), (((/* implicit */unsigned int) arr_4 [i_1]))));
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            var_25 += ((/* implicit */unsigned short) min((max(((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_7 [i_1] [i_1 - 2] [i_2]))), (((/* implicit */unsigned long long int) ((short) (short)-10073))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 3]))) : (max((var_17), (((/* implicit */long long int) (unsigned short)56890)))))))));
                            var_26 = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) << (((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_1] [i_2])), (var_2)))) - (19)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) << (((((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_1] [i_2])), (var_2)))) - (19))) - (2352))))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_11))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_28 += ((/* implicit */unsigned int) 321504136);
                            var_29 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 11753417538794204833ULL)) ? (((/* implicit */int) (unsigned short)46980)) : (((/* implicit */int) (signed char)-114)))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 19; i_8 += 4) 
                        {
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (_Bool)1))));
                            arr_26 [i_1] [i_1] [i_3] [i_4] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)16137)), (var_13)))) ^ (max((arr_21 [i_8] [i_1] [i_1] [i_1] [i_8] [i_1] [i_8 + 1]), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_3])))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 4; i_9 < 21; i_9 += 1) 
                        {
                            arr_29 [i_1 + 2] [i_9] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))) % (616598811U)));
                            arr_30 [i_1] [i_1] [i_1] [i_1 + 2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned short)56547))) ? ((+(3384289738U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) : (((var_11) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_12)) ^ (var_0)))) : (var_14)))));
                            var_31 = ((/* implicit */unsigned int) (-(max((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))), (var_13)))));
                            var_32 |= ((/* implicit */unsigned int) max((-7222597733031833937LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_23 [i_2]))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)55175)) : (((/* implicit */int) (signed char)-106)))) : (((((/* implicit */_Bool) (short)9432)) ? (268435452) : (((/* implicit */int) (signed char)-28)))))))));
                            arr_31 [i_1] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1 + 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)42))))), (((/* implicit */long long int) arr_14 [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1 - 2]))))) ? (max(((+(((/* implicit */int) arr_6 [i_1] [i_1] [i_4])))), (((/* implicit */int) var_11)))) : (((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_1))))))));
                        }
                    }
                } 
            } 
        } 
        var_33 += ((signed char) ((signed char) (~(((/* implicit */int) (unsigned short)56912)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            {
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((-321504127) + (2147483647))) >> (((-6464588375979527006LL) + (6464588375979527036LL)))))))) ? (min((arr_8 [i_11] [i_11] [i_11] [i_11]), (((/* implicit */long long int) var_12)))) : (((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */long long int) arr_9 [i_11] [i_10] [i_11] [i_10])), (1058131966314630339LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_17))))))))));
                /* LoopSeq 2 */
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (signed char)(-127 - 1)))));
                    var_36 = var_16;
                }
                for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    arr_43 [i_10] [i_11] [i_13] [i_13] = ((/* implicit */unsigned short) min((17363794340859223015ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        arr_46 [i_10] [i_11] [1ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)60660))) | (var_17)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_8)) : ((+(var_12)))))) : (((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8645)))))) : (var_0)))));
                        var_37 -= ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (3336024426U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-106))))) : (var_0)));
                    }
                }
                var_38 += ((/* implicit */unsigned short) var_13);
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    for (int i_16 = 0; i_16 < 16; i_16 += 1) 
                    {
                        {
                            var_39 -= ((/* implicit */signed char) max((((((/* implicit */int) (signed char)80)) >= (((/* implicit */int) (signed char)(-127 - 1))))), (((_Bool) (short)32759))));
                            /* LoopSeq 2 */
                            for (short i_17 = 0; i_17 < 16; i_17 += 2) 
                            {
                                arr_54 [i_10] [i_11] [i_11] [i_16] [i_16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_17))))));
                                var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) * (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (signed char)28)))))));
                            }
                            for (unsigned short i_18 = 0; i_18 < 16; i_18 += 1) 
                            {
                                arr_58 [i_10] [i_11] [i_15] [i_16] [i_18] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_23 [i_15]))))), (((arr_23 [i_11]) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_10])))))));
                                var_41 = ((/* implicit */unsigned short) (~(min((min((((/* implicit */unsigned long long int) (unsigned short)4114)), (4004093082681048254ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_7))))))));
                                arr_59 [i_10] [(unsigned short)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_10])) ^ (((/* implicit */int) ((((/* implicit */int) arr_28 [i_15])) >= (((/* implicit */int) (unsigned short)11095)))))))) ? (min((((/* implicit */unsigned int) var_12)), (var_0))) : (((/* implicit */unsigned int) (+(var_13))))));
                            }
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) | (4004093082681048254ULL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)117)), ((unsigned short)17174)))) : (((/* implicit */int) (signed char)63))))) ? (max((min((var_9), (var_9))), (((/* implicit */long long int) arr_0 [i_10])))) : (((/* implicit */long long int) ((/* implicit */int) ((var_13) == (((/* implicit */int) arr_9 [i_15] [i_11] [i_15] [i_15]))))))));
                            var_43 += ((/* implicit */unsigned long long int) arr_6 [i_16] [i_15] [i_11]);
                            /* LoopSeq 2 */
                            for (unsigned int i_19 = 2; i_19 < 14; i_19 += 2) 
                            {
                                var_44 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_19 - 1] [i_19 + 1] [i_19 - 2] [i_19 + 2] [i_19 - 1]))))) ? (var_7) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_34 [i_10])), (((((/* implicit */int) var_16)) | (((/* implicit */int) (unsigned short)49677)))))))));
                                var_45 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_24 [i_19 + 2] [i_19] [i_19 + 2] [i_19 - 2] [i_19 + 2] [i_19] [i_19 + 2])) ? (arr_24 [i_19 + 2] [i_19] [i_19 - 1] [i_19] [i_19] [i_19 - 2] [i_19 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_10] [i_15] [10ULL]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_10] [i_11] [i_15])) * (((/* implicit */int) (unsigned short)0)))))));
                                arr_63 [i_10] [i_10] = ((/* implicit */long long int) var_0);
                            }
                            for (int i_20 = 1; i_20 < 12; i_20 += 1) 
                            {
                                var_46 = ((/* implicit */_Bool) (-(min((var_12), (((1073741568) | (((/* implicit */int) arr_33 [i_10]))))))));
                                arr_66 [i_10] [3LL] [i_15] [i_16] [i_20] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65535)), (9223372036854775807LL)))) ? (max((((/* implicit */long long int) var_6)), (var_17))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))))) / (max((var_3), (((/* implicit */long long int) arr_50 [i_20 + 2] [i_20 + 3] [i_20] [(unsigned short)9]))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_47 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-29)), (var_16)))) && ((!(((/* implicit */_Bool) (unsigned short)50039)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(var_13)))), (((unsigned long long int) var_4)))))));
}
