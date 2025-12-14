/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215401
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
    var_19 = ((/* implicit */long long int) var_16);
    var_20 = var_14;
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (signed char)-59)))) | (((/* implicit */int) var_9)))) != (((/* implicit */int) (unsigned char)255))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)7)) | (((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? ((~(((/* implicit */int) arr_3 [(signed char)5] [(signed char)5])))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2])) == (((/* implicit */int) (unsigned char)1)))))))));
                                arr_13 [i_1] [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) (+(max((-8587329004095059242LL), (-6786108423892423602LL)))));
                                arr_14 [6LL] [i_2] [i_1] [6LL] [i_4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(-8LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(unsigned short)0]))) / (-4243433125767686039LL)))) ? (((((/* implicit */_Bool) var_1)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 2]))))) : (((-4552219755638475750LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-65))))))) : ((-(((((/* implicit */_Bool) arr_3 [(signed char)11] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (3898351953545353116LL)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_7 [i_0 + 3]), (arr_7 [i_0 - 1])))), (((((/* implicit */int) arr_7 [i_0 - 1])) + (((/* implicit */int) (unsigned char)188))))));
                    arr_15 [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0 - 3] [i_1 - 2])))) ? (((/* implicit */int) arr_3 [i_1 + 2] [(unsigned short)0])) : (((/* implicit */int) arr_1 [i_0 - 3])))) <= (((/* implicit */int) var_0))));
                    var_24 = ((/* implicit */long long int) (~((-(((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) var_0))))))));
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    var_25 -= ((/* implicit */long long int) ((((arr_9 [i_0] [i_1] [i_0]) == (arr_9 [(unsigned short)12] [i_1] [i_5]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-21))))) : ((~(((/* implicit */int) (signed char)-16))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_5])) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))));
                        var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 3] [i_0 - 2])) ? (((/* implicit */int) arr_16 [i_0 - 3] [i_0 + 1])) : (((/* implicit */int) arr_16 [i_0 - 3] [i_0 + 3]))));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 1; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)240)) / ((+(((/* implicit */int) arr_7 [i_1]))))));
                            var_29 = ((/* implicit */unsigned short) (unsigned char)255);
                            var_30 += ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_7 [i_0])))));
                        }
                        for (signed char i_8 = 1; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            var_31 = arr_21 [i_8] [i_8] [i_0] [i_8] [i_0] [i_5];
                            arr_26 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 4552219755638475745LL);
                            arr_27 [i_6] [i_0] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) var_8);
                            var_32 = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_5] [i_6] [i_8]);
                        }
                        /* LoopSeq 4 */
                        for (signed char i_9 = 4; i_9 < 17; i_9 += 2) /* same iter space */
                        {
                            var_33 -= ((/* implicit */unsigned short) arr_12 [i_9] [i_1] [i_5] [i_6] [i_6]);
                            var_34 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1 - 1])) % (((/* implicit */int) arr_5 [i_0] [i_1 + 2]))));
                        }
                        for (signed char i_10 = 4; i_10 < 17; i_10 += 2) /* same iter space */
                        {
                            var_35 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_0 + 1] [i_0 + 1] [i_5] [i_1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_12 [i_10] [i_1] [i_10] [i_1 - 2] [i_1])));
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)16439)))))));
                        }
                        for (signed char i_11 = 4; i_11 < 17; i_11 += 2) /* same iter space */
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_5] [i_5] [i_11 - 1] [i_11])) ? (((/* implicit */int) arr_22 [i_11] [i_6] [i_0 - 3] [i_0 - 3] [i_0 - 3])) : (((((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_6] [i_11])) >> (((-7641478973783373106LL) + (7641478973783373111LL)))))));
                            arr_36 [i_0] [i_0] [i_5] [i_6] [i_11] = (i_0 % 2 == zero) ? (((arr_12 [i_0] [i_1 - 1] [i_0 - 1] [i_11 - 4] [i_11]) - (4848460310067146043LL))) : (((arr_12 [i_0] [i_1 - 1] [i_0 - 1] [i_11 - 4] [i_11]) + (4848460310067146043LL)));
                        }
                        for (long long int i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            arr_39 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_12] [i_6] [i_12] [i_12] &= ((/* implicit */long long int) arr_8 [i_0 - 3] [i_0 - 3] [i_12]);
                            var_37 |= ((/* implicit */unsigned short) ((-7641478973783373106LL) ^ (-1LL)));
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_6] [i_12] = var_8;
                        }
                    }
                }
                var_38 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) arr_32 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 3])) : (((/* implicit */int) arr_1 [i_0 + 3]))))) ? (((/* implicit */int) arr_32 [i_0] [(unsigned short)7] [i_0] [i_0] [i_1] [i_1 - 3] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_0 + 3]))));
            }
        } 
    } 
}
