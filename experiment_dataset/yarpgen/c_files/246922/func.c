/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246922
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
    var_15 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)-1))))));
    var_16 = ((/* implicit */_Bool) ((unsigned int) var_9));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) arr_2 [i_0]);
        /* LoopNest 3 */
        for (short i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_13 [i_2] [i_2] = ((/* implicit */signed char) (short)-20184);
                        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)12288), (((/* implicit */unsigned short) (signed char)49))))) || (((((/* implicit */_Bool) (short)20211)) && (((/* implicit */_Bool) (short)-20205)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_19 = (~(((((/* implicit */_Bool) (short)-20238)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23503))))));
                                arr_26 [i_7 - 2] [i_4] [i_5] [i_6 + 1] [i_6] = ((/* implicit */unsigned short) (~((+((~(((/* implicit */int) var_9))))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-64)) && (((/* implicit */_Bool) (signed char)37)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (signed char)35))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (signed char)3))) <= (((/* implicit */int) ((short) var_4)))))) : (max((((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [i_0] [i_4] [i_5])), (arr_17 [i_0])))), ((-(((/* implicit */int) (short)23484))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(var_14)))) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((min((((/* implicit */unsigned int) var_9)), (3237514335U))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) arr_9 [i_0])) : ((+(((/* implicit */int) (unsigned short)17894)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 3; i_8 < 21; i_8 += 3) 
                    {
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            {
                                arr_31 [16LL] [i_4] [i_4] [i_8 - 2] |= ((/* implicit */short) max((((long long int) (!(((/* implicit */_Bool) 1895897332))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (short)0)))) == ((-(((/* implicit */int) (unsigned short)39604)))))))));
                                arr_32 [i_0] [i_4] = ((/* implicit */short) (-(min((arr_29 [i_0] [i_0] [i_5] [i_8] [i_8 - 1]), (3263884595U)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 3055340825U)))), (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-123))))) != ((~(((/* implicit */int) (unsigned char)101))))))));
                        arr_35 [i_10] [(signed char)18] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)10902))));
                    }
                    for (short i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-4892))));
                        arr_40 [i_0] [i_4] [(unsigned short)18] [i_4] [i_5] [(signed char)4] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-366))) > (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8184))) : (arr_28 [i_11] [i_11] [(signed char)21] [i_11])))))), (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) : (1239626464U))), (((/* implicit */unsigned int) -2068174850))))));
                        var_24 *= (signed char)7;
                        var_25 = (unsigned short)60198;
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
    }
    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
        arr_44 [i_12] [i_12] = ((/* implicit */signed char) min((min(((+(5224690817262535124ULL))), (((/* implicit */unsigned long long int) ((unsigned int) 1239626466U))))), (((/* implicit */unsigned long long int) (short)23503))));
    }
    /* LoopNest 3 */
    for (signed char i_13 = 0; i_13 < 12; i_13 += 3) 
    {
        for (unsigned int i_14 = 1; i_14 < 11; i_14 += 3) 
        {
            for (int i_15 = 0; i_15 < 12; i_15 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 2; i_16 < 8; i_16 += 3) 
                    {
                        var_28 = ((/* implicit */int) (_Bool)0);
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 12; i_17 += 1) 
                        {
                            var_29 = -2114692201;
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-18634))))))))));
                            var_31 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_13] [i_14] [i_15] [i_16 + 4] [i_17])) <= (((/* implicit */int) max(((short)-18620), (arr_34 [i_13] [i_13] [i_13] [(short)11] [i_13]))))));
                        }
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) max(((-(((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 907171057)), (48065508047514780ULL)))) ? (((((/* implicit */int) (unsigned char)66)) / (((/* implicit */int) (unsigned short)30)))) : (arr_1 [i_16 + 3]))))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        var_33 = ((/* implicit */signed char) (unsigned short)65518);
                        arr_62 [i_13] [0] = max(((~(((/* implicit */int) arr_49 [i_14 - 1] [i_13] [i_14])))), (((/* implicit */int) ((short) (unsigned short)65504))));
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned int) (short)10909);
                        var_35 = ((((/* implicit */_Bool) 496)) ? (((/* implicit */int) ((((/* implicit */_Bool) 48065508047514754ULL)) && (((/* implicit */_Bool) 18398678565662036838ULL))))) : (((((/* implicit */int) arr_51 [i_13])) - (-1))));
                        /* LoopSeq 1 */
                        for (unsigned char i_20 = 0; i_20 < 12; i_20 += 3) 
                        {
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (+(1)))) && (((/* implicit */_Bool) ((signed char) 18446744073709551615ULL)))));
                            arr_69 [i_20] [i_13] = ((/* implicit */unsigned long long int) ((signed char) arr_61 [i_14 - 1] [i_14 - 1] [i_14] [i_14 + 1] [i_14 - 1] [i_14 + 1]));
                            var_37 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)0))));
                            var_38 &= ((/* implicit */signed char) (short)-17687);
                            arr_70 [i_13] [i_14] [i_14 - 1] [i_19] [i_13] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (signed char)-65))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 12; i_22 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)18633))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_21] [i_21] [i_15] [i_21] [i_22]))) : ((~(var_0))))) == (max(((+(arr_68 [i_13] [i_13] [i_13] [i_13] [i_13]))), (((/* implicit */unsigned int) (signed char)-64)))))))));
                                var_40 = ((/* implicit */signed char) min(((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-313))) <= (268435456U)))))), (((/* implicit */int) (signed char)66))));
                                var_41 &= ((/* implicit */short) (signed char)-113);
                                var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)57599)) ? (((/* implicit */int) arr_51 [i_15])) : (((/* implicit */int) (unsigned short)44146)))) * ((-(((/* implicit */int) (short)-20211))))))) : ((-(((arr_20 [i_13] [i_14]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
