/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31284
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_3] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */short) 2105741860336956725ULL);
                                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (max((2105741860336956742ULL), (2105741860336956742ULL))) : (((/* implicit */unsigned long long int) ((arr_10 [i_4] [i_3] [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))))));
                                var_20 = ((/* implicit */unsigned short) ((short) (~(arr_7 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_0] = ((/* implicit */unsigned long long int) max((((unsigned char) var_9)), (((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_2] [i_5])) || ((_Bool)0))))))));
                        /* LoopSeq 3 */
                        for (int i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [(short)4] [(short)19] [i_0])) ? (18446744073709551615ULL) : (min((((/* implicit */unsigned long long int) var_10)), (18446744073709551603ULL)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_5 - 1] [i_6] [(_Bool)1] [i_6] [i_6 - 1])))))));
                            arr_23 [i_5] [i_5] [(signed char)20] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_6 + 1] [i_6 + 1] [i_6 + 1])) >> (((((/* implicit */int) arr_5 [i_6 - 1] [i_6 + 1] [i_6 + 1])) - (6913)))))) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-38)) + (55))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_15))));
                            var_23 = ((/* implicit */unsigned long long int) arr_25 [10U] [i_1] [i_2] [i_1]);
                            var_24 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))));
                            var_25 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_18))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            arr_31 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_18)) * (arr_17 [i_5 - 1] [i_1] [8U] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_2] [i_5] [(unsigned char)4] [20ULL])))));
                            var_26 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) * (269720856U)));
                            var_27 = ((/* implicit */short) (+(((((/* implicit */int) min((var_15), (arr_15 [i_8] [i_0] [i_0] [i_0])))) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)72)))))))));
                        }
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 2) /* same iter space */
                    {
                        arr_34 [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((int) var_18)));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((1426354484U), (((/* implicit */unsigned int) (unsigned short)15))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)85))))) : (max((((/* implicit */unsigned int) arr_29 [i_1] [i_1] [i_2] [i_1] [i_9 + 1] [i_9])), (var_2)))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            {
                var_29 *= ((/* implicit */signed char) max((((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_38 [i_10] [i_10] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)54))) : (443398861U))))), (max((arr_37 [i_10]), (((/* implicit */unsigned short) ((short) (_Bool)1)))))));
                arr_40 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((8900847862697795762ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_19) < (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))) ^ (((/* implicit */int) arr_37 [i_11]))));
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) arr_39 [i_10])))))))) ? (((/* implicit */unsigned long long int) var_19)) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3507841539U)))))) : (((((/* implicit */_Bool) (unsigned short)52354)) ? (var_17) : (((/* implicit */unsigned long long int) var_11)))))))))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 4; i_13 < 23; i_13 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((unsigned short) ((int) arr_47 [i_13] [i_13 - 1] [i_13 - 1] [(unsigned short)11]))))));
                            arr_49 [i_10] = ((unsigned char) ((((/* implicit */_Bool) (short)-1)) ? (arr_39 [i_13]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_47 [i_13] [i_11] [i_12] [i_12])))))));
                            arr_50 [i_10] [i_10] [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [6LL])) ? (((/* implicit */long long int) var_8)) : (var_5)))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)2)), (var_0)))) : (((/* implicit */int) var_12))))) ? ((+(min((((/* implicit */unsigned int) 1108259865)), (var_18))))) : (((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned int) var_3)), (787125756U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 2) 
    {
        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
        {
            {
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((max((((/* implicit */int) arr_21 [i_14] [i_15] [i_14])), ((+(((/* implicit */int) (_Bool)1)))))) < (((/* implicit */int) ((_Bool) arr_24 [i_15]))))))));
                var_33 += ((/* implicit */unsigned int) (+(15561818512903209426ULL)));
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 4) 
                {
                    for (signed char i_17 = 0; i_17 < 18; i_17 += 3) 
                    {
                        {
                            arr_62 [i_14] [(unsigned char)10] [i_16] [i_16] = ((/* implicit */long long int) (-(2147483636)));
                            /* LoopSeq 2 */
                            for (unsigned char i_18 = 0; i_18 < 18; i_18 += 3) 
                            {
                                var_34 = max((((/* implicit */unsigned int) (-(arr_43 [i_14] [i_14] [i_16 + 1])))), (max((arr_6 [i_14] [i_15] [i_15] [i_15]), (arr_6 [(signed char)20] [(signed char)20] [(signed char)20] [(signed char)20]))));
                                var_35 = ((/* implicit */signed char) max(((~(max((0ULL), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) arr_59 [i_16] [i_16]))));
                                arr_66 [i_14] [i_16] [12U] [i_17] [(signed char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((5063591516055161809LL) >> (((((/* implicit */_Bool) arr_17 [i_14] [i_16] [i_17] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8)))))) || (((/* implicit */_Bool) (~(((unsigned long long int) 13425299722876415152ULL)))))));
                            }
                            for (unsigned long long int i_19 = 2; i_19 < 17; i_19 += 4) 
                            {
                                var_36 = ((/* implicit */long long int) 16341002213372594886ULL);
                                var_37 *= ((/* implicit */signed char) var_2);
                            }
                            arr_70 [i_14] [i_14] [i_16] [i_17] [16U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_44 [i_17] [i_16] [i_15])) ? (var_1) : (((/* implicit */int) (signed char)127)))))) ? (min((var_19), (((/* implicit */long long int) ((signed char) 3507841539U))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-51)))));
                            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) var_15))));
                        }
                    } 
                } 
            }
        } 
    } 
}
