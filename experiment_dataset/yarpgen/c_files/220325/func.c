/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220325
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_3))));
    var_15 = var_6;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) var_3)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */short) (~(((/* implicit */int) (short)6037))));
                    arr_9 [i_0] [i_1] [i_1] = arr_0 [i_0] [i_2];
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) arr_2 [i_0])))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)125)))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-6038)), (2147483636)))) ^ (((arr_2 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((8310416489672067474ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_0])))))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_1] [i_3] [i_4] [i_3] &= ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) var_6)) <= (((((/* implicit */_Bool) var_13)) ? (var_11) : (var_7)))))), (arr_8 [i_1] [i_0])));
                        var_20 = ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_4] [i_3] [i_1])) >= (((/* implicit */int) arr_11 [i_0] [i_1] [i_4])))) ? (((((/* implicit */_Bool) arr_11 [i_3] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_3] [i_4]))) : (var_10))) : (((unsigned long long int) 11471305520451065550ULL))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) ((short) (~(arr_17 [i_5] [i_5 - 1] [i_5 + 1] [i_5]))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) arr_18 [i_5] [i_3] [i_0]))))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_5 - 1])), (var_7))) : (max((arr_4 [i_5] [i_5 - 1] [i_5 + 1]), (((arr_4 [i_0] [i_1] [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? ((~(((/* implicit */int) arr_14 [i_1] [i_6])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_6] [i_1] [i_0])))))))));
                        arr_21 [i_0] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (signed char)-102);
                    }
                }
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_24 -= ((/* implicit */short) (((~(arr_22 [i_8] [i_7] [i_0]))) & (((/* implicit */int) ((var_6) != (((/* implicit */int) ((((/* implicit */int) (short)3526)) >= (arr_17 [i_1] [i_8] [i_7] [i_1])))))))));
                                var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_7])) ? ((-(((/* implicit */int) ((arr_2 [i_7]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16132)))))))) : (((((/* implicit */_Bool) (+(var_12)))) ? (arr_22 [i_1] [i_7] [i_8]) : (((/* implicit */int) arr_10 [i_9] [i_7] [i_1] [i_0]))))));
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_7] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102))) : (arr_4 [i_0] [i_0] [i_0]))) : (((unsigned long long int) arr_4 [i_0] [i_1] [i_7]))));
                                arr_28 [i_0] [i_1] [i_8] [i_8] [i_9] &= ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) + (((/* implicit */unsigned long long int) 2068742402)))));
                                var_27 = ((/* implicit */short) min((max((arr_0 [i_7] [i_9]), (((/* implicit */unsigned long long int) arr_1 [i_8])))), (((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_0])))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_1])) % (((/* implicit */int) arr_14 [i_0] [i_7]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_7])) && (((/* implicit */_Bool) var_4))))) : (((((/* implicit */int) (unsigned char)33)) << (((((-1645767338996695003LL) + (1645767338996695034LL))) - (15LL)))))));
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 15; i_10 += 2) 
                    {
                        for (long long int i_11 = 3; i_11 < 14; i_11 += 1) 
                        {
                            {
                                arr_33 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) 315588211U);
                                var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7603)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)106))))) * (((var_11) / (arr_26 [i_1] [i_1] [i_1] [i_10 + 1] [i_11] [i_0] [i_11 - 3])))));
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_22 [i_11] [i_11] [i_11 + 2])) ? (arr_22 [i_11] [i_11] [i_11 - 2]) : (arr_22 [i_11] [i_11] [i_11 + 3]))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                    {
                        for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)182)) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_12]))) / (var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_12] [i_13]))))) : (((/* implicit */int) arr_38 [i_0] [i_1] [i_12] [i_14])))))));
                                arr_44 [i_0] [i_0] [i_1] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_14] [i_1] [i_0])) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)192)), (arr_8 [i_0] [i_1])))) : ((+(((/* implicit */int) arr_11 [i_0] [i_12] [i_14]))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) -1067701713);
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) var_2)), ((+(((/* implicit */int) var_2))))))));
    var_34 = ((((((/* implicit */_Bool) var_12)) || (((((/* implicit */_Bool) 1645767338996694997LL)) || (((/* implicit */_Bool) 13458357156730475365ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-29986)) || (((/* implicit */_Bool) var_11))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (unsigned char)26)))));
}
