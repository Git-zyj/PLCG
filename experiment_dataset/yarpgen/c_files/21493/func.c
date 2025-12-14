/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21493
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_1 - 2] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */unsigned char) var_10);
                            var_13 = ((/* implicit */_Bool) min((var_13), (min(((!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))), (arr_7 [i_3] [i_3] [i_3])))));
                            var_14 *= (+(((/* implicit */int) ((_Bool) ((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))))))));
                        }
                        arr_15 [i_0 + 1] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_0]))))))))));
                        arr_16 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) (+(((((/* implicit */int) min((((/* implicit */short) var_2)), ((short)-26095)))) ^ (((((/* implicit */int) var_1)) & (((/* implicit */int) (short)29985))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_2] [i_0] [i_0] [i_0]))))), (var_3)));
                        var_16 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_5] [i_2 - 1] [i_5]))))), ((-(6597069766656ULL)))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0] [i_5])) : (((/* implicit */int) (unsigned char)75))))) ? (((/* implicit */int) (unsigned char)75)) : ((~(((/* implicit */int) var_0))))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_4)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (short)-31108)) <= (((/* implicit */int) (signed char)29)))))));
                                var_19 = ((/* implicit */unsigned char) (+((~(9223372036854644736LL)))));
                            }
                        } 
                    } 
                    arr_27 [i_2] [i_2] [i_0] = ((/* implicit */short) ((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))) : (arr_24 [i_0] [i_0] [i_0])));
                }
                /* vectorizable */
                for (signed char i_8 = 1; i_8 < 24; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((var_20), ((((-(((/* implicit */int) arr_35 [i_0] [i_0] [i_8] [i_8 - 1] [i_9] [i_10] [i_10])))) * (((/* implicit */int) arr_32 [i_10] [i_8 - 1] [i_8] [i_0 - 1] [i_0]))))));
                                arr_36 [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)10);
                                arr_37 [i_0 + 2] [i_0 + 1] [i_1] [i_8 - 1] [i_8] [i_0] [i_10] = (-(((/* implicit */int) var_4)));
                                arr_38 [i_1 - 1] [i_8] [i_0] [i_10] [i_1] [i_8] [i_10] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_0] [i_1 + 1])) + (2147483647))) << (((/* implicit */int) var_8))))) : (((/* implicit */unsigned char) ((((((((/* implicit */int) arr_4 [i_0] [i_1 + 1])) - (2147483647))) + (2147483647))) << (((/* implicit */int) var_8)))));
                                arr_39 [i_1 + 1] [i_1 - 2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_11 [i_1] [i_8] [i_0] [i_1])) << (((((/* implicit */int) var_11)) - (12726))))));
                            }
                        } 
                    } 
                    var_21 += var_9;
                }
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    var_22 += (~((+(((var_12) / (var_3))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((((/* implicit */int) var_8)) % (((/* implicit */int) arr_9 [i_0 + 2])))))))));
                    var_24 -= ((/* implicit */long long int) ((_Bool) min(((-(((/* implicit */int) arr_28 [i_0] [i_1] [i_1] [i_0])))), (((/* implicit */int) var_11)))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (((+(var_3))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                        var_26 ^= ((/* implicit */unsigned short) (((+(arr_0 [i_0 - 1] [i_1 - 1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), (arr_19 [i_0 - 1] [i_0] [i_1] [i_0 + 1])))))));
                    }
                }
                for (short i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 2; i_14 < 23; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */short) (-(arr_3 [i_15] [i_14 + 1])));
                                var_28 = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 1; i_16 < 22; i_16 += 2) 
                    {
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) ((_Bool) min((arr_54 [i_0] [i_1] [i_16 + 3] [i_17 - 1] [i_0 + 1] [i_1]), (arr_54 [i_0] [i_0] [i_16 + 1] [i_17 - 1] [i_0 - 1] [i_0]))));
                                var_30 *= ((/* implicit */unsigned long long int) arr_11 [i_17] [i_17 - 1] [i_17 - 1] [i_17 - 1]);
                                arr_61 [i_0] [i_0] = ((/* implicit */signed char) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (signed char i_19 = 1; i_19 < 23; i_19 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_1), (var_1))))))), (((arr_65 [i_0] [i_1] [i_0] [i_19 - 1]) | (((/* implicit */long long int) ((/* implicit */int) max((var_0), (((/* implicit */signed char) var_8))))))))));
                                arr_69 [i_0] [i_13] [i_13] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (2147483645) : (((/* implicit */int) arr_51 [i_0]))))), (((arr_57 [i_0] [i_1] [i_0] [i_19]) ? (3935886555U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                                var_32 = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) min((var_2), (var_2)))))));
                                var_33 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((15048230468619650524ULL), (((/* implicit */unsigned long long int) (unsigned char)172)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_13] [i_0 + 1])))))) ? (((var_3) << (((/* implicit */int) arr_49 [i_1 - 1] [i_1] [i_0 + 2] [i_1] [i_0 + 2] [i_19 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-78)) > (((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */short) min((((/* implicit */int) (!(var_5)))), ((~(((/* implicit */int) arr_67 [i_13] [i_0] [i_13] [i_13] [i_13] [i_13]))))));
                }
                arr_70 [i_0] [i_0] = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) arr_18 [i_0] [i_0] [i_0 - 1] [i_0])))));
                var_35 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
                var_36 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_18 [i_0] [i_1] [i_1] [i_0]), (var_9)))) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_35 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1])))))) * (((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (unsigned char i_20 = 0; i_20 < 25; i_20 += 1) 
                {
                    for (short i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) : (max((((/* implicit */unsigned long long int) var_6)), (arr_31 [i_20])))))));
                            var_38 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_21 [i_0] [i_1 - 1] [i_1 - 1] [i_0])) || (((/* implicit */_Bool) arr_21 [i_0] [i_1 + 1] [i_1 - 1] [i_0]))))));
                            var_39 += ((/* implicit */_Bool) ((unsigned short) (-(((((((/* implicit */int) (signed char)-20)) + (2147483647))) >> (((/* implicit */int) var_4)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_40 -= ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (signed char i_22 = 0; i_22 < 14; i_22 += 1) 
    {
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            {
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_22]))) : (arr_52 [i_23] [i_23] [i_22] [i_23] [i_22])))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_46 [i_23] [i_23] [i_23] [i_23])))) ? (((/* implicit */int) arr_77 [i_22] [i_23])) : ((+(((/* implicit */int) var_8)))))))));
                var_42 = (!(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) arr_62 [i_23])))));
            }
        } 
    } 
    var_43 += ((/* implicit */short) (~(((/* implicit */int) var_5))));
}
