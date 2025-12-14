/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24033
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)4)) : (var_6)))));
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_3)) : (var_0)))))))));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1687537560298352563LL)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)153), ((unsigned char)99))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_2 [i_1]))))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max(((+(var_6))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)192)), ((short)-30606))))))), (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)164)), ((short)-17796)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_9), (var_2))))) : (max((1687537560298352566LL), (((/* implicit */long long int) arr_7 [(_Bool)1])))))))))));
            arr_10 [i_1] [i_2] [3ULL] = ((/* implicit */short) min(((unsigned char)67), ((unsigned char)68)));
            /* LoopSeq 4 */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
            {
                var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (_Bool)1)), (-28LL))), (((/* implicit */long long int) max((arr_8 [i_3] [i_1]), (((/* implicit */unsigned short) arr_5 [i_1])))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (arr_6 [i_1]))))) : (max((9372064262429338760ULL), (((/* implicit */unsigned long long int) arr_7 [i_1 + 4]))))))));
                arr_13 [i_2] [i_2] [i_3] = ((/* implicit */signed char) max((28LL), (1687537560298352579LL)));
                var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */int) (short)-26))))) ? (((((/* implicit */_Bool) 5116669754706803489LL)) ? (((/* implicit */int) arr_8 [i_3] [i_1])) : (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) (unsigned short)65535))))))), (((((/* implicit */_Bool) min((-5758573029079773586LL), (((/* implicit */long long int) (unsigned char)94))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)24442), (((/* implicit */short) var_5)))))) : (min((((/* implicit */unsigned long long int) arr_8 [i_1] [i_1])), (arr_12 [i_1] [i_2] [i_3] [i_1])))))));
                arr_14 [i_1 + 1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_8)), (var_1))), (((/* implicit */long long int) max(((unsigned char)200), (((/* implicit */unsigned char) arr_9 [i_2] [i_2] [i_2])))))))), ((+(min((var_7), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)10]))))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_4 [i_5])))) ? (((arr_18 [(unsigned char)12] [(unsigned char)0] [(signed char)12] [(signed char)12]) ? (-5200040221496184338LL) : (var_1))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~((-(1074715837U))))))));
                    arr_19 [i_2] [i_2] [i_4] [i_4] [(unsigned char)20] = ((((/* implicit */_Bool) (unsigned short)26)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60581))) : (2351061547038506908LL));
                    var_18 = ((/* implicit */unsigned char) (+(-7794185361370256390LL)));
                }
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned char)0])) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_20 [14LL] [i_4] [i_2] [i_1])) ? (var_6) : (((/* implicit */int) arr_16 [i_1] [i_1] [i_4] [i_6])))) : ((~(((/* implicit */int) arr_0 [i_4])))))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))) : (((((/* implicit */_Bool) (unsigned short)6816)) ? (arr_12 [i_1] [i_1] [i_2] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6])))))));
                }
                var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (var_3) : (((/* implicit */long long int) 569577551U))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1]))))) ? (((((/* implicit */_Bool) 427589425623961139LL)) ? (((/* implicit */unsigned long long int) 561839396)) : (18446744073709551605ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)0)), (var_1)))))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_21 [i_4] [i_1 + 4] [i_2] [i_1 + 4])))), (((((/* implicit */_Bool) 561839396)) ? (var_6) : (((/* implicit */int) (unsigned char)253)))))))));
                var_22 = ((/* implicit */unsigned char) (+(max((max((3725389744U), (3220251458U))), (((/* implicit */unsigned int) min((((/* implicit */short) var_9)), ((short)-12224))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 3) 
                    {
                        {
                            arr_26 [20U] [(short)2] [(_Bool)1] [i_2] [i_1] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1933734296U)) ? (((/* implicit */unsigned long long int) 3725389747U)) : (arr_22 [(signed char)12])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)75)))))) : (min((((/* implicit */unsigned long long int) (unsigned char)104)), (var_7))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (arr_20 [(unsigned char)17] [i_2] [i_2] [i_1])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (short)-26877)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)20]))) : (4936745805029044740ULL)))))));
                            var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max(((~(4337350401191278281LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned short)32260)) : (((/* implicit */int) var_2)))))))), ((~(((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                            var_24 = ((/* implicit */int) min((max((min((2064494193501183563ULL), (18446744073709551610ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1] [i_7] [i_8 - 1])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_20 [i_1] [i_2] [i_4] [i_1])))) ? (((((/* implicit */_Bool) arr_16 [(signed char)2] [i_1] [i_4] [(signed char)2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18201)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) var_9)))))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_0), (((/* implicit */unsigned long long int) (unsigned short)33275)))), (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [(unsigned char)1] [i_4] [i_1]))) : (var_7)))))) ? (min((max((1687537560298352572LL), (var_3))), (((/* implicit */long long int) (-(arr_15 [i_7] [i_2] [i_1])))))) : (max(((+(arr_3 [i_8]))), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (unsigned short)4338))))))))))));
                        }
                    } 
                } 
                arr_27 [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) 9543412862759217407ULL)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (short)-19649))))), (max((arr_3 [i_1]), (((/* implicit */long long int) (unsigned char)246))))))));
            }
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(232926954U)))) ? (((/* implicit */unsigned long long int) (-(var_3)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_17 [i_9] [i_2] [i_1 - 1])) : (var_0))))))));
                arr_31 [i_2] [i_2] = ((/* implicit */unsigned int) (~((+(-1455042342)))));
                var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((arr_18 [i_1] [i_1] [0ULL] [i_1]) ? (569577565U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))))) : (((((/* implicit */_Bool) var_7)) ? (arr_29 [9ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                var_28 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_17 [(unsigned short)7] [(short)11] [(short)11])))) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_29 [i_2]) : (18446744073709551606ULL))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1 + 3] [i_1] [i_2] [i_2]))) : (16429835567846718879ULL)))));
            }
            /* vectorizable */
            for (int i_10 = 4; i_10 < 20; i_10 += 3) 
            {
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (-((-(((/* implicit */int) (signed char)40)))))))));
                arr_34 [i_1] [i_1] [i_10] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)31))));
            }
        }
    }
    var_30 *= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_9)) : (-1830746232)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (2251799796908032ULL))) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) var_9)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_11 = 3; i_11 < 13; i_11 += 2) 
    {
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [i_11] [8LL] [i_11])), (arr_33 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) : (max((((/* implicit */unsigned long long int) (unsigned char)247)), (arr_12 [i_11] [7U] [7ULL] [i_11]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12224)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (_Bool)1))))) ? ((+(2640481944U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))))))));
        arr_38 [i_11] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_11])) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_30 [i_11 - 3] [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_11] [i_11]))) : (var_3)))))));
        arr_39 [i_11] [i_11] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)123)), ((unsigned short)3373)))) ? (((/* implicit */int) max((arr_5 [i_11]), (((/* implicit */unsigned char) arr_28 [i_11]))))) : (((var_5) ? (((/* implicit */int) arr_16 [i_11] [6U] [i_11 + 1] [(unsigned short)18])) : (((/* implicit */int) (signed char)60))))))), (max((max((var_3), (((/* implicit */long long int) var_6)))), (max((((/* implicit */long long int) (unsigned char)255)), (var_1)))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 1) 
    {
        arr_43 [i_12] [i_12 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_12]))))) ? (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (signed char)-107)))) : ((~(((/* implicit */int) arr_9 [i_12] [i_12] [(unsigned short)11]))))));
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 18; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                {
                    arr_51 [i_13] [i_12] = ((/* implicit */unsigned char) (~((~(2051332353)))));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12224)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (unsigned char)3))))) ? (3652679579137260014ULL) : (((/* implicit */unsigned long long int) -1830746215)))))));
                }
            } 
        } 
        arr_52 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2703213331U)) ? (4864316801605883842ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : ((+(3725389745U)))));
        arr_53 [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) 2032030730)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)36941))))) : (18446744073709551610ULL)));
    }
    for (signed char i_15 = 2; i_15 < 13; i_15 += 4) /* same iter space */
    {
        arr_56 [i_15] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_30 [i_15 + 2] [i_15] [i_15 - 1] [i_15])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (arr_3 [i_15]))))))) ? ((-(((((/* implicit */_Bool) -5131389785318943431LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_20 [i_15] [(_Bool)1] [i_15] [(unsigned short)11]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2032030735)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_47 [i_15] [i_15] [i_15 + 1]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_49 [i_15] [i_15] [i_15])) : (var_0))) : (min((var_0), (((/* implicit */unsigned long long int) 2032030725)))))));
        arr_57 [i_15] [i_15] &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_20 [i_15 - 2] [i_15] [2ULL] [i_15])))) ? (((/* implicit */unsigned long long int) min((2032030735), (((/* implicit */int) (unsigned char)252))))) : (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_15] [i_15] [i_15]))) : (3181451160381543757ULL))))), (max((((((/* implicit */_Bool) arr_55 [i_15 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551608ULL))), (min((((/* implicit */unsigned long long int) var_6)), (var_0)))))));
        arr_58 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (1885667117022032863ULL) : (((/* implicit */unsigned long long int) arr_24 [10] [10] [10])))), ((~(134086656ULL)))))) ? (max((((((/* implicit */_Bool) arr_2 [i_15 - 1])) ? (var_6) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_50 [i_15] [i_15] [(unsigned char)5] [i_15])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)3354)))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_15])))))))));
        var_33 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)0)), (var_3)))) ? (max((-208994230), (((/* implicit */int) (short)25552)))) : (((/* implicit */int) max(((unsigned char)249), ((unsigned char)218))))))));
    }
    /* vectorizable */
    for (signed char i_16 = 2; i_16 < 13; i_16 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) arr_6 [i_16])))))))));
        var_35 = (~(((((/* implicit */_Bool) arr_46 [i_16] [i_16])) ? (492524664817787656LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_16] [(unsigned short)17]))))));
        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_29 [i_16])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))))) : ((+(arr_44 [i_16] [i_16] [i_16]))))))));
    }
    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((18446744073709551611ULL), (((/* implicit */unsigned long long int) var_2)))))))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)7)), ((short)-27643))))));
}
