/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210977
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
    var_17 = ((/* implicit */int) var_14);
    var_18 = max((((long long int) var_0)), (((/* implicit */long long int) var_15)));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */short) (!((_Bool)1)))))))) != (-1927729996458600393LL)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0])) + (((/* implicit */int) arr_3 [i_0 - 1] [i_0]))));
        var_21 ^= ((/* implicit */int) arr_0 [i_0 + 3]);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) /* same iter space */
        {
            arr_7 [i_0] [i_0] [13ULL] = ((/* implicit */unsigned short) (!((_Bool)1)));
            /* LoopSeq 4 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                arr_10 [i_0] [i_1 + 1] = (((_Bool)1) ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 - 1]));
                var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 3]))) | (arr_9 [i_2] [i_0 - 2] [i_0] [12LL])));
                var_23 = ((/* implicit */long long int) arr_8 [i_0]);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_14 [i_0] [i_0 + 3] = ((/* implicit */short) arr_2 [0ULL]);
                var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [7U]))) : (var_7)));
                var_25 ^= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_1])) : (((/* implicit */int) (_Bool)1))));
                var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1 - 2] [i_3] [i_3]))));
                var_27 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_3]))));
            }
            for (int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 2]))));
                arr_17 [i_4] [i_0] [(_Bool)1] = ((/* implicit */long long int) 127108622);
                var_29 = arr_11 [i_0];
            }
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 1; i_7 < 12; i_7 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) (-(((unsigned long long int) arr_20 [i_7] [i_5] [i_1]))));
                        var_31 ^= ((/* implicit */short) (_Bool)1);
                        var_32 = ((/* implicit */_Bool) ((short) arr_22 [i_0] [i_0] [i_5] [i_0] [i_7] [i_7 + 3]));
                        var_33 = ((/* implicit */unsigned long long int) ((var_3) <= (((((/* implicit */long long int) arr_22 [7ULL] [i_1] [i_5] [i_6] [i_5] [i_7])) & (var_3)))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        var_34 = ((((/* implicit */_Bool) (((_Bool)1) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_8])))))) ? (((((/* implicit */_Bool) 1175985187423630227LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31997))) : (6415350833193761439LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)73)) | (127108622)))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_1 - 1] [i_1 - 2] [i_6])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) -6848406698306967000LL)) && (((/* implicit */_Bool) arr_19 [i_1] [i_5] [i_6] [i_8])))))));
                    }
                    var_36 ^= ((/* implicit */short) (~(((/* implicit */int) ((short) var_12)))));
                }
                for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 1) 
                {
                    var_37 = ((/* implicit */unsigned short) ((unsigned int) arr_29 [i_0 + 3] [i_1] [i_5] [i_1] [i_5] [i_1 - 2]));
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) var_16))) / (((/* implicit */int) ((unsigned short) arr_2 [i_0])))));
                    var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0 + 1] [i_1 - 1] [i_1] [i_9 + 2])) || ((!(((/* implicit */_Bool) arr_28 [i_0] [i_1 + 1] [i_5] [i_9 - 1]))))));
                    var_40 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */long long int) arr_29 [i_0] [(short)5] [i_1 - 2] [i_1] [i_5] [i_9])) : (8198778978542070758LL)))) : (arr_9 [(unsigned short)1] [i_1] [i_5] [i_9])));
                }
                for (unsigned int i_10 = 1; i_10 < 14; i_10 += 3) 
                {
                    arr_32 [i_0] [i_0] [i_0] [i_1] &= ((/* implicit */unsigned char) arr_12 [i_0 - 1] [(short)0] [i_1] [i_10]);
                    var_41 = ((/* implicit */unsigned short) ((unsigned int) arr_18 [i_10] [i_10] [i_10 + 1]));
                    arr_33 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46896))) & (arr_9 [i_0] [i_1 - 1] [i_0] [14U])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [6] [i_5] [i_10]))) : (-3314059039722214788LL))) : (6848406698306966999LL)));
                    arr_34 [i_0] [i_1] [i_0] [8LL] [i_10 - 1] = ((/* implicit */short) (+(((((((/* implicit */int) var_6)) + (2147483647))) << (((var_16) - (1848288956816021040LL)))))));
                }
                arr_35 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_0 + 2]))));
            }
        }
        for (unsigned int i_11 = 2; i_11 < 14; i_11 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_12 = 2; i_12 < 13; i_12 += 3) 
            {
                for (unsigned char i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    {
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [0] [i_11] [i_12 + 2] [i_12 - 1] [6LL])))))));
                        arr_42 [i_0] = ((/* implicit */long long int) arr_16 [i_0 + 3] [2LL] [i_11 - 2] [i_0 + 3]);
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [(unsigned short)9] [i_0 + 2] [i_0 + 3] [i_11 + 1] [i_11 + 1] [i_11 - 1])) ? (arr_22 [i_0] [i_0 - 1] [i_0 + 2] [i_11 - 1] [i_11] [i_11]) : (((/* implicit */int) arr_24 [i_0] [i_11] [i_11 + 1] [i_0 + 2] [i_0]))));
        }
    }
    for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
    {
        arr_45 [i_14] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((arr_44 [i_14]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_44 [(unsigned char)6])))))));
        var_44 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_44 [i_14])) ^ (((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 127108622)) ? (-6415350833193761439LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55)))))))));
        var_45 = (~(((arr_44 [i_14]) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_14]))) : (1175985187423630227LL))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_15 = 0; i_15 < 17; i_15 += 3) 
        {
            var_46 = ((/* implicit */_Bool) max((var_46), ((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [5])))))))));
            var_47 = ((((/* implicit */_Bool) arr_47 [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_14]))) : (((((/* implicit */_Bool) (unsigned short)16352)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (10614543103073437204ULL))));
        }
        for (long long int i_16 = 0; i_16 < 17; i_16 += 3) 
        {
            arr_51 [i_16] [(unsigned char)2] [i_16] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_15)))));
            var_48 = ((/* implicit */signed char) min((var_2), (((/* implicit */unsigned short) (_Bool)1))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 3) 
        {
            for (unsigned int i_18 = 0; i_18 < 17; i_18 += 2) 
            {
                {
                    arr_56 [i_17] [6U] [i_18] = ((/* implicit */long long int) ((_Bool) var_2));
                    arr_57 [i_18] [i_17] [i_17] [13U] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((arr_47 [i_14] [i_17]), (-3314059039722214787LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1)))))) : (arr_52 [i_14] [i_18]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_14] [i_14])) ? (((/* implicit */int) arr_53 [i_14] [i_17] [i_18])) : (var_5)))) ? ((~(var_0))) : (((((/* implicit */_Bool) arr_50 [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (466562225871973242LL)))))));
                }
            } 
        } 
    }
    for (unsigned int i_19 = 0; i_19 < 10; i_19 += 1) 
    {
        arr_60 [i_19] [i_19] = ((/* implicit */long long int) ((int) ((arr_6 [i_19] [i_19] [i_19]) / (arr_47 [i_19] [i_19]))));
        var_49 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_59 [i_19])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_19] [i_19] [10] [i_19] [0ULL] [i_19] [i_19])))))) : (arr_25 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])));
        /* LoopNest 3 */
        for (unsigned char i_20 = 3; i_20 < 6; i_20 += 2) 
        {
            for (long long int i_21 = 0; i_21 < 10; i_21 += 4) 
            {
                for (long long int i_22 = 0; i_22 < 10; i_22 += 3) 
                {
                    {
                        var_50 = ((/* implicit */unsigned char) ((unsigned short) var_3));
                        var_51 = ((/* implicit */long long int) max((arr_0 [(short)2]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)200))) : (-5766072065562106467LL)))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_23 = 3; i_23 < 24; i_23 += 1) 
    {
        for (int i_24 = 2; i_24 < 24; i_24 += 3) 
        {
            for (long long int i_25 = 2; i_25 < 23; i_25 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_26 = 0; i_26 < 25; i_26 += 2) 
                    {
                        for (unsigned short i_27 = 3; i_27 < 24; i_27 += 2) 
                        {
                            {
                                var_52 = ((/* implicit */unsigned char) arr_72 [i_27 - 3]);
                                var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) ((((/* implicit */unsigned int) max((((/* implicit */int) ((3987981280982807676ULL) != (((/* implicit */unsigned long long int) 6415350833193761438LL))))), (((((/* implicit */int) var_14)) - (((/* implicit */int) var_6))))))) * (((((/* implicit */unsigned int) arr_69 [i_24 + 1] [11ULL])) | ((-(arr_79 [i_26]))))))))));
                                arr_80 [i_23] [i_27] [i_23] [i_23] [i_23] = ((/* implicit */long long int) arr_76 [i_23 - 3] [i_24 + 1] [i_25 - 2] [i_27 - 2]);
                                arr_81 [i_23 + 1] [i_24] [i_25 + 1] [(_Bool)1] [i_27] [i_26] [17LL] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))))), (arr_70 [i_23 - 2])));
                            }
                        } 
                    } 
                    var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_25 - 2] [i_24] [i_25 - 2] [i_25 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_71 [i_23 - 3] [i_25])) ? (((/* implicit */int) arr_78 [i_23] [14LL] [i_24 - 1] [10LL] [i_25] [i_25 + 1])) : (((/* implicit */int) var_2))))))) ? (arr_79 [22ULL]) : (((/* implicit */unsigned int) (+(arr_71 [i_24 - 2] [i_24 - 2])))))))));
                    arr_82 [i_23] [i_23 + 1] = ((/* implicit */long long int) arr_72 [i_24 - 2]);
                    var_55 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_76 [15LL] [i_24 + 1] [i_24] [i_24 - 2])), (0LL)))) ? (((/* implicit */long long int) arr_71 [i_23 - 2] [7LL])) : (arr_74 [(unsigned short)11])))) ? (arr_73 [i_23 + 1] [i_24] [i_25]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) var_6))), (arr_75 [i_23 - 2] [17] [i_24 - 2] [i_25 + 1]))))));
                }
            } 
        } 
    } 
}
