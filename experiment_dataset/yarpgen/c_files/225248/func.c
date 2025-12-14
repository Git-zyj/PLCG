/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225248
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
    var_10 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) ((unsigned short) var_2))), (var_9))), (((/* implicit */unsigned int) max(((~(var_8))), (min((((/* implicit */int) var_6)), (var_0))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) min(((((_Bool)0) ? (((/* implicit */long long int) var_3)) : (var_4))), (((/* implicit */long long int) (signed char)-21)))))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) min(((~(min((var_3), (((/* implicit */unsigned int) var_1)))))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)31865))))))))))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) min(((-(arr_3 [i_0]))), (((/* implicit */long long int) ((((var_8) + (2147483647))) << (((((min((var_4), (((/* implicit */long long int) var_8)))) + (1918942250LL))) - (21LL)))))))))));
        var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (arr_1 [i_0])))) ? (((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-31859)))) : (var_0)))) ? ((-(arr_1 [i_0]))) : (((/* implicit */long long int) (~(((int) (short)31848)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2] [i_1] [i_3 + 1])), (max(((((_Bool)0) ? (arr_1 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) arr_7 [(unsigned short)4] [i_1] [i_2] [i_3]))))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            arr_14 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] [i_4])))) ? (((/* implicit */int) ((arr_3 [i_4]) != (var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4])))))));
                            arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) min(((-(((/* implicit */int) var_1)))), (((var_8) | ((-(var_0)))))));
                            arr_16 [i_4] [i_1] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 5340440224167385968ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31835))) : (779559385U))));
                            var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_3 + 1]))));
                        }
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (~(min((var_0), ((-(((/* implicit */int) arr_7 [i_0] [i_2] [i_0] [i_5]))))))));
                            var_17 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) var_8)), ((~(var_9)))))));
                            arr_20 [i_0] [(short)3] [i_2] [i_3] [i_3] [i_5] [i_0] = ((/* implicit */unsigned short) min(((((~(arr_2 [i_0]))) >> (((var_5) - (2029699007U))))), (((/* implicit */int) (short)31859))));
                        }
                        var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 2]))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        var_19 = min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (arr_3 [i_6]));
        var_20 &= min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) max((((/* implicit */short) arr_0 [i_6])), (arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) : ((-(((/* implicit */int) arr_9 [i_6]))))))), (min((arr_18 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */long long int) min((arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_10 [i_6] [15U] [15U] [15U] [i_6])))))));
        /* LoopNest 2 */
        for (signed char i_7 = 2; i_7 < 17; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)32763)) ? (130560U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_6] [i_7 - 1] [i_7] [i_8])) - (var_8))))));
                    arr_30 [i_8] [i_8] [i_7 - 1] [i_6] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) arr_18 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])), (((((/* implicit */_Bool) (unsigned char)255)) ? (5340440224167385968ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    var_22 = ((/* implicit */signed char) arr_10 [i_6] [i_7] [i_7] [i_8] [(signed char)20]);
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_6] [i_6])))))) ? (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)24576))))) | (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)55308)) ? (((/* implicit */int) (unsigned short)55492)) : (((/* implicit */int) (unsigned short)43747)))))));
                }
            } 
        } 
        arr_31 [7] [i_6] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (+(var_3)))), (min((((/* implicit */unsigned long long int) (signed char)127)), (5340440224167385968ULL))))) << (((((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) - (8569)))));
        arr_32 [i_6] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_0) : ((~(((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_9])) ? (((/* implicit */int) ((signed char) (unsigned short)0))) : (((/* implicit */int) arr_0 [i_9]))));
        arr_36 [i_9] &= ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_6 [(_Bool)1] [i_9] [i_9])));
    }
    /* vectorizable */
    for (long long int i_10 = 1; i_10 < 8; i_10 += 1) 
    {
        arr_40 [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(arr_17 [i_10] [i_10] [i_10] [i_10 - 1] [i_10] [i_10] [i_10]))))));
        arr_41 [i_10 + 1] = arr_39 [i_10 - 1];
        /* LoopSeq 1 */
        for (signed char i_11 = 3; i_11 < 9; i_11 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (32760U))) < (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_10 + 2] [i_11 - 1] [i_11 - 1] [i_10 + 2])) ? ((+(((/* implicit */int) var_2)))) : ((-(var_8))))))));
            /* LoopSeq 3 */
            for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_23 [i_14])) ? (arr_33 [i_11]) : (((/* implicit */unsigned long long int) arr_45 [i_13] [i_11 - 3] [i_12] [i_13]))))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_7))));
                            arr_53 [i_10 - 1] [i_11] [i_12] [i_13] [i_14] [i_14] = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_44 [i_12] [i_13])))) : (arr_3 [i_10 + 1])));
                            var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_10 + 2] [i_10 + 1] [i_10 - 1] [i_10 + 2]))));
                        }
                    } 
                } 
                var_29 += ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_37 [i_10])))));
            }
            for (unsigned short i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_10] [i_10] [i_10] [i_10] [i_10])))))));
                /* LoopNest 2 */
                for (signed char i_16 = 1; i_16 < 9; i_16 += 4) 
                {
                    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        {
                            arr_61 [i_10] [(unsigned short)9] [(unsigned short)9] [i_16] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_10] [i_10]))))) ? (var_8) : ((+(((/* implicit */int) (unsigned short)65535))))));
                            var_31 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_10] [2U] [i_10] [i_10] [(unsigned short)0] [i_16 - 1])))))));
                            var_32 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
            for (short i_18 = 3; i_18 < 9; i_18 += 4) 
            {
                /* LoopNest 2 */
                for (short i_19 = 1; i_19 < 6; i_19 += 4) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_69 [i_20] [i_18] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_50 [i_10 + 1] [i_10] [i_10]) : (arr_5 [i_19] [i_18] [i_11])));
                            var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_24 [i_19])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [6U] [i_18 - 1] [i_18 + 1] [i_19] [i_19 - 1]))) : (var_4)));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_10 + 2] [i_10 + 2] [i_18 - 3] [i_11 + 1] [i_18 - 3])) ? (((/* implicit */int) arr_10 [i_10] [i_10] [i_18 - 1] [i_11 - 1] [(unsigned char)0])) : (((/* implicit */int) arr_10 [0] [0] [i_18 - 2] [i_11 - 1] [i_18]))));
                arr_70 [i_10] [i_11] [i_11] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31846))) | (13106303849542165648ULL)));
                /* LoopNest 2 */
                for (unsigned int i_21 = 0; i_21 < 10; i_21 += 4) 
                {
                    for (int i_22 = 0; i_22 < 10; i_22 += 4) 
                    {
                        {
                            var_35 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_9)))) ? ((((_Bool)0) ? (((/* implicit */int) arr_66 [i_10] [i_11 - 2] [i_11] [i_18] [i_21] [(signed char)7] [i_22])) : (((/* implicit */int) arr_74 [i_22] [i_21] [i_18] [i_11 - 3] [i_10])))) : (((((/* implicit */_Bool) (short)22172)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))));
                            arr_77 [i_10 + 2] [i_10 + 2] [i_18] [i_22] [i_22] [i_10 + 2] [i_21] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65529))))) <= ((+(var_9)))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_11 - 1])) ? (((/* implicit */long long int) var_9)) : (arr_68 [i_10 + 2] [i_10 + 2] [i_11 - 3] [i_11 + 1] [i_18 - 3] [i_18 - 1])));
                        }
                    } 
                } 
            }
            arr_78 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7059)) ? (arr_72 [i_11 + 1] [i_11] [i_11 - 1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_10] [i_10 + 2] [i_11 - 2] [i_11] [i_11 - 1] [i_10 + 2] [i_11])))));
        }
    }
}
