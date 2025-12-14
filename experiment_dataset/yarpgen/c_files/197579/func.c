/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197579
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) 16777208);
                    var_10 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [(unsigned short)7] [4LL] [i_2]))))) ? (-2305843009213693952LL) : (((/* implicit */long long int) (~(-1889868169)))))), (((/* implicit */long long int) (_Bool)1))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        arr_11 [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65535), ((unsigned short)12575))))) <= (((4294967272U) >> (((var_7) - (1190845187))))))));
                        arr_12 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (+(max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) (_Bool)1))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [9U] [i_1] [i_4] = ((/* implicit */long long int) min(((((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_16 [i_0])) : (var_0))))), (((/* implicit */unsigned long long int) min((var_2), (max((2147483648U), (((/* implicit */unsigned int) var_8)))))))));
                        var_11 = ((/* implicit */int) (unsigned short)33650);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((4294967293U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) > (arr_9 [i_0] [i_1 + 1] [i_2] [i_5])));
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (short)13409))));
                        var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [7U] [i_0])) : (var_0)))) ? (((/* implicit */int) arr_0 [i_0] [i_5])) : (((/* implicit */int) arr_15 [i_1] [i_1 + 1] [i_0] [i_5]))));
                        var_15 = ((/* implicit */_Bool) ((arr_0 [i_1 - 1] [i_0]) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_2]))));
                        var_16 = (-(arr_2 [i_0] [i_1] [i_0]));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        arr_23 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_18 [i_0] [i_1] [i_1 - 1] [i_6]), (((((/* implicit */_Bool) var_3)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                        var_17 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((unsigned char) var_1))), (max((var_0), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])), (var_3)))) ? (((arr_19 [i_0] [i_1] [i_2] [i_1] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_6])))) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_6])))))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_22 [i_0] [i_1] [i_2] [(signed char)10]))));
                        arr_24 [i_0] [i_1] [i_6] = ((/* implicit */signed char) var_9);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            arr_27 [i_1] [i_2] [i_2] [i_2] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 967591811671861105LL)) && (((/* implicit */_Bool) var_5)))));
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_20 *= ((/* implicit */_Bool) (-(4040904513U)));
                            arr_30 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 15327892972718567298ULL)))), ((!(((/* implicit */_Bool) arr_20 [i_1] [i_2]))))))) >= (((/* implicit */int) var_8))));
                        }
                        /* vectorizable */
                        for (short i_9 = 3; i_9 < 11; i_9 += 3) 
                        {
                            arr_33 [i_0] [i_1] [i_2] [(signed char)0] [i_9] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2843345899U)) ? (13510798882111488ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9] [i_9] [i_6] [12U] [i_1] [i_0])))))) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) arr_20 [i_1] [i_1])));
                            var_21 = ((/* implicit */signed char) 2251799805296640LL);
                            arr_34 [i_1] [i_6] [i_1] [i_1] = ((/* implicit */unsigned int) ((_Bool) var_1));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-46)) <= (((/* implicit */int) arr_28 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]))));
                        arr_37 [(unsigned short)12] [i_1] = ((/* implicit */long long int) arr_36 [(_Bool)1] [i_0] [i_2] [i_1]);
                        arr_38 [i_0] [i_1] [i_1] [i_1] [i_10] = ((/* implicit */short) var_1);
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) 1700965292U);
                        arr_40 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1312))) + ((-(3921204639U)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        for (int i_12 = 2; i_12 < 10; i_12 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) var_4);
                                var_24 += ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 482328794668464067LL)))))));
                                var_25 *= ((/* implicit */_Bool) max((max((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4))))), ((+(((/* implicit */int) (unsigned short)39578)))))), (2147482624)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_13 = 0; i_13 < 25; i_13 += 3) 
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) arr_46 [i_13]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (var_7))) : (((/* implicit */int) arr_48 [i_13]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-37))))) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) min((arr_46 [i_13]), (((/* implicit */unsigned int) arr_48 [i_13]))))))) : (((((/* implicit */_Bool) (+(var_3)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_47 [i_13]))))))));
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 823441314)) ? (var_2) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4039547757U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) : (2512316970U)))));
        arr_49 [i_13] = ((/* implicit */signed char) ((((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_48 [i_13])), (arr_46 [i_13]))), (((/* implicit */unsigned int) ((int) 33488896U)))))) > ((~(var_5)))));
        arr_50 [i_13] &= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) min((arr_47 [i_13]), (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (8589934584ULL))));
    }
    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
    {
        arr_55 [i_14] = ((/* implicit */unsigned char) arr_52 [i_14]);
        arr_56 [i_14] = ((/* implicit */long long int) ((short) arr_48 [(unsigned short)17]));
        var_28 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((arr_53 [i_14]) >> (((3374179460669026504LL) - (3374179460669026499LL)))))) ? (((/* implicit */long long int) var_2)) : (4502417212890634239LL)))));
        var_29 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_48 [i_14]), (arr_51 [i_14])))))))));
    }
}
