/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236378
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((var_3) & (var_5))))) ? (((/* implicit */unsigned long long int) -2386123427680753281LL)) : ((+((-(var_8))))))))));
    var_17 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            var_18 ^= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (-(arr_5 [i_0 + 2] [i_0 + 2])))) ? (var_3) : (((/* implicit */int) var_13))))));
            var_19 = ((/* implicit */unsigned char) ((unsigned int) min((var_11), (((/* implicit */unsigned long long int) 17U)))));
            var_20 = ((/* implicit */int) arr_2 [i_0 - 2]);
        }
        for (int i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            var_21 = ((var_12) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 764581883)) ? (((/* implicit */int) (unsigned short)36488)) : (((/* implicit */int) var_13))))) : ((-(var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 0U)) * (((var_0) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_11 [i_2] [i_0] [i_0 - 2] [i_2]))))) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) arr_4 [i_2])))) : (((((/* implicit */_Bool) 7914716011627341972LL)) ? (2074434489) : (((/* implicit */int) (signed char)-38))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_4))) ? ((+(arr_5 [i_0] [i_0 - 2]))) : (((long long int) var_1)))) : (var_0))))));
                        arr_14 [i_0] = arr_5 [i_0 - 3] [i_2];
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 14; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_10))));
                            var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_2 + 2] [i_5 + 2] [i_0]))));
                            var_25 = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */unsigned long long int) 5657397869016283946LL)) : (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) 550289523U))))))) ? (((/* implicit */unsigned long long int) arr_16 [i_0] [i_2] [i_3] [i_2] [(_Bool)1])) : (((((/* implicit */_Bool) arr_11 [i_3] [i_2 + 3] [i_3] [i_3])) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 0)) : (arr_12 [i_0 - 1] [i_2] [i_2] [(signed char)14] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) (-(var_15))))))));
                            arr_21 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((var_3) >= (var_6))) ? (((/* implicit */int) ((short) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))) : (-1531343746))))));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 3; i_7 < 13; i_7 += 3) 
                        {
                            var_27 -= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) == (0ULL)))) == (((/* implicit */int) arr_10 [i_2] [i_2] [i_3]))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (_Bool)1))));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_15))));
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            arr_29 [i_0 - 3] [i_0] = ((/* implicit */long long int) var_13);
                            arr_30 [i_0] [i_2 + 3] [12ULL] [i_3] [i_0] [i_0] [i_8] = ((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0 + 3] [i_0 + 3]));
                        }
                    }
                } 
            } 
            var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_7 [i_0 - 3]) ? (((/* implicit */int) arr_7 [i_0 + 1])) : (((/* implicit */int) (_Bool)1)))))));
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) 93853304)) && (((/* implicit */_Bool) var_3)))))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 1; i_9 < 14; i_9 += 1) 
        {
            arr_35 [i_0] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_9] [(short)6] [(short)6] [i_0] [i_9 + 2]))));
            /* LoopNest 3 */
            for (long long int i_10 = 3; i_10 < 15; i_10 += 4) 
            {
                for (unsigned int i_11 = 1; i_11 < 13; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_32 *= ((/* implicit */signed char) var_7);
                            arr_46 [i_0] [i_0] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)53))))) : (arr_40 [i_9 + 1] [i_9 + 1] [i_9 + 2] [i_0])));
                            var_33 = (-((-(var_9))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */long long int) (((+(arr_17 [i_0] [i_0] [i_9] [i_9] [i_9 + 2] [i_9] [i_9]))) | (((var_11) % (((/* implicit */unsigned long long int) var_5))))));
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((4294967291U) % (((/* implicit */unsigned int) -1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)6960)))) : (var_8)));
        }
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    var_36 = ((/* implicit */int) ((signed char) ((var_7) >> (((/* implicit */int) var_12)))));
                    arr_58 [i_0] [i_14] [i_0] [i_0] = ((_Bool) arr_49 [i_0 - 1] [15ULL]);
                    var_37 &= ((/* implicit */signed char) var_10);
                    var_38 = ((/* implicit */unsigned int) var_13);
                }
                arr_59 [(unsigned short)11] [i_0] [(_Bool)1] [i_14] = ((/* implicit */unsigned short) var_8);
            }
            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((1584197547U) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
            /* LoopSeq 1 */
            for (int i_16 = 1; i_16 < 15; i_16 += 3) 
            {
                arr_62 [i_0 + 3] [i_13] [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (short)-22)) || (((/* implicit */_Bool) var_10)))));
                var_40 -= ((/* implicit */signed char) arr_13 [13] [i_13] [(unsigned char)0] [i_16 - 1]);
            }
        }
        var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((unsigned char) var_13)))));
        /* LoopSeq 1 */
        for (long long int i_17 = 3; i_17 < 14; i_17 += 1) 
        {
            var_42 = ((/* implicit */signed char) arr_3 [i_17 + 1] [i_17] [i_0 - 1]);
            var_43 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)240)) | (var_5))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-74)) : (var_5)))))), (((long long int) ((unsigned long long int) (short)3176)))));
            var_44 = ((/* implicit */_Bool) arr_49 [i_0] [i_17 + 2]);
            /* LoopSeq 3 */
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                var_45 ^= ((/* implicit */_Bool) var_2);
                /* LoopSeq 1 */
                for (unsigned long long int i_19 = 2; i_19 < 15; i_19 += 2) 
                {
                    arr_73 [i_0] [i_17] [i_0] [i_19] = ((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0 - 2] [i_17] [i_18] [i_19 - 2]);
                    var_46 = (signed char)111;
                }
            }
            for (short i_20 = 0; i_20 < 16; i_20 += 3) /* same iter space */
            {
                var_47 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) ^ (max((((/* implicit */unsigned long long int) -8844828241229150978LL)), (arr_26 [(unsigned char)14] [i_17 + 1] [i_17])))));
                var_48 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [12U] [i_20] [i_20])) ? (var_11) : (((/* implicit */unsigned long long int) 2856290118U))));
            }
            for (short i_21 = 0; i_21 < 16; i_21 += 3) /* same iter space */
            {
                var_49 *= ((/* implicit */_Bool) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_0 + 3] [i_17 + 1] [(_Bool)1])) == (((/* implicit */int) (unsigned char)238))))))));
                var_50 = ((/* implicit */_Bool) ((unsigned int) (short)-16960));
                var_51 += ((/* implicit */short) max((var_5), ((~(((/* implicit */int) arr_11 [(signed char)8] [i_17 + 1] [i_17 - 3] [i_17 + 2]))))));
            }
        }
        var_52 += ((/* implicit */long long int) ((signed char) ((((0) > (var_3))) ? (((/* implicit */unsigned long long int) max((1075044773), (((/* implicit */int) (short)14431))))) : (((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
        var_53 = ((((/* implicit */_Bool) ((unsigned int) var_4))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
    }
}
