/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206215
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) (-(min((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-20625)))), (min((((/* implicit */int) arr_5 [i_0] [i_1 + 2] [i_2] [i_2 + 1])), (arr_7 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] = min((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])), (min((((/* implicit */int) (short)-20637)), ((+(((/* implicit */int) (short)-20625)))))));
                                arr_13 [i_4] [i_0] [i_4] [23] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9223372036854775796LL))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) (unsigned char)47);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [(short)8] [i_5] [i_2] [i_1 + 1] [(short)8] |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_7 [i_1 + 1]), (arr_7 [i_1 + 1])))), (min((((/* implicit */unsigned int) (unsigned char)20)), (1553539636U)))));
                                var_17 &= ((/* implicit */unsigned int) (signed char)9);
                                var_18 = arr_17 [i_2 + 2] [i_5 + 2] [i_6];
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */short) (+((+(((/* implicit */int) (short)-19451))))));
        arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (short i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 23; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 3; i_11 < 23; i_11 += 3) 
                        {
                            {
                                arr_34 [i_7] [16ULL] [i_7] [i_10] [i_7] = ((/* implicit */short) min((5866394242944268390ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                                var_20 = ((/* implicit */int) arr_31 [i_7] [i_8 - 1] [i_9] [i_10] [i_11] [i_11]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) 1267481062))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            arr_39 [i_7] [i_7] = ((/* implicit */short) (-((+(1273793941U)))));
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                for (signed char i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    {
                        var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((min(((_Bool)1), (arr_40 [i_7] [i_7] [i_13]))) ? (min((1267481062), (((/* implicit */int) (short)-1)))) : ((-(((/* implicit */int) arr_4 [i_7] [(short)16]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)166))))) : ((+((+(((/* implicit */int) arr_24 [i_7] [i_12]))))))));
                        var_23 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_7] [i_7]))))) ? (((/* implicit */int) arr_4 [i_7] [i_7])) : (((/* implicit */int) min((arr_4 [i_12] [i_7]), ((_Bool)1)))));
                    }
                } 
            } 
        }
        for (short i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 21; i_17 += 1) 
                {
                    for (int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        {
                            arr_58 [i_17] [i_7] [i_16] [i_17 + 1] [i_18] [(_Bool)1] [i_17] = min((((/* implicit */unsigned short) (_Bool)0)), (arr_30 [i_18] [i_15] [i_18] [i_17 + 3] [i_18] [i_16]));
                            var_24 |= ((((/* implicit */_Bool) (short)-24769)) ? (((/* implicit */int) (unsigned short)49029)) : (((/* implicit */int) (_Bool)1)));
                            arr_59 [i_17] [i_7] [i_17] [i_17 + 3] = ((/* implicit */int) (!((_Bool)1)));
                            arr_60 [i_7] [(_Bool)1] [i_16] [(unsigned short)9] [i_7] = ((/* implicit */short) (-(min((min((((/* implicit */long long int) 369755192U)), (arr_44 [i_18] [i_17 + 1] [(signed char)15] [i_7]))), (((/* implicit */long long int) min((159493101), (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (int i_20 = 2; i_20 < 23; i_20 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (_Bool)1))));
                            var_26 = (+((~(((/* implicit */int) (_Bool)1)))));
                            var_27 = (unsigned short)18088;
                        }
                    } 
                } 
            }
            arr_66 [(unsigned short)4] [i_7] [i_7] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 727888727)), (10186938059550961656ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10186938059550961670ULL)))))));
            var_28 ^= ((/* implicit */signed char) min(((~(((/* implicit */int) (signed char)14)))), ((~(arr_7 [i_7])))));
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-15657))))))))))));
        }
        for (long long int i_21 = 0; i_21 < 24; i_21 += 1) 
        {
            arr_69 [i_7] [i_7] = ((/* implicit */short) (-((~(((/* implicit */int) (_Bool)1))))));
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 24; i_22 += 2) 
            {
                for (long long int i_23 = 4; i_23 < 22; i_23 += 4) 
                {
                    for (long long int i_24 = 1; i_24 < 21; i_24 += 1) 
                    {
                        {
                            arr_76 [i_7] [i_21] = min((((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)47)), ((short)1114)))), ((+(arr_51 [i_23 - 3] [i_24 + 3] [i_24 + 2] [i_24 + 3]))));
                            arr_77 [i_7] [i_7] [i_22] [i_7] [i_22] [i_7] = ((/* implicit */unsigned int) min(((+((+(63ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_55 [i_7] [i_7] [i_24 + 2] [i_23 - 3] [i_24])))))));
                            arr_78 [i_7] [i_7] [i_21] [i_21] [i_21] [i_23] [i_24] = ((/* implicit */_Bool) -5494811095735788345LL);
                        }
                    } 
                } 
            } 
            var_30 *= ((/* implicit */signed char) (+(min((min((arr_16 [i_7] [i_21] [i_21] [i_7]), (((/* implicit */unsigned long long int) arr_27 [(unsigned short)22] [(short)14])))), (((/* implicit */unsigned long long int) arr_33 [i_7] [i_7] [i_21] [i_21] [i_7]))))));
            /* LoopNest 2 */
            for (unsigned int i_25 = 0; i_25 < 24; i_25 += 3) 
            {
                for (unsigned long long int i_26 = 1; i_26 < 22; i_26 += 3) 
                {
                    {
                        arr_83 [i_7] [i_21] [i_21] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        arr_84 [i_7] [i_7] [i_21] [i_7] [i_26] = ((/* implicit */unsigned short) arr_2 [i_26]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_27 = 0; i_27 < 24; i_27 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_28 = 1; i_28 < 20; i_28 += 3) 
            {
                var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 530420973)))))));
                var_32 = ((/* implicit */unsigned int) -5494811095735788356LL);
            }
            arr_90 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_7] [i_27] [i_27])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_79 [i_7] [i_27] [i_7]))))) : ((+(arr_81 [i_7] [7ULL])))));
            /* LoopNest 2 */
            for (signed char i_29 = 1; i_29 < 21; i_29 += 4) 
            {
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_31 = 0; i_31 < 24; i_31 += 1) 
                        {
                            var_33 &= ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_6 [22U] [22U] [i_30]))))));
                            arr_102 [2U] |= ((/* implicit */int) arr_95 [i_30] [i_29 + 2] [i_29 + 1] [i_29] [i_29 + 1]);
                            arr_103 [i_7] [(unsigned short)20] [i_7] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned short)22048))))));
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (_Bool)1))));
                            arr_104 [i_7] [i_27] [i_29] [i_30] [i_30] [i_31] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)38)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16))) : ((-(arr_10 [i_7] [i_7] [i_27] [i_7] [i_30] [i_30])))));
                        }
                        arr_105 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) arr_27 [i_7] [(short)5])) : ((+(((/* implicit */int) arr_8 [i_7] [i_27] [i_29] [i_27]))))));
                        arr_106 [i_7] [i_7] [i_7] [(unsigned short)23] = ((/* implicit */signed char) ((((/* implicit */_Bool) 743123285U)) ? (arr_47 [i_29 + 2] [i_29 + 2]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)61436)))))));
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (+(arr_10 [i_7] [i_7] [i_29 + 2] [i_29] [i_29] [i_29 + 2]))))));
                    }
                } 
            } 
        }
        arr_107 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) 1952548650U))))), (min((((/* implicit */short) (unsigned char)69)), ((short)-15652)))))) ? (min((1952548650U), (((/* implicit */unsigned int) (signed char)-92)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    for (short i_32 = 0; i_32 < 24; i_32 += 3) 
    {
        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (+(min(((-(67108352))), (((/* implicit */int) (short)-15648)))))))));
        var_37 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_95 [i_32] [i_32] [i_32] [(unsigned short)0] [i_32])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12580349830765283226ULL)) ? (3913055495U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_86 [i_32] [i_32] [i_32])))))) ? (((arr_108 [(short)16]) ? (8908717273399343138LL) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_32] [i_32] [i_32]))))) : (((/* implicit */long long int) min((-846942073), (((/* implicit */int) (short)6911))))))) : (((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)1)))))))));
    }
    var_38 = ((/* implicit */long long int) (+(min((67108335), (2147483647)))));
    var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) var_6))));
}
