/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201161
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
    var_19 = ((/* implicit */short) (+(min((((var_18) / (2612266449U))), (((/* implicit */unsigned int) ((signed char) var_6)))))));
    var_20 &= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_12))))), (var_12))))));
    var_21 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) 1682700839U)))), ((!(((/* implicit */_Bool) var_2))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) 2364182968U)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)-63))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((1647932444) / (((/* implicit */int) arr_8 [i_1] [i_1]))))))))) : (arr_0 [i_0])));
                            var_23 = ((/* implicit */unsigned int) arr_11 [i_0] [(short)1] [(signed char)2] [i_3] [i_3] [3U]);
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1]))) % (2612266460U)))) ? (1682700821U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_17), (max((var_17), (var_6)))))))));
                            arr_12 [i_4] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_3 [i_0] [(short)17]);
                        }
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [(short)15] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0])) | (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) || (((/* implicit */_Bool) arr_0 [i_0]))));
                            var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2612266440U)) ? (31U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_3] [i_5] [i_3] [i_2])) && (((/* implicit */_Bool) ((var_0) >> (((((/* implicit */int) var_6)) + (19277)))))))))) : (var_0)));
                            var_26 = ((/* implicit */int) max(((signed char)-60), (var_7)));
                        }
                        var_27 -= ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_8 [i_1] [i_1])) << (((4294967286U) - (4294967284U)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                {
                    var_28 *= ((/* implicit */short) ((signed char) max((max((((/* implicit */unsigned int) -1647932444)), (4294967291U))), (2907781560U))));
                    /* LoopSeq 3 */
                    for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) -874058073)), (max((1532081667U), (((/* implicit */unsigned int) var_3)))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) ((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_6] [i_7] [i_8])))))))))))));
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_6] [i_8] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_10 [17] [i_9] [i_8] [i_8] [i_7] [i_6] [i_0]))) || (((/* implicit */_Bool) var_17)))));
                            arr_28 [i_0] [i_0] [i_6] [i_0] [i_7] [i_8] [i_0] = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) arr_26 [i_8] [(short)13] [15U] [i_8] [i_8] [i_8] [i_8])) ? (arr_10 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3796))))), (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_17 [i_0] [i_6] [i_7]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10)))) : (((unsigned int) var_1)))))));
                        }
                        for (int i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
                        {
                            var_30 ^= ((/* implicit */signed char) -1);
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((((/* implicit */_Bool) 1532081687U)) ? (arr_19 [i_10] [14] [i_6]) : (max((((/* implicit */unsigned int) ((short) (signed char)44))), (max((var_9), (arr_31 [i_8])))))))));
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((short) min((max((((/* implicit */unsigned long long int) arr_5 [i_6] [i_6] [i_6])), (arr_2 [i_0] [(short)1]))), (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_6] [i_7] [i_8] [i_10] [i_6] [i_0])), (arr_23 [19U] [19U] [i_7] [i_10])))))))));
                            arr_32 [i_0] = ((/* implicit */signed char) arr_26 [i_0] [i_0] [i_7] [i_8] [i_10] [i_6] [(short)8]);
                        }
                        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            arr_37 [i_0] [i_8] [i_0] [i_0] [i_0] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_8] [i_8])) ? (arr_3 [i_8] [i_0]) : (arr_3 [i_6] [i_11])))), (var_1)));
                            var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) 1682700839U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3783))) : (13754118352803050495ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((61U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))) ? (11701762879855892790ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_6] [i_7] [22U] [i_11]))));
                            arr_38 [i_0] [i_0] [i_7] [i_8] [i_0] = arr_13 [i_0] [i_6] [i_7] [i_7] [19U] [i_11];
                            arr_39 [i_0] [i_6] [i_7] [(signed char)8] [i_11] [i_11] = arr_31 [i_0];
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_30 [i_0] [12U] [13U] [i_8]) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_21 [i_6] [19U]))))))) ? ((~((~(arr_24 [i_6] [(signed char)2] [i_7] [i_6] [12U]))))) : (((unsigned int) max((((/* implicit */unsigned long long int) arr_8 [i_8] [i_0])), (15705767241702654258ULL))))));
                        }
                    }
                    for (short i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        var_35 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((arr_20 [i_12] [(short)8] [i_12] [(signed char)11]), (((/* implicit */short) arr_8 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (169828179U)))))));
                        arr_42 [i_0] [(signed char)8] [i_7] [17U] [i_0] = ((/* implicit */unsigned int) ((((((unsigned long long int) (signed char)-72)) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_12] [i_7] [i_6] [i_0])))))))) ? (max((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [22])), (max((var_1), (((/* implicit */unsigned long long int) arr_21 [i_6] [i_6])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [0U]))) ? ((~(arr_31 [i_7]))) : ((~(arr_19 [i_0] [i_0] [i_0]))))))));
                        arr_43 [i_0] [i_6] [i_0] [i_12] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1020265281U)) ? (arr_30 [i_0] [14U] [i_7] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0] [i_6] [i_7] [i_7] [i_12])))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_6] [(short)22] [(short)22] [6U] [i_12] [i_12])) ? (((/* implicit */int) arr_9 [i_0] [i_6] [i_7] [(short)15] [i_12] [(short)13] [(short)15])) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [14U] [i_0] [19])))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_24 [i_12] [i_12] [i_12] [i_12] [9U])))))))));
                        arr_44 [i_12] [i_7] [i_0] [i_6] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (arr_0 [i_0])));
                    }
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        var_36 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (signed char)114)))) ? ((~(arr_23 [i_13] [(short)6] [(signed char)20] [(signed char)20]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_34 [i_0] [i_0] [21ULL] [i_7] [i_13]), (((/* implicit */short) ((var_11) > (arr_21 [i_7] [i_0]))))))))));
                        var_37 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [12U])) ? (arr_23 [i_0] [i_0] [(signed char)11] [9U]) : (arr_23 [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) (signed char)72)) ? (arr_23 [i_13] [i_7] [i_6] [i_0]) : (arr_23 [i_0] [i_6] [i_7] [i_13])))));
                        arr_47 [i_0] [i_6] [i_7] [i_13] [i_0] [i_13] = ((/* implicit */short) max((((((/* implicit */_Bool) ((arr_19 [i_7] [13U] [10U]) + (arr_21 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_7 [i_0] [(short)19] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(short)12] [i_6]))) >= (2364042950U))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) >= (((unsigned int) arr_29 [i_0] [i_6])))))));
                    }
                    arr_48 [i_0] [i_6] = ((/* implicit */short) ((min((((((/* implicit */_Bool) 4125139116U)) ? (arr_23 [i_7] [i_6] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [6U] [i_6] [i_6]))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_6] [10U] [i_7]))) : (arr_0 [i_0]))))) * (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) 3U))))), (arr_17 [i_0] [i_6] [i_6])))));
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) ((signed char) arr_35 [i_0] [22U] [1] [(signed char)15] [i_0])))));
                }
            } 
        } 
    }
    for (short i_14 = 0; i_14 < 25; i_14 += 4) 
    {
        var_39 -= (-(((unsigned int) arr_50 [i_14])));
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 1) 
        {
            for (signed char i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                {
                    var_40 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) * ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                    arr_57 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_49 [(short)4])))) ? (((((/* implicit */int) var_17)) | (((/* implicit */int) (short)-6042)))) : (((/* implicit */int) (signed char)-72))))) ? (((/* implicit */int) (short)17574)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_14] [i_14] [i_14])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_52 [18U]))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 25; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                {
                    var_41 = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)5700)))) == (((unsigned int) (short)29))))));
                    /* LoopSeq 1 */
                    for (signed char i_19 = 0; i_19 < 25; i_19 += 2) 
                    {
                        var_42 |= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)-108)) * (((/* implicit */int) arr_55 [i_19])))))))));
                        /* LoopSeq 1 */
                        for (short i_20 = 0; i_20 < 25; i_20 += 2) 
                        {
                            var_43 = ((((((/* implicit */_Bool) arr_58 [i_20] [i_14])) && (((/* implicit */_Bool) 4176622795U)))) ? (((unsigned int) (signed char)58)) : (((((/* implicit */_Bool) arr_68 [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_17]))) : (arr_58 [0ULL] [i_17]))));
                            var_44 *= ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_66 [(signed char)4] [i_17] [i_18] [i_19] [i_20])) && (((/* implicit */_Bool) (short)5706)))))) * (0U))), ((~(max((((/* implicit */unsigned int) (short)-27926)), (1726796306U)))))));
                            var_45 = var_8;
                        }
                    }
                    var_46 = ((/* implicit */unsigned int) ((min((((((/* implicit */unsigned long long int) 118344501U)) * (arr_66 [i_14] [i_14] [7U] [i_14] [i_14]))), (((/* implicit */unsigned long long int) (-(4294967295U)))))) + (((/* implicit */unsigned long long int) min((((/* implicit */int) min(((short)-16157), (((/* implicit */short) var_14))))), (((((/* implicit */int) var_8)) / (((/* implicit */int) (signed char)-124)))))))));
                    arr_69 [i_17] [i_17] [7U] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_56 [i_18] [i_17] [i_14]))) || (((/* implicit */_Bool) max((((arr_66 [i_14] [i_18] [i_18] [22U] [i_18]) / (((/* implicit */unsigned long long int) arr_49 [13])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_67 [i_14]))))))))));
                }
            } 
        } 
        arr_70 [i_14] = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (signed char)0))))))) ^ (((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-27926))) < (arr_51 [i_14]))), (((((/* implicit */_Bool) arr_58 [i_14] [i_14])) || (((/* implicit */_Bool) arr_50 [i_14])))))))));
    }
}
