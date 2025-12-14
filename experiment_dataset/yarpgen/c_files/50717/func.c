/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50717
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) (~((+(arr_2 [i_0] [i_0 + 1])))));
        arr_3 [(unsigned char)6] |= (-((~(((/* implicit */int) (unsigned char)155)))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))))))))));
        arr_9 [(unsigned char)0] [i_1 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_7)))))))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
        {
            arr_12 [i_1 + 1] [i_2] [i_2] = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) arr_10 [i_1]))))))));
            arr_13 [i_1] [i_1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_11))))));
            arr_14 [9ULL] [i_2] = (+((-(((/* implicit */int) arr_10 [i_1 + 1])))));
            arr_15 [(unsigned char)3] [i_1] [i_1 + 1] = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1))))));
            arr_16 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_10))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned short) (-(0ULL)));
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4987798797294796733ULL)))))));
        }
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4987798797294796733ULL)))))));
            var_18 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)1)))))));
            arr_23 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(13458945276414754883ULL))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))))))));
                        var_20 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(3199906577U))))));
                        arr_31 [i_1] [i_6] [i_7] = ((/* implicit */short) (~((~(1095060730U)))));
                    }
                    arr_32 [i_1 + 1] [i_5] [i_6] = ((/* implicit */signed char) (-(1526590530)));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 13458945276414754883ULL)))))));
                                arr_45 [2LL] [i_11] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        var_22 = (-(1140924418));
                        arr_48 [i_8] [i_8] [i_8] [13ULL] [i_8] [21ULL] = ((/* implicit */short) (+((-((+(((/* implicit */int) arr_42 [(short)3] [i_8] [i_9] [i_8] [i_10] [i_13]))))))));
                    }
                    for (unsigned char i_14 = 2; i_14 < 24; i_14 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 1) 
                        {
                            arr_55 [i_8] [i_9] [i_10] [i_14] [i_15] = ((/* implicit */unsigned long long int) (~((+((~(arr_40 [i_8] [i_8] [22] [i_8])))))));
                            var_23 = ((/* implicit */int) max((var_23), ((~(((/* implicit */int) (!(((/* implicit */_Bool) 421717899U)))))))));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (-((~(((/* implicit */int) arr_51 [i_14 - 2] [i_14 + 1] [i_14 - 2] [i_14 + 1])))))))));
                        }
                        for (int i_16 = 0; i_16 < 25; i_16 += 1) 
                        {
                            arr_59 [18ULL] [i_9] [10] = ((/* implicit */long long int) (~((-(var_12)))));
                            var_25 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)29720))));
                            arr_60 [i_8] [i_8] [11LL] [i_14] [11LL] = (-((-(1095060718U))));
                        }
                        /* vectorizable */
                        for (unsigned short i_17 = 3; i_17 < 24; i_17 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (+(1140924411))))));
                            var_27 += (~((-(((/* implicit */int) var_1)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_18 = 3; i_18 < 24; i_18 += 2) /* same iter space */
                        {
                            arr_67 [i_8] [(unsigned short)1] [12ULL] [i_14 - 2] [i_14 - 2] [i_18] = ((/* implicit */unsigned int) (-(var_12)));
                            var_28 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 4987798797294796733ULL))))));
                            arr_68 [i_9] [i_8] |= (~(((/* implicit */int) (signed char)30)));
                        }
                        arr_69 [i_8] [i_9] [i_10] [i_14] [i_14] = ((/* implicit */signed char) (~((~(var_12)))));
                        var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 7340256763226193163LL)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_19 = 2; i_19 < 24; i_19 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) (-((+(arr_65 [i_19] [i_10] [i_9] [i_8])))));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (-(arr_40 [i_9] [(unsigned short)18] [i_10] [i_19 - 2]))))));
                    }
                    for (int i_20 = 0; i_20 < 25; i_20 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            arr_76 [i_8] [i_8] = ((/* implicit */short) (~((+(13458945276414754866ULL)))));
                            arr_77 [i_20] = (+((+(arr_35 [i_20]))));
                        }
                        for (unsigned short i_22 = 0; i_22 < 25; i_22 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                            arr_81 [i_8] [i_9] [14U] [13LL] [i_22] = ((/* implicit */unsigned short) (-((+(5996168380010915943LL)))));
                            arr_82 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(-1140924392))))));
                        }
                        for (unsigned short i_23 = 0; i_23 < 25; i_23 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned short) (~((~((~(var_7)))))));
                            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_79 [i_23] [i_10]))))));
                            var_35 &= ((/* implicit */short) (-((-(4021256090U)))));
                        }
                        for (short i_24 = 1; i_24 < 23; i_24 += 1) 
                        {
                            arr_89 [i_24 - 1] [i_24] [i_10] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_0))))));
                            var_36 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)239)))))));
                        }
                        arr_90 [i_8] = ((/* implicit */unsigned long long int) (+((-((+(((/* implicit */int) var_5))))))));
                    }
                }
            } 
        } 
    } 
}
