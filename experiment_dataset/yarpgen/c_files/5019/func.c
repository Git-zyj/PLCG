/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5019
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
    var_20 = ((/* implicit */int) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_21 = ((((/* implicit */_Bool) min((min((var_15), (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) var_13))))) ? ((+((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))))) : (((((/* implicit */int) var_5)) & (((/* implicit */int) arr_2 [i_0])))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) (_Bool)1);
            arr_5 [i_0] = ((/* implicit */signed char) (+(5685088473818885255ULL)));
        }
        var_23 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870848U)) ? (-541435962191685790LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202)))))) && (((/* implicit */_Bool) var_12)))));
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */int) var_8);
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            arr_10 [i_2] [i_2] [i_3] = ((/* implicit */long long int) var_5);
            var_25 = ((/* implicit */signed char) 12761655599890666360ULL);
            var_26 = ((/* implicit */unsigned char) ((var_9) ^ (((/* implicit */int) (!(((/* implicit */_Bool) min((3758096448U), (((/* implicit */unsigned int) 1927493605))))))))));
        }
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            arr_13 [i_4] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (int i_6 = 2; i_6 < 20; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) arr_9 [i_2]);
                            var_28 += ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) (_Bool)1)))));
                            var_29 *= ((/* implicit */short) ((((-1715358192) | (((/* implicit */int) (unsigned char)255)))) / (((((/* implicit */_Bool) min((-1927493606), (((/* implicit */int) (unsigned short)46985))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) && (((/* implicit */_Bool) var_4)))))))));
                        }
                    } 
                } 
            } 
            var_30 = arr_15 [i_2];
        }
        arr_23 [i_2] = ((/* implicit */unsigned long long int) -1045245259);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 2) 
        {
            for (unsigned int i_9 = 1; i_9 < 23; i_9 += 3) 
            {
                {
                    var_31 = ((/* implicit */unsigned short) arr_12 [i_2] [i_2]);
                    arr_31 [i_9] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) min((arr_12 [i_2] [i_8]), (((/* implicit */unsigned long long int) arr_15 [i_9])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_2] [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [i_9])))))) ? (((/* implicit */int) arr_15 [i_9])) : (arr_26 [i_2]))))));
                    var_32 -= ((/* implicit */signed char) arr_8 [i_8] [i_8]);
                    /* LoopSeq 4 */
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_1 [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_9])) || ((_Bool)0))))))) ? (((/* implicit */int) arr_33 [i_2] [i_8] [i_9] [i_10])) : (((/* implicit */int) var_4))));
                        arr_34 [i_2] [i_9] [i_9] [i_10] = ((/* implicit */int) ((signed char) (-(((/* implicit */int) ((unsigned char) var_14))))));
                        var_34 = ((/* implicit */int) (~(0U)));
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (((((((!(((/* implicit */_Bool) arr_30 [i_10] [i_8] [i_8] [i_10])))) ? (((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)27))) : (1177168379313853073LL))) : (((var_19) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_8]))))))) + (9223372036854775807LL))) >> (((unsigned long long int) 0U)))))));
                        arr_35 [(signed char)1] [10U] [10U] [i_10] [i_9] = ((/* implicit */unsigned short) ((max((-1927493605), (((/* implicit */int) (_Bool)1)))) & (-1648586706)));
                    }
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_36 += ((/* implicit */unsigned char) ((((_Bool) ((unsigned int) arr_37 [i_11]))) ? ((-(var_6))) : (((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_2 [(signed char)10])) : (((/* implicit */int) var_5)))) << (((max((arr_1 [i_2]), (108106738))) - (108106718)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            var_37 = ((/* implicit */long long int) min((var_37), (((((min((((/* implicit */long long int) var_13)), (var_10))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4032))))) << (((((/* implicit */int) (unsigned short)18550)) - (18538)))))));
                            var_38 = ((((/* implicit */unsigned long long int) arr_24 [i_8 + 3] [i_8 + 3] [i_8 - 1])) | (13395138091803878402ULL));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        var_39 = ((/* implicit */signed char) ((((/* implicit */int) arr_41 [i_9 - 1] [i_9 - 1] [i_13] [i_13] [i_9 - 1] [i_13])) >= (((/* implicit */int) var_0))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            arr_48 [i_2] [i_8] [i_9] [i_9] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_46 [i_9] [i_9] [i_8 + 2] [i_8] [i_8 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4032))) <= (2038157208U)))))));
                            arr_49 [i_2] [i_2] [i_9] [i_9] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_9] [i_14])) ? ((+(((/* implicit */int) var_7)))) : ((-(((/* implicit */int) var_7))))));
                            arr_50 [i_2] [i_9] [6U] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_38 [i_13] [i_13] [i_8]))));
                            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) arr_24 [i_2] [i_8] [i_9]))));
                        }
                        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) (short)-23094))));
                    }
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned short) 11960955288395901616ULL);
                        /* LoopSeq 2 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) var_17);
                            var_44 = ((/* implicit */signed char) (-(2253745242U)));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) 
                        {
                            arr_57 [i_2] [i_8 + 1] [i_9 + 1] [i_9] [i_2] = ((/* implicit */int) (unsigned short)46983);
                            arr_58 [i_9] [i_8] [i_8] [i_9] [i_15] [i_17] [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_36 [i_2] [i_9 - 1] [i_9 - 1] [i_15] [i_8 + 2] [i_15]))));
                            var_45 = ((/* implicit */unsigned short) arr_56 [i_2] [i_2]);
                            var_46 = ((/* implicit */unsigned int) (-(arr_46 [i_9] [i_8] [i_8] [i_9] [i_9])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
                        {
                            arr_62 [i_2] [i_2] [i_8] [i_9] [i_15] [i_9] [i_2] = var_14;
                            arr_63 [i_2] [i_8] [i_9] [i_15] [i_9] = ((/* implicit */signed char) (+(((unsigned int) ((arr_39 [i_2] [i_2] [i_9] [i_9] [i_18] [i_18] [i_18]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8] [i_9 - 1]))))))));
                            arr_64 [i_15] [i_9] = ((/* implicit */unsigned int) arr_7 [i_18]);
                            arr_65 [i_2] [i_8] [i_8] [i_9] [i_8] [i_9] [i_18] = ((/* implicit */unsigned short) ((((_Bool) var_12)) ? (((int) var_15)) : (2147483647)));
                        }
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((((arr_20 [i_9] [i_15] [i_15] [i_15] [i_15] [i_15]) + (2147483647))) >> (((((/* implicit */int) (signed char)32)) - (26))))) : ((~(((/* implicit */int) (unsigned short)18553))))))) ? (((/* implicit */unsigned long long int) var_10)) : ((-(arr_39 [i_2] [i_2] [i_8] [i_9] [i_2] [i_15] [i_15])))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 24; i_20 += 3) 
                        {
                            {
                                var_48 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_8)) : (var_2))), (1727040542278669155ULL)))) ? (var_15) : (((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned short)48901), (((/* implicit */unsigned short) var_11))))))))));
                                var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) arr_41 [i_2] [i_8] [i_9] [i_19] [i_19] [i_20]))));
                                var_50 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_55 [i_2] [i_2] [i_2] [i_9 - 1] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_51 = ((/* implicit */long long int) var_14);
    var_52 = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (var_9)))))));
}
