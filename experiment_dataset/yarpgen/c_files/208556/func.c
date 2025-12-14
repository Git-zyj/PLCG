/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208556
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
    var_15 = ((/* implicit */signed char) var_11);
    var_16 = ((/* implicit */signed char) max(((short)728), ((short)4095)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0 + 1]) : (arr_0 [i_1]))), (((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0])) ^ (arr_0 [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) var_1))))))));
                arr_5 [i_0 - 1] [i_0 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)63))))) && (((/* implicit */_Bool) (signed char)5)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) % ((+(10618297334009279509ULL))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))))) ? (((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (((/* implicit */int) max(((short)-4095), ((short)4095)))) : (((((/* implicit */_Bool) 7828446739700272122ULL)) ? (2147483647) : (((/* implicit */int) var_3)))))) : (((int) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])))))));
                                var_19 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 + 2])) | (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned char)31)) : (296803153))))))));
                                var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_3] [i_3] [i_2 - 2] [i_2 + 1] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 1] [i_2 + 1] [i_4 + 1]))) : (var_4)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 3; i_5 < 19; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (short i_7 = 2; i_7 < 21; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        arr_27 [i_8] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_22 [i_5 + 1] [i_6] [i_8 - 1])) && (arr_17 [i_5 + 2]))));
                        arr_28 [i_5] [i_5] [i_5] [i_5] [(signed char)11] [i_5 + 1] = ((((/* implicit */int) (short)4095)) / ((+(((/* implicit */int) var_13)))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 3; i_9 < 21; i_9 += 3) 
                        {
                            arr_33 [i_5] [i_6] [i_6] [i_7] [i_8] [i_8] [i_9 - 3] = ((/* implicit */signed char) (((-((+(((/* implicit */int) var_8)))))) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)12459)) : (((/* implicit */int) (signed char)125))))) && (((/* implicit */_Bool) arr_9 [i_5 + 3] [i_6] [i_7 - 1] [i_8 + 1] [i_9 - 1] [i_9])))))));
                            var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_7 - 2] [i_9 + 1])) ? (((/* implicit */int) arr_19 [i_7 - 2] [i_9 - 3])) : (((/* implicit */int) arr_19 [i_7 + 1] [i_9 - 3]))))) ? (((((/* implicit */_Bool) arr_19 [i_7 + 1] [i_9 - 2])) ? (((/* implicit */int) arr_19 [i_7 - 2] [i_9 - 2])) : (((/* implicit */int) arr_19 [i_7 + 1] [i_9 + 1])))) : (((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) arr_19 [i_7 - 1] [i_9 + 1])) : (((/* implicit */int) arr_19 [i_7 + 1] [i_9 - 3]))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_22 = ((((/* implicit */_Bool) ((long long int) var_11))) ? (((((/* implicit */int) (unsigned char)245)) % (((/* implicit */int) ((unsigned char) arr_2 [i_8] [i_7 - 1]))))) : (((((/* implicit */int) arr_8 [i_10] [i_8] [i_7] [i_6] [i_5 + 2])) >> (((((/* implicit */int) ((short) arr_36 [i_5] [i_5] [i_6] [i_7] [i_7] [i_8 + 2] [i_10]))) + (32704))))));
                            arr_38 [i_5] [i_6] [i_7] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_8 + 1] [i_7 - 1] [i_5 - 3])) ? (((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */int) (short)17987)) : (286555564))) : ((-(((/* implicit */int) (short)-4097))))))) == (4683116967839968940LL)));
                            arr_39 [i_8 + 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5 + 3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)0))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)248)) / (((/* implicit */int) var_5))))) / ((-(4233104739557040466ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)17325), ((short)-17998)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) arr_6 [i_5 + 2] [i_6] [i_7 - 2] [i_10])))))));
                            var_23 = arr_19 [i_5] [i_10];
                            var_24 = var_5;
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (short)-4089)))) <= (((/* implicit */int) (unsigned char)215)))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_2 [i_8 + 2] [i_7 - 1]))))) : (((/* implicit */int) max((((((/* implicit */_Bool) arr_40 [i_5] [i_5] [i_7] [i_8] [i_8])) || (((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5] [i_5])))), (((((/* implicit */int) (short)18002)) >= (((/* implicit */int) var_11)))))))));
                            arr_42 [4ULL] [4ULL] [i_7] [i_8] [i_11] = ((/* implicit */signed char) (~(max(((~(arr_18 [i_11] [i_6]))), ((+(((/* implicit */int) (short)4097))))))));
                            var_26 = arr_16 [i_8];
                            var_27 *= (unsigned char)238;
                        }
                    }
                    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) (((+(var_4))) == (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5 - 3] [12])))))) < (arr_40 [i_12] [i_7] [i_6] [i_6] [i_5 + 3]))))));
                        arr_45 [i_5 + 2] [i_6] [i_7] [i_7] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (unsigned char)215)))))) ? (((((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_7] [i_12])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)84)) == (arr_40 [i_5 + 3] [(signed char)18] [i_7] [i_7] [i_7])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)123)) && (((/* implicit */_Bool) arr_4 [i_7]))))))) : (((((/* implicit */_Bool) arr_37 [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_5] [(signed char)9] [i_6] [i_7 - 1] [i_6]))))) : (((/* implicit */int) ((short) var_6)))))));
                        var_29 -= ((/* implicit */_Bool) var_13);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_13 = 0; i_13 < 22; i_13 += 4) 
                        {
                            var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_48 [i_7 - 1] [i_5 - 2])) : (((/* implicit */int) arr_48 [i_7 + 1] [i_5 + 1]))));
                            var_31 = ((/* implicit */unsigned char) ((signed char) (unsigned char)63));
                        }
                    }
                    var_32 = ((/* implicit */long long int) max((var_32), (((((/* implicit */long long int) ((((/* implicit */int) var_13)) % (((/* implicit */int) arr_2 [i_5 + 3] [i_6]))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [6U]))) : (18446744073709551609ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)4111))) : (((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_7 - 2] [(short)4])) ? (4683116967839968915LL) : (((/* implicit */long long int) arr_18 [i_5] [(signed char)3]))))))))));
                    var_33 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max(((signed char)-63), (arr_20 [i_5] [i_6] [i_6] [i_7])))) ? (((/* implicit */int) arr_6 [i_5 - 1] [i_6] [i_7] [i_7 - 1])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_22 [i_5] [i_6] [i_7])) : (((/* implicit */int) var_14))))))));
                }
            } 
        } 
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) 10618297334009279512ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (5004262409824557826ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(unsigned char)11])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))))))) : (((/* implicit */int) ((((/* implicit */int) (short)-1539)) != (((/* implicit */int) (unsigned char)192)))))));
        var_35 *= ((/* implicit */signed char) max((2804982663530930113ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1539)) && (((/* implicit */_Bool) arr_8 [i_5] [i_5 + 2] [i_5] [(short)17] [i_5])))))));
    }
}
