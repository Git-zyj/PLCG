/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37075
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((((int) arr_1 [i_2 + 1])) & (((/* implicit */int) ((signed char) arr_1 [i_3 + 2])))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)219)) & (((/* implicit */int) (unsigned char)36))))) != (var_0)))))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_14)), (arr_8 [i_1] [i_1] [i_2] [i_3]))), (((/* implicit */unsigned long long int) max((var_10), (var_10))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_8 [i_1 - 1] [i_2] [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_3 - 2] [(signed char)16] [i_1 + 1])) ? (arr_9 [i_4] [i_4] [i_3 - 2] [i_3 - 2] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_3 - 1] [i_1 - 1])))))))));
                            var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((int) var_12))))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (max((arr_8 [i_3 - 1] [i_1] [(short)7] [i_1 + 1]), (((/* implicit */unsigned long long int) max(((short)20017), (((/* implicit */short) (unsigned char)197)))))))));
                            arr_10 [i_0] [9] [i_1] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20038))) : (3577912756U)))) ? (((((/* implicit */_Bool) 4016615919511384148ULL)) ? (((/* implicit */long long int) max((arr_7 [i_0] [i_1] [i_1] [i_2 + 1] [i_1] [5U]), (((/* implicit */int) (signed char)(-127 - 1)))))) : (36028797018963968LL))) : (((/* implicit */long long int) (+(((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned char)19)))))))));
                        }
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) min((((min((((/* implicit */long long int) var_9)), (var_14))) & (((/* implicit */long long int) ((arr_0 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))), (((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_6 [15])), (arr_9 [2U] [i_0] [i_0] [i_0] [(short)6]))) * (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-20029))))))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_4 [i_0])), (-1LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (arr_9 [10ULL] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) -1078791016)))))))))))));
        arr_11 [i_0] [i_0] = ((/* implicit */signed char) (((-(min((((/* implicit */unsigned int) var_15)), (4294967295U))))) < (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) != (arr_9 [12U] [i_0] [i_0] [i_0] [4U])))))))));
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) (((+(arr_15 [i_5]))) | (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) : (2084852253U)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5]))) : (((((/* implicit */_Bool) arr_14 [i_5])) ? (arr_13 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5])))))));
        var_23 += ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */unsigned int) 2147483647)) : (var_10)))))), ((+(min((arr_13 [i_5]), (((/* implicit */long long int) arr_12 [i_5]))))))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (short)20017))));
    }
    for (short i_6 = 3; i_6 < 21; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            var_25 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_6])) ? (arr_21 [i_6] [i_6] [6U]) : (((/* implicit */unsigned long long int) arr_17 [i_6]))))) ? (max((arr_21 [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [(signed char)0])) < (((/* implicit */int) arr_19 [i_7]))))))))));
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-20018))) | ((~(1442374955U)))))));
                            var_27 ^= ((/* implicit */unsigned short) var_10);
                            var_28 = max((((/* implicit */long long int) ((((/* implicit */int) ((short) var_11))) & (((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-32166))))))))), (max((((long long int) arr_20 [i_6] [i_7] [i_7])), (arr_17 [i_6]))));
                            arr_29 [i_6 - 3] [i_7] [i_8] [(unsigned char)15] [i_10] = ((/* implicit */unsigned long long int) (unsigned char)212);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            arr_32 [i_6] [10ULL] [i_6] = ((/* implicit */long long int) min((((max((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_16 [i_6 - 3] [i_6 - 3]))) & (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 5106266952695069457LL)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (short)20017)))), (((/* implicit */int) ((arr_31 [i_6]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_6] [i_6])))))))))));
            /* LoopSeq 4 */
            for (unsigned int i_12 = 1; i_12 < 22; i_12 += 4) /* same iter space */
            {
                arr_37 [i_6] [i_6] [i_12 - 1] [i_11] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_35 [i_6 - 2] [i_11] [i_6] [12])) : (((/* implicit */int) arr_35 [i_6 - 1] [i_11] [i_12] [18U])))) >= (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_35 [i_6 - 1] [i_11] [i_11] [i_12 + 1])) : (((/* implicit */int) arr_35 [i_6 + 1] [4U] [i_12] [i_12]))))));
                var_29 += ((/* implicit */long long int) ((min((((/* implicit */unsigned int) max((var_9), (var_9)))), ((+(var_0))))) < (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_10)) ? (2147483647) : (((/* implicit */int) var_6)))))))));
                arr_38 [18U] [18U] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)15655)) <= (((/* implicit */int) ((short) 186891228U)))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6 - 3] [i_12 - 1] [i_6 - 3])))))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    for (unsigned int i_14 = 4; i_14 < 21; i_14 += 3) 
                    {
                        {
                            var_30 += ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) arr_26 [i_6] [i_11] [i_6] [i_13] [i_14])))), (((/* implicit */int) (unsigned short)4)))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_30 [i_13] [i_14 - 2])) ? (arr_34 [i_14] [i_6 - 2] [i_6 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_12])))))))));
                            var_31 = ((/* implicit */signed char) arr_40 [i_6 - 1]);
                        }
                    } 
                } 
            }
            for (unsigned int i_15 = 1; i_15 < 22; i_15 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_6 + 1] [i_6 - 3]))))) && (((/* implicit */_Bool) ((((arr_47 [i_15] [9U] [i_11] [i_6]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))))) ? (((/* implicit */int) ((short) arr_47 [15U] [i_11] [i_11] [17U]))) : (max((((/* implicit */int) var_11)), (var_7))))))));
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    for (unsigned int i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        {
                            arr_53 [i_6] [i_11] [i_6] [i_16] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)65)) == (((/* implicit */int) var_5))));
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) min((arr_36 [i_16]), (((/* implicit */unsigned short) (signed char)0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-705097853)))) ? ((-(arr_44 [i_17] [9LL] [9LL] [i_11] [i_6]))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)32767)))))))) : (max((((/* implicit */unsigned long long int) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_15] [(unsigned char)4] [(unsigned char)4] [i_16])))))), (((((/* implicit */_Bool) var_14)) ? (10494584888133693044ULL) : (((/* implicit */unsigned long long int) -1)))))))))));
                            arr_54 [i_6] [i_11] [i_6] [i_6] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) min((((((/* implicit */int) (unsigned char)36)) < (((/* implicit */int) (short)-20029)))), (((var_4) == (16777214U)))))) & (-1)));
                        }
                    } 
                } 
                arr_55 [i_6] [i_11] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_6] [i_11] [i_15] [i_6 - 3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4611686018427387903ULL)) ? (1942775528U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (min((4611686018427387894ULL), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_6 - 1])) ? (max((arr_31 [i_6]), (((/* implicit */unsigned int) (signed char)57)))) : (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) -705097853)))))))));
                var_34 = ((/* implicit */long long int) ((int) min((arr_26 [i_15 - 1] [i_15 - 1] [1ULL] [i_6 + 2] [i_6 - 2]), (arr_26 [i_15 - 1] [i_15 - 1] [i_15 - 1] [(unsigned short)17] [i_6 - 1]))));
            }
            /* vectorizable */
            for (unsigned int i_18 = 1; i_18 < 22; i_18 += 4) /* same iter space */
            {
                arr_58 [i_6 - 2] [i_11] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)30407)) * (((/* implicit */int) (unsigned char)88))));
                /* LoopNest 2 */
                for (long long int i_19 = 1; i_19 < 19; i_19 += 3) 
                {
                    for (long long int i_20 = 0; i_20 < 23; i_20 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */int) var_6);
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_0))))))))));
                            arr_64 [i_6 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 8U)) * (10494584888133693044ULL)))) ? (arr_49 [i_19 + 3] [i_19 + 2] [i_19 + 1] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0)) || ((_Bool)0)))))));
                            var_37 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_43 [i_6 - 1] [i_20] [i_18 - 1] [i_6 - 1] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) 705097852)) : (arr_17 [i_6 + 2])))) : (((((/* implicit */_Bool) var_12)) ? (7952159185575858556ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73)))))));
                            var_38 -= ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
            }
            for (unsigned int i_21 = 1; i_21 < 22; i_21 += 4) /* same iter space */
            {
                var_39 = var_4;
                var_40 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_14), (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned char) arr_23 [i_21 + 1] [i_21] [i_6 - 3] [i_6 - 3])))))) : (((((/* implicit */_Bool) var_2)) ? (13835058055282163721ULL) : (((/* implicit */unsigned long long int) 0)))))) ^ (((/* implicit */unsigned long long int) ((max((arr_28 [i_6] [i_6 - 2] [i_11] [i_11] [i_11] [i_11] [i_21]), (((/* implicit */long long int) var_15)))) ^ (((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (var_9)))))))));
            }
            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : (0U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))) * (2094863290U))) : (((/* implicit */unsigned int) min((var_9), (((/* implicit */int) (signed char)32))))))))))));
        }
        arr_68 [i_6] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((4294967295U) & (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_6 - 3])))))))), (((((/* implicit */_Bool) -6419394)) ? (8594899008366356999LL) : (max((0LL), (((/* implicit */long long int) (signed char)99))))))));
    }
    var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) var_13))));
    var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) (+(max((((/* implicit */long long int) var_1)), (((var_14) - ((-9223372036854775807LL - 1LL)))))))))));
}
