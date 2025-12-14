/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2675
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_15 ^= ((/* implicit */_Bool) arr_6 [i_0]);
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) 5791529919070811238LL);
                        var_16 = ((/* implicit */short) arr_1 [i_1]);
                        var_17 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_7 [(signed char)12] [i_1] [i_2 + 3] [i_3]))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) (!(((_Bool) max((-2602662119940117507LL), (((/* implicit */long long int) -1260069342)))))));
        var_19 = ((/* implicit */int) min((var_19), ((-(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 2]))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (short)7680))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */long long int) ((unsigned char) var_0));
        /* LoopNest 2 */
        for (long long int i_5 = 4; i_5 < 14; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_21 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_6]))))));
                    arr_23 [i_4] [8] [8] [i_5 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_5])) ? (arr_14 [i_4]) : (((/* implicit */unsigned long long int) arr_13 [i_4]))))) || (((((/* implicit */_Bool) 4238847275U)) && (((/* implicit */_Bool) (unsigned short)58089))))));
                    arr_24 [i_4] [i_5] = arr_13 [i_4];
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_21 [(signed char)3] [i_5 - 3] [(short)14])) >> (((arr_20 [i_4] [i_5]) + (1958801567)))))))))));
                }
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
    {
        var_23 = ((((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (unsigned short)480)))))) | (((long long int) ((arr_13 [i_7]) >= (var_4)))));
        arr_29 [i_7] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_13)) >> (((/* implicit */int) arr_21 [i_7] [i_7] [i_7])))) & (((/* implicit */int) arr_25 [i_7])))) != (((/* implicit */int) (((!(((/* implicit */_Bool) 4294967295U)))) || (((/* implicit */_Bool) var_4)))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_7] [i_7])))))) | (min((((/* implicit */unsigned int) (+(var_0)))), (arr_26 [i_7] [i_7])))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            var_25 += ((/* implicit */unsigned short) arr_30 [i_8]);
            var_26 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) ((arr_13 [i_7]) < (var_1)))) / (((/* implicit */int) ((unsigned short) arr_22 [i_7] [i_7]))))));
            /* LoopSeq 4 */
            for (signed char i_9 = 2; i_9 < 16; i_9 += 4) 
            {
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) max(((((!(((/* implicit */_Bool) (unsigned short)22598)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7] [i_8]))) : (((((/* implicit */_Bool) 2070848004U)) ? (arr_33 [i_7] [i_7] [i_8] [i_9]) : (((/* implicit */unsigned int) -518873553)))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (arr_30 [i_7]))))) <= ((-(1699077840U)))))))))));
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [(_Bool)1] [i_8] [i_9] [i_8]))) | (arr_26 [(short)4] [i_8]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_4))))))) >> (((long long int) (!(((/* implicit */_Bool) var_11))))))))));
                var_29 = ((/* implicit */unsigned char) ((arr_14 [i_7]) & (((/* implicit */unsigned long long int) (-((~(arr_12 [i_8]))))))));
                var_30 -= ((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) arr_31 [i_7] [i_8])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))), ((~(((/* implicit */int) arr_21 [i_9 - 2] [i_9 - 2] [i_9 + 1]))))));
                arr_36 [i_7] [i_7] [i_7] [i_9] = ((/* implicit */_Bool) ((unsigned int) (((-(2602662119940117523LL))) % (((/* implicit */long long int) ((/* implicit */int) var_2))))));
            }
            /* vectorizable */
            for (long long int i_10 = 1; i_10 < 17; i_10 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        arr_44 [i_7] [i_11] [i_10] [i_8] [i_8] [i_7] = ((/* implicit */signed char) ((arr_37 [i_7] [i_8] [i_11] [i_11]) <= (((/* implicit */unsigned long long int) arr_43 [i_7] [i_10 - 1] [i_10 + 1] [i_12]))));
                        var_31 -= ((/* implicit */_Bool) ((unsigned char) arr_31 [i_8] [2]));
                        var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) 4655886530720730167LL)) ? (-1245945274) : (((/* implicit */int) (_Bool)1))));
                        arr_45 [i_7] [i_7] [i_11] [i_7] [i_7] [i_7] [i_7] |= ((/* implicit */unsigned int) ((long long int) arr_34 [i_10 - 1] [i_11] [i_12] [i_12]));
                    }
                    for (unsigned short i_13 = 1; i_13 < 16; i_13 += 1) 
                    {
                        arr_49 [i_7] [(signed char)16] [i_10] [i_11] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_7] [i_10 + 1] [i_11] [i_13 + 1])) & (((/* implicit */int) arr_39 [i_7] [i_10 - 1] [i_13 + 2] [13LL]))));
                        arr_50 [i_8] [i_8] [i_11] [i_7] = ((/* implicit */long long int) ((((0LL) & (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8] [i_10] [i_11]))))) < (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_8] [i_7])) + (arr_20 [14LL] [14LL]))))));
                    }
                    arr_51 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(arr_26 [i_8] [(unsigned char)7])))) != (arr_32 [i_8])));
                }
                for (unsigned int i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
                {
                    var_33 -= ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) var_14))))) - (-2602662119940117520LL)));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 2; i_15 < 16; i_15 += 1) 
                    {
                        arr_60 [i_7] [(_Bool)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [(short)2] [(short)2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_10 - 1] [i_10 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)30))))) : (((arr_32 [i_8]) * (arr_14 [i_10])))));
                        arr_61 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_57 [i_7] [i_8] [i_10] [i_10 + 1] [i_14] [i_14] [i_15]))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_8] [i_10]))) & (arr_59 [(signed char)12] [5U] [i_10 - 1] [6ULL] [i_14] [i_15] [13U]))))));
                    }
                }
                var_34 = ((/* implicit */signed char) ((unsigned int) ((var_3) || (((/* implicit */_Bool) arr_58 [i_7] [i_8] [i_10] [17ULL] [i_8])))));
            }
            for (long long int i_16 = 3; i_16 < 16; i_16 += 1) 
            {
                var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((signed char) max((var_8), (var_8)))))));
                /* LoopSeq 4 */
                for (long long int i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)55913))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_26 [i_7] [4U])));
                    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) arr_41 [(unsigned char)9] [i_16 + 2]))));
                }
                for (long long int i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
                {
                    var_38 += ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_7] [i_8]))) < (1799812360U)))), (((unsigned int) -1558320497265060179LL)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned int) arr_43 [i_7] [i_8] [i_16] [i_18])))))));
                    var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)0)))))));
                    arr_69 [i_7] [i_8] [i_8] = ((/* implicit */int) arr_33 [i_7] [i_7] [i_7] [i_7]);
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 18; i_19 += 4) 
                {
                    arr_72 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) ((arr_20 [i_7] [i_16 - 2]) % (((/* implicit */int) ((arr_57 [i_7] [i_8] [i_16 - 3] [i_19] [i_19] [i_16] [i_16]) < (((/* implicit */int) var_12)))))));
                    arr_73 [i_7] [i_16] [i_8] [i_7] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_54 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_55 [i_7] [10] [i_19])) : (((/* implicit */int) (_Bool)1))))));
                }
                for (short i_20 = 0; i_20 < 18; i_20 += 4) 
                {
                    var_40 = ((/* implicit */unsigned char) ((short) arr_71 [i_7] [i_8] [i_7] [i_20]));
                    arr_76 [i_20] [i_16] [8U] [i_20] |= ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57))) - (((arr_59 [i_7] [(short)7] [i_7] [i_7] [i_7] [i_7] [i_7]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))), (((/* implicit */unsigned int) (-(((((/* implicit */int) var_10)) >> (((arr_30 [i_8]) + (7177637182534167558LL))))))))));
                    arr_77 [i_7] [i_8] [i_7] [i_16 - 3] [i_20] [i_20] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_16 + 1] [i_16 + 2] [i_16 - 3]))))) > ((+((+(((/* implicit */int) (unsigned short)511))))))));
                    var_41 += ((/* implicit */unsigned int) (unsigned char)255);
                    arr_78 [i_7] [i_7] [i_7] [i_20] = ((/* implicit */unsigned char) 2602662119940117516LL);
                }
                var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((long long int) arr_43 [i_7] [i_8] [i_16] [i_16])))));
            }
            /* vectorizable */
            for (short i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                arr_81 [(unsigned short)2] [10] [i_21] [12U] |= ((/* implicit */unsigned int) 2199023255551LL);
                arr_82 [i_8] [i_8] [i_7] [i_8] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) 2009471850U)) : (arr_65 [i_7] [i_8] [8]))));
                arr_83 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_7] [i_8] [i_21])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_7] [i_8]))))) : (((/* implicit */int) ((13343356765296108094ULL) != (((/* implicit */unsigned long long int) arr_13 [i_21])))))));
                var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((_Bool) ((signed char) arr_43 [i_7] [i_7] [(short)4] [i_7]))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_22 = 1; i_22 < 17; i_22 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 2) 
                {
                    arr_92 [i_7] [i_8] [i_8] = arr_17 [i_8] [i_22];
                    var_44 = ((/* implicit */short) (-(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_63 [i_8] [i_22] [i_23])) : (((/* implicit */int) var_8))))));
                }
                var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) -1LL))));
                var_46 = ((/* implicit */unsigned int) ((((unsigned int) -1516536945)) == (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) var_7)))) != (((/* implicit */int) ((signed char) arr_37 [i_7] [(short)9] [i_22 - 1] [i_22])))))))));
            }
        }
    }
    var_47 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (+(var_4))))) * (((/* implicit */int) var_13))));
}
