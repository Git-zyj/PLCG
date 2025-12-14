/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49484
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
    var_13 = ((/* implicit */short) (-(((/* implicit */int) var_8))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)112)) << (((((/* implicit */int) var_12)) - (123)))))), (max((var_0), (((/* implicit */long long int) var_2)))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) (unsigned char)143)))) : (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (short)-1))))))) : (((((((/* implicit */int) (short)-8192)) != (((/* implicit */int) (unsigned char)143)))) ? ((~(arr_6 [i_0] [i_1] [i_1 + 2] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_3)))))))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 3] [i_2] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 + 3] [(_Bool)1] [i_2]))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)128)), (((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1771565559)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)244)))))));
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */unsigned int) (signed char)5);
    /* LoopSeq 4 */
    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_11 [(short)10] [i_3])))) ? (((/* implicit */int) min((arr_11 [i_3] [i_3]), (arr_11 [i_3] [i_3])))) : ((+(((/* implicit */int) var_6))))));
        arr_13 [i_3] [i_3] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)64))))) ? (((-2216306321312528061LL) & (((/* implicit */long long int) 3456364961U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) var_10))))));
    }
    for (int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    arr_22 [3ULL] [i_5] [i_6] [i_5] = ((/* implicit */_Bool) max((-945699827), (((/* implicit */int) arr_20 [i_4] [i_4] [i_5] [i_6]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 4; i_7 < 8; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)197)) ? (4421831415334280365LL) : (8186025227213811454LL)))))) ? (((/* implicit */int) arr_17 [i_5])) : (max((((((/* implicit */int) arr_11 [i_5] [i_4])) * (((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))));
                                arr_28 [i_6] [i_6] = ((((((/* implicit */int) arr_20 [i_7 + 3] [i_7 - 4] [i_7 + 2] [i_7 - 4])) == (((/* implicit */int) arr_18 [i_7 + 3] [i_7 - 4] [i_7 + 2] [i_7 - 4])))) ? (4672114502471869181LL) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (min((arr_15 [i_6]), (-648700994990955515LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                                var_18 = ((/* implicit */unsigned char) var_7);
                                arr_29 [i_4] [i_4] [i_4] [i_6] [(short)1] [i_4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (signed char)-9))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (478797724981954909ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8186025227213811455LL)) ? (4421831415334280349LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1742937813)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)101)))) : (((/* implicit */int) arr_16 [(unsigned char)4])))))));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */long long int) ((max((((/* implicit */long long int) arr_19 [i_4] [i_5] [i_6])), (arr_12 [i_6]))) <= (((/* implicit */long long int) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) : (arr_19 [i_4] [i_4] [i_4]))))));
                    /* LoopSeq 3 */
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        arr_34 [i_4] [i_4] [i_5] [i_6] [i_9] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (4152678764U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1005641020U)) || (((/* implicit */_Bool) var_11))))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) arr_24 [i_4] [(_Bool)1])) : (((/* implicit */int) var_6)))))));
                        arr_35 [i_6] [i_5] [i_4] = ((/* implicit */int) arr_11 [i_4] [i_4]);
                        arr_36 [i_4] [i_5] [i_4] [i_4] [i_9] [i_5] = ((((/* implicit */_Bool) (-(var_7)))) ? (min((((((/* implicit */_Bool) 17278449921869682295ULL)) ? (((/* implicit */long long int) arr_21 [i_4] [i_5])) : (648700994990955514LL))), (-3800919864810755905LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8))));
                        arr_37 [i_4] [i_4] [i_9] = ((/* implicit */short) max((max((arr_15 [i_9]), (((/* implicit */long long int) arr_18 [3LL] [i_5] [i_5] [i_5])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)25902)) ? (((/* implicit */int) arr_16 [i_6])) : (((/* implicit */int) arr_16 [i_6])))))));
                    }
                    for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        arr_40 [i_4] [i_4] [i_6] [10ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_32 [i_6] [i_10]) + (((/* implicit */long long int) ((/* implicit */int) ((-493344910) >= (((/* implicit */int) (_Bool)1))))))))) ? (min((arr_32 [i_4] [i_5]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [1LL] [i_5] [i_6] [i_5] [i_4]))) : (1073741823ULL))))))));
                        var_20 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)252)))), (((/* implicit */int) (short)28427))))), (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)127)), (var_2)))) ? (arr_32 [i_4] [i_4]) : (min((var_0), (((/* implicit */long long int) var_1))))))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max(((unsigned char)20), (((/* implicit */unsigned char) (_Bool)1)))))));
                    }
                    for (unsigned char i_11 = 1; i_11 < 9; i_11 += 4) 
                    {
                        arr_44 [i_5] = (_Bool)1;
                        var_22 += ((/* implicit */unsigned short) var_5);
                        var_23 = ((/* implicit */long long int) ((unsigned long long int) ((((var_0) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-58))))) ? (((((/* implicit */unsigned long long int) 1686948123)) - (arr_43 [i_4] [i_5] [i_6] [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_39 [i_4] [i_5] [i_5] [i_6] [i_11] [i_11]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16376))))))))));
                        arr_45 [i_6] [i_6] [i_6] [i_11 + 1] = ((/* implicit */short) max(((+(((((/* implicit */_Bool) -1686948152)) ? (((/* implicit */int) arr_33 [3U] [3LL] [i_6] [i_5] [i_4] [(_Bool)1])) : (((/* implicit */int) (signed char)57)))))), (((/* implicit */int) var_2))));
                        arr_46 [(short)8] [(short)8] [i_6] [i_11] [(short)8] = ((/* implicit */long long int) arr_11 [6U] [i_5]);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            for (unsigned int i_13 = 4; i_13 < 11; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (short i_15 = 0; i_15 < 12; i_15 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */int) (signed char)28);
                                arr_60 [i_4] [i_4] [i_15] [i_15] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_13 - 4] [i_14 - 1])))))) / (arr_48 [i_13 - 3] [i_14 - 1])));
                            }
                        } 
                    } 
                    var_25 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_27 [i_4] [i_12] [i_12] [i_13 - 1]), (arr_27 [(_Bool)1] [i_12] [i_12] [i_13 - 3])))), (((((/* implicit */_Bool) max((arr_32 [i_4] [i_13]), (((/* implicit */long long int) (unsigned short)16387))))) ? (((/* implicit */unsigned long long int) arr_10 [i_4])) : ((+(arr_43 [i_4] [(_Bool)1] [i_12] [i_13 - 3])))))));
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_43 [3ULL] [i_12] [i_13] [3ULL])) ? (1619988429U) : (arr_47 [i_4] [i_12] [i_12]))), (((/* implicit */unsigned int) ((int) arr_31 [i_4] [i_12] [i_12] [(unsigned char)7] [i_13])))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((((~(-2320094023905800764LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_4]))))))))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [(short)11])) ? (min((((arr_24 [i_4] [i_12]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-3776)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)55664))));
                    var_28 = ((/* implicit */int) var_8);
                }
            } 
        } 
    }
    for (int i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
    {
        var_29 = max((209646394), (((/* implicit */int) (unsigned char)206)));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((arr_59 [i_16] [i_16] [i_16] [i_16]) ? (((/* implicit */int) arr_59 [i_16] [i_16] [i_16] [(unsigned char)2])) : (((/* implicit */int) (signed char)-2))))) > (max((9218868437227405312LL), (((/* implicit */long long int) arr_59 [i_16] [i_16] [i_16] [i_16]))))));
    }
    for (int i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned int) ((int) (((+(2320094023905800763LL))) >> (((max((((/* implicit */long long int) var_6)), (5737121753388468394LL))) - (5737121753388468353LL))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 3; i_18 < 11; i_18 += 4) 
        {
            var_32 ^= ((/* implicit */long long int) max((((/* implicit */int) arr_16 [i_17])), (max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (short)30228)) : (((/* implicit */int) (short)-18232))))))));
            /* LoopNest 2 */
            for (int i_19 = 1; i_19 < 11; i_19 += 4) 
            {
                for (unsigned short i_20 = 0; i_20 < 12; i_20 += 2) 
                {
                    {
                        arr_75 [i_17] [i_17] [i_18] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_17] [i_17] [10LL] [(short)4] [i_19] [i_20])) ? (((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */signed char) var_1)), ((signed char)-2)))), (((((/* implicit */_Bool) 4390663820784624230LL)) ? (var_11) : (((/* implicit */int) var_3))))))) : (max(((-(arr_47 [i_17] [8LL] [i_20]))), (((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)161)), (var_10))))))));
                        arr_76 [i_19] [i_18] [10ULL] [(unsigned char)4] [i_18] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_32 [i_18 - 1] [(unsigned char)1]) <= (arr_32 [i_18 - 3] [i_20]))))) : (((((/* implicit */_Bool) arr_32 [i_18 - 3] [i_18 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_32 [i_18 - 3] [11LL])))));
                    }
                } 
            } 
            arr_77 [i_18] = ((/* implicit */_Bool) var_2);
            arr_78 [i_18] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) max(((signed char)81), ((signed char)9)))) : (((((/* implicit */_Bool) (short)-18236)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) (+(var_0)))) ? (min((1819591811428204246LL), (((/* implicit */long long int) (short)254)))) : (((/* implicit */long long int) ((/* implicit */int) min((var_6), (var_4))))))) : ((~(arr_26 [6LL] [i_18 - 1] [i_18 - 2])))));
        }
    }
}
