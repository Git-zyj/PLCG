/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21691
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
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((min((max((((/* implicit */unsigned long long int) var_8)), (arr_6 [(signed char)12] [i_2] [1U]))), (((/* implicit */unsigned long long int) -2137138022106287908LL)))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_9))))))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)104)))) <= (max(((+(((/* implicit */int) (signed char)-118)))), (((/* implicit */int) (signed char)-104)))))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((min((arr_10 [i_3] [(_Bool)1] [i_3 + 2] [i_3 - 2] [i_3 + 3]), (var_2))), (((/* implicit */long long int) ((_Bool) arr_10 [i_3] [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3 + 3]))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_21 &= var_14;
                        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [16U] [i_1] [i_4 - 1]))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) ((unsigned char) 1322593623U));
                                arr_22 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_5 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0])))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        arr_30 [(unsigned short)15] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)104), ((signed char)0))))) == ((+(arr_24 [i_0] [i_0] [i_0])))));
                        arr_31 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)17287))));
                        var_24 ^= ((/* implicit */_Bool) var_4);
                        var_25 += ((/* implicit */signed char) arr_26 [i_8] [i_1]);
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        var_26 = ((((/* implicit */_Bool) min((1305525990U), (arr_20 [i_0 - 3] [i_0] [i_0 - 3])))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2757716937762698261ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_5)))))))) : (((((/* implicit */_Bool) 543387819U)) ? (((((/* implicit */_Bool) arr_17 [i_1] [i_8] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))))));
                        arr_35 [i_0] [i_1] [i_0] [i_10] = ((/* implicit */unsigned int) ((arr_19 [i_0 - 2] [i_0] [(signed char)1] [i_0 - 2]) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)53138)))))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            arr_38 [i_0] [i_1] [1U] [i_0] [i_0] [i_10] [i_11] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (short)2047)), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53138)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (6094188671152753580LL))))));
                            arr_39 [(signed char)1] [i_0 - 1] [(signed char)1] [i_0] [i_0 - 2] [i_0] = ((/* implicit */signed char) (~(1305525999U)));
                            var_27 += ((/* implicit */unsigned short) max(((+((+(((/* implicit */int) arr_16 [i_0] [i_0] [i_11] [i_0 - 3] [i_0 + 1] [i_0])))))), ((~(((/* implicit */int) arr_16 [i_0 + 1] [i_0] [i_1] [i_1] [i_0 + 1] [i_0 + 1]))))));
                            var_28 -= ((/* implicit */unsigned long long int) ((short) min((min((((/* implicit */unsigned long long int) arr_32 [i_11] [i_11] [(unsigned short)16] [(unsigned short)16] [i_11] [4LL])), (2757716937762698251ULL))), (((/* implicit */unsigned long long int) max((3023288337U), (((/* implicit */unsigned int) (unsigned short)21))))))));
                            arr_40 [i_11] [i_0] [i_8] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (~(arr_24 [(signed char)5] [i_0] [i_0])))))) & ((~(((var_6) << (((/* implicit */int) (signed char)6)))))));
                        }
                    }
                    for (unsigned short i_12 = 1; i_12 < 15; i_12 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (4611545280939032576LL) : (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0]))))))))), (((unsigned long long int) arr_19 [i_12 + 2] [i_1] [i_0 - 1] [3LL]))));
                        arr_43 [i_0] [(short)0] [1LL] [(signed char)10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_34 [(unsigned short)4] [(unsigned short)4] [i_8] [i_8] [i_8] [(signed char)7]), (((/* implicit */long long int) (~(arr_20 [9ULL] [i_0] [9ULL]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_12] [(unsigned char)0] [i_0 - 3]))) : (((max((0LL), (((/* implicit */long long int) 2989441305U)))) >> (((var_9) - (6265937280732171940ULL)))))));
                        var_30 = ((/* implicit */signed char) ((max((4745229099959355786LL), (((/* implicit */long long int) 1305525990U)))) <= (((((/* implicit */_Bool) 1699693491U)) ? (arr_9 [i_12 - 1] [i_0 - 1] [i_0 - 2]) : (arr_9 [i_12 + 3] [i_12 + 3] [i_0 - 3])))));
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)124)) ? (((((((/* implicit */_Bool) var_11)) ? (arr_10 [i_1] [16U] [16U] [(unsigned short)10] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-17288))))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_12] [2LL] [i_1] [i_1] [2LL] [2LL])), (var_11))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_17)))))))));
                    }
                    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 11416756126120405113ULL))));
                }
                var_33 = ((/* implicit */unsigned int) ((long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (503316480U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned char)1] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        for (long long int i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 2; i_15 < 16; i_15 += 3) 
            {
                {
                    arr_51 [i_13] [i_14] [(signed char)10] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((346167983U) << (((-5322876518615777747LL) + (5322876518615777770LL)))))) ^ (max((-5056256275429393018LL), (((/* implicit */long long int) (unsigned short)27))))));
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), ((~(2422251404034145584ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) 0U)) | (arr_34 [i_13] [i_13] [15U] [(short)0] [(unsigned short)0] [i_15])))) ? (((/* implicit */unsigned long long int) min((arr_34 [i_15] [i_15 - 1] [i_15] [i_15 - 1] [i_15] [i_15 + 1]), (((/* implicit */long long int) 60654483U))))) : (min((7534855558894154847ULL), (((/* implicit */unsigned long long int) var_15))))))));
                    arr_52 [i_13] [i_13] = ((/* implicit */signed char) (-(8U)));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned short) var_12);
}
