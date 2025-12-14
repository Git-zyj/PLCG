/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196669
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((long long int) var_3))))), (((arr_2 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12411)))))));
        var_17 += ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)53125)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (unsigned short)53125)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53132)))))))) ? ((+((-(((/* implicit */int) var_7)))))) : ((-((+(((/* implicit */int) var_12)))))));
    }
    for (long long int i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_2 = 4; i_2 < 9; i_2 += 1) 
        {
            var_18 = (unsigned short)4088;
            arr_9 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-111))))) ? (((unsigned long long int) arr_5 [i_1] [i_1])) : (((unsigned long long int) 4107307712U)));
        }
        for (int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            arr_12 [i_1] [i_3] [i_3] |= ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) < (min((((/* implicit */long long int) arr_4 [i_3])), (var_5)))))), ((unsigned short)55830)));
            var_19 = ((/* implicit */short) (((((+(var_4))) + (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)35158)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            var_20 += ((/* implicit */long long int) max((((/* implicit */int) arr_7 [i_1])), ((-((-(((/* implicit */int) (_Bool)0))))))));
        }
        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (16515072U)))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) var_8))));
            arr_16 [0ULL] |= ((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) 4294967295U)), (-5176040559062545623LL)))));
            arr_17 [i_1] [i_1] [i_4] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1020)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24884))) : (var_9)))) * (max((((/* implicit */unsigned long long int) (_Bool)1)), (15880661450200427202ULL))))), (((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)1)))), (((/* implicit */int) var_8)))))));
            var_22 *= ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned short)39702)) : (((/* implicit */int) var_15)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))))));
        }
        arr_18 [i_1] [i_1] = (((((+(((/* implicit */int) (unsigned short)12410)))) << (((var_13) - (3115178740U))))) >= (((/* implicit */int) var_1)));
    }
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_23 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_5])) ? (arr_19 [i_5]) : (4294967295U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        var_24 |= ((/* implicit */signed char) max(((-(2356274202U))), ((-(arr_19 [i_5])))));
        var_25 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (67108352ULL))), (((/* implicit */unsigned long long int) arr_19 [i_5])))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_19 [i_5]), (((/* implicit */unsigned int) (unsigned short)12403))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (var_2)))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_20 [i_5])))))))));
        var_26 = ((/* implicit */long long int) ((short) max((((/* implicit */unsigned int) ((_Bool) (_Bool)1))), (((1389954382U) & (var_9))))));
    }
    for (short i_6 = 3; i_6 < 15; i_6 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            var_27 += ((/* implicit */short) (_Bool)1);
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (-(((unsigned long long int) (_Bool)1)))))));
            /* LoopSeq 2 */
            for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                /* LoopSeq 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                    arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) var_10);
                    var_30 -= ((/* implicit */short) ((((/* implicit */int) arr_27 [i_6 + 3])) & (((/* implicit */int) var_6))));
                }
                for (unsigned long long int i_10 = 2; i_10 < 15; i_10 += 3) 
                {
                    var_31 += ((/* implicit */short) (~(arr_24 [i_6 + 1] [i_8] [i_10 + 1])));
                    arr_35 [i_6] [i_7] [i_6] [i_7] &= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -8430175882462821802LL)))))));
                    var_32 = ((/* implicit */signed char) (+(-1500824058620887033LL)));
                    var_33 -= ((/* implicit */short) ((var_13) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                }
                for (int i_11 = 2; i_11 < 17; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 4; i_12 < 18; i_12 += 4) 
                    {
                        arr_42 [i_6] [i_7] [i_8] [i_11 - 1] [i_12] [i_8] [i_8] = ((/* implicit */short) ((long long int) (!((_Bool)1))));
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) arr_32 [i_7] [i_11] [i_6 + 2] [i_6] [i_11] [i_6]))));
                    }
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (2305843009213693952ULL)))) << (((14902963546642414871ULL) - (14902963546642414854ULL)))));
                    var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_32 [i_6 + 3] [i_7] [i_8] [i_7] [i_7] [i_6 + 3]))))));
                    var_37 = arr_33 [i_7] [i_11 + 1] [i_8] [i_6 - 1] [i_7] [i_7];
                }
                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_6 + 2] [i_6 + 3] [i_6 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6 + 1] [i_6 - 2] [i_6 - 2]))) : (var_4)));
            }
            for (unsigned char i_13 = 1; i_13 < 15; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_14 = 3; i_14 < 16; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        {
                            arr_50 [i_14] [i_14] [i_13] [i_7] [i_14] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_47 [i_13 - 1] [i_14 + 3] [i_13 - 1] [i_14 + 1] [i_14 + 3])) : (((/* implicit */int) arr_23 [i_6 - 2]))));
                            arr_51 [i_14] [i_7] [i_13] = ((/* implicit */unsigned long long int) (unsigned short)4096);
                            var_39 += var_7;
                            arr_52 [i_6] [i_7] [i_14] [i_13] [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_6])) ? (arr_33 [i_14] [i_6] [i_6 + 3] [i_6 + 4] [i_6 - 3] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        }
                    } 
                } 
                var_40 += ((/* implicit */long long int) ((1348695577097276747LL) < (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            }
        }
        for (signed char i_16 = 1; i_16 < 15; i_16 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_41 *= ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_44 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) var_9)) : (11646167667085636651ULL))), (11646167667085636651ULL))) - (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)214))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_38 [i_17] [i_16] [i_16] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (-687754248134106768LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
                var_42 = ((/* implicit */signed char) min((min(((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48431))) : (257881831U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_40 [i_6 + 1] [i_16] [i_6 + 1] [i_6 + 1] [i_17]))))))), (((/* implicit */unsigned int) max(((short)21647), (((/* implicit */short) (unsigned char)56)))))));
                var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13849)))))) ? (min((((/* implicit */int) min((((/* implicit */short) (unsigned char)220)), (var_6)))), ((~(((/* implicit */int) (_Bool)0)))))) : ((-(1493084179)))));
            }
            var_44 = ((/* implicit */unsigned char) var_6);
            arr_58 [i_16 + 3] = ((/* implicit */unsigned char) (+(2895939066U)));
            var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_39 [i_6 + 2] [i_6 + 3] [i_6 + 3] [i_6]) || (((/* implicit */_Bool) var_6)))))) + (max((arr_21 [i_6]), (((/* implicit */unsigned int) ((12670880894534237485ULL) < (((/* implicit */unsigned long long int) -2624038348629530246LL))))))))))));
        }
        for (signed char i_18 = 1; i_18 < 17; i_18 += 4) 
        {
            var_46 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_6] [i_6 + 2] [i_6 + 1]))))), (((((/* implicit */_Bool) 0U)) ? (17770540092763503135ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21624)))))));
            /* LoopNest 3 */
            for (signed char i_19 = 2; i_19 < 16; i_19 += 2) 
            {
                for (unsigned int i_20 = 0; i_20 < 19; i_20 += 1) 
                {
                    for (unsigned short i_21 = 2; i_21 < 15; i_21 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */_Bool) var_4);
                            var_48 = ((/* implicit */signed char) var_2);
                            arr_69 [i_18] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((unsigned short) (signed char)58)))) * (((/* implicit */int) var_0))));
                            var_49 &= ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_68 [i_6 - 1]), (((/* implicit */unsigned short) ((13LL) > (((/* implicit */long long int) 4294967295U))))))))));
                            var_50 = ((/* implicit */unsigned int) (unsigned short)29934);
                        }
                    } 
                } 
            } 
            var_51 &= max((((((/* implicit */_Bool) (short)4685)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_6 - 3] [i_18 + 1] [i_18])) || (((/* implicit */_Bool) (unsigned char)111))))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_18] [i_18] [i_18] [i_6] [i_6 + 2] [i_18] [i_6])) || (((/* implicit */_Bool) arr_48 [i_18 - 1] [i_18 - 1] [i_18 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            arr_73 [i_22] [i_22] = ((/* implicit */unsigned int) (unsigned short)62947);
            var_52 += ((/* implicit */unsigned char) 4294967295U);
            arr_74 [i_6] [i_22] [i_22] = ((/* implicit */unsigned char) max((var_4), (((/* implicit */long long int) arr_61 [i_6 + 4] [i_6 + 4] [i_22]))));
        }
        var_53 *= ((/* implicit */short) var_7);
    }
}
