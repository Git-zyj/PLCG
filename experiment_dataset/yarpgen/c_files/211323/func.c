/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211323
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
    var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */short) var_2)), (((short) (~(var_9))))));
    var_13 = ((/* implicit */short) min((max((((unsigned int) 1700892658080514646ULL)), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) var_11))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_1 - 1])))));
            var_15 = (unsigned char)88;
            var_16 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            arr_5 [(signed char)13] [i_1] [i_1 - 1] = ((/* implicit */unsigned short) arr_4 [i_0] [(unsigned char)2]);
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [(short)11] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) max((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))), (var_11)))), (arr_0 [i_0])));
            arr_10 [i_0 + 3] [i_2] = ((/* implicit */unsigned int) arr_1 [i_0]);
        }
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_15 [i_3] [7ULL] [i_3] [i_0 + 1])) | (((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 1]))))));
                var_18 = ((/* implicit */long long int) arr_11 [i_4] [i_3] [i_0 + 1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    arr_18 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_8))));
                    var_19 = ((/* implicit */signed char) arr_12 [1]);
                    arr_19 [i_3] [4ULL] [i_0] [i_3] = arr_3 [5ULL] [i_3];
                    var_20 = ((/* implicit */unsigned char) var_11);
                    arr_20 [i_3] [i_4] [i_3] [i_0 - 1] [i_3] = ((/* implicit */short) (+(3180323227930538294LL)));
                }
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) (_Bool)1);
                    var_22 = ((/* implicit */long long int) var_10);
                    arr_24 [i_0] [i_0] [i_3] [i_6] = ((/* implicit */short) min((((((((/* implicit */int) ((signed char) var_7))) + (2147483647))) << (((((long long int) var_8)) - (238LL))))), (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= (-1125555696)))), (var_8))))));
                }
                var_23 = ((/* implicit */short) var_10);
            }
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_24 = ((/* implicit */long long int) 1046254141951417666ULL);
                var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((var_10), (((/* implicit */unsigned char) (_Bool)1))))))) / ((-(min((-3963339520848713284LL), (((/* implicit */long long int) 391849926))))))));
            }
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                arr_32 [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_2 [(short)7])) == (((/* implicit */int) var_7)))))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(short)5] [(short)5] [(short)5] [(short)8]))) | (arr_23 [i_0 + 3] [i_0] [i_0] [i_3] [i_0 + 4] [i_8])));
                arr_33 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
            }
            /* vectorizable */
            for (unsigned char i_9 = 3; i_9 < 10; i_9 += 3) 
            {
                var_27 = ((/* implicit */unsigned int) var_2);
                var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_29 [i_0 - 1] [i_9 - 2] [i_9 - 1] [i_9 + 1]))));
                var_29 = (!(((var_3) > (((/* implicit */int) arr_4 [i_0] [(unsigned short)3])))));
                var_30 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_31 [(signed char)12] [i_3] [i_3] [i_3]))))) > (((var_6) / (((/* implicit */long long int) ((/* implicit */int) (short)8103)))))));
            }
            arr_36 [i_3] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (_Bool)1)), (-7686732965677647461LL)));
            var_31 = ((/* implicit */long long int) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [(short)4] [(short)4]))) | (arr_8 [(unsigned short)3] [(unsigned short)3]))), (((/* implicit */unsigned long long int) ((unsigned char) 6526321594263714628ULL))))), (((/* implicit */unsigned long long int) (_Bool)1))));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    {
                        arr_41 [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_17 [i_0] [i_3] [i_10] [i_11] [i_0])), (arr_3 [i_0] [i_0 - 1])));
                        var_32 = ((/* implicit */int) arr_34 [i_3]);
                        var_33 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((776905338401263282ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (_Bool)1)))))))));
                        arr_42 [i_0] [i_3] [8U] [i_0 + 2] [i_0] [i_0] = ((/* implicit */long long int) -391849935);
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned char) ((unsigned short) var_4));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) (!((_Bool)1)))) + (max(((-(737405614))), ((~(((/* implicit */int) (signed char)15))))))));
                            arr_51 [i_3] [i_3] = ((/* implicit */_Bool) max((arr_46 [i_3] [i_13] [i_14]), (((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) (unsigned short)3751))))))));
                            arr_52 [i_0] [i_3] [i_12] [i_12] [9ULL] = (+(((((/* implicit */_Bool) arr_40 [i_0 + 1] [i_0 + 1] [i_13] [i_3])) ? ((~(((/* implicit */int) (unsigned short)50936)))) : (((/* implicit */int) var_1)))));
                        }
                    } 
                } 
            }
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) /* same iter space */
            {
                var_36 = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (!((_Bool)1)))))) || (((/* implicit */_Bool) var_0))));
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    for (short i_17 = 1; i_17 < 11; i_17 += 4) 
                    {
                        {
                            arr_64 [i_3] [i_3] [i_15] [i_16] [i_17 - 1] = (_Bool)1;
                            var_37 = ((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (arr_53 [i_0] [i_0 + 2] [i_0 + 3] [i_17 + 1]))))));
                            var_38 = ((/* implicit */unsigned char) max((((/* implicit */short) arr_4 [i_15] [i_16])), (min((((/* implicit */short) ((_Bool) arr_34 [i_3]))), ((short)-7764)))));
                        }
                    } 
                } 
                arr_65 [i_0] [i_3] [i_15] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_50 [i_0] [i_0] [i_0 + 3] [i_0] [i_3])))), (((/* implicit */int) ((short) var_6)))));
            }
            for (unsigned char i_18 = 0; i_18 < 14; i_18 += 2) /* same iter space */
            {
                var_39 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) var_8)), (((((/* implicit */int) var_10)) % (((/* implicit */int) (short)-31195))))))));
                arr_69 [i_0] [i_3] [i_18] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), ((((_Bool)1) ? (13002630473509203221ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
                arr_70 [i_0 + 3] [i_3] [i_3] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (((min((-7021667966027952369LL), (((/* implicit */long long int) (short)-16686)))) / (((/* implicit */long long int) ((/* implicit */int) (short)-31295)))))));
            }
            for (unsigned char i_19 = 0; i_19 < 14; i_19 += 2) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3790)) | (((/* implicit */int) (unsigned short)30855))));
                arr_74 [i_3] [i_3] [i_19] = ((/* implicit */unsigned int) arr_73 [i_0] [i_3] [i_3]);
                /* LoopSeq 1 */
                for (int i_20 = 0; i_20 < 14; i_20 += 3) 
                {
                    arr_77 [i_20] [i_3] [i_3] [i_0 + 1] = ((/* implicit */short) max(((~(((/* implicit */int) ((signed char) (unsigned char)183))))), (((/* implicit */int) arr_12 [(unsigned short)3]))));
                    var_41 = ((/* implicit */long long int) var_4);
                }
            }
        }
        /* LoopSeq 2 */
        for (unsigned int i_21 = 0; i_21 < 14; i_21 += 4) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned short) ((6526321594263714628ULL) << (((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (((short) (unsigned char)130))))) - (128)))));
            var_43 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((unsigned short) var_1))) == (((/* implicit */int) arr_38 [i_21] [i_21] [(signed char)6])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((((/* implicit */int) (short)-28759)) - (((/* implicit */int) (short)25108)))) >= (var_3))))));
            /* LoopNest 3 */
            for (unsigned short i_22 = 0; i_22 < 14; i_22 += 2) 
            {
                for (unsigned int i_23 = 0; i_23 < 14; i_23 += 3) 
                {
                    for (unsigned short i_24 = 3; i_24 < 12; i_24 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_23] [i_21] [i_23])) < (((/* implicit */int) var_10))));
                            var_45 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)141)), (max((((/* implicit */unsigned short) arr_17 [i_0] [(_Bool)1] [i_22] [(_Bool)1] [4ULL])), ((unsigned short)18512)))));
                        }
                    } 
                } 
            } 
            var_46 = var_6;
        }
        /* vectorizable */
        for (unsigned int i_25 = 0; i_25 < 14; i_25 += 4) /* same iter space */
        {
            arr_92 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
            /* LoopSeq 1 */
            for (unsigned int i_26 = 0; i_26 < 14; i_26 += 3) 
            {
                arr_96 [i_26] [i_26] [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_7))))));
                /* LoopNest 2 */
                for (unsigned short i_27 = 0; i_27 < 14; i_27 += 2) 
                {
                    for (signed char i_28 = 0; i_28 < 14; i_28 += 2) 
                    {
                        {
                            arr_103 [i_28] [i_26] [i_26] [i_26] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) var_6));
                            var_47 = ((/* implicit */unsigned short) ((unsigned char) -278609445));
                        }
                    } 
                } 
            }
            var_48 = ((/* implicit */_Bool) ((unsigned short) arr_59 [i_25] [i_25]));
        }
        arr_104 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)122))));
    }
    var_49 = ((/* implicit */unsigned long long int) var_5);
}
