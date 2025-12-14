/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249190
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) -9LL)) : (arr_5 [i_0] [i_1])))))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-1)) : (min((((/* implicit */int) (unsigned short)43510)), (((int) var_18))))));
                    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)1)) || (((/* implicit */_Bool) (short)-32759)))))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))) : (arr_12 [i_0] [i_0] [i_0] [i_3])));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_3] [i_1] [i_5] = ((/* implicit */long long int) arr_3 [i_0]);
                                var_23 = (+(((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) arr_1 [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 3; i_6 < 10; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) 1125899906580480ULL);
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_6 + 1])))))));
                        var_26 = ((/* implicit */short) ((unsigned char) var_11));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_26 [i_7] [i_6] [i_1] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) (unsigned short)32466)));
                            arr_27 [i_0] [i_0] [i_3] [i_1] [i_7 + 1] [i_6 - 1] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)15577)) : (((/* implicit */int) (_Bool)1)))));
                            var_27 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)13)) || ((_Bool)0))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */short) (-(((/* implicit */int) arr_21 [i_6 + 3] [i_6] [i_3] [i_3]))));
                            arr_30 [i_0] [i_0] [i_1] [i_0] [i_6] [i_1] [i_8] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_0] [i_6 - 3] [i_6] [i_0]))));
                            var_29 = ((/* implicit */int) ((_Bool) arr_24 [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_6 + 3] [i_3]));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (~(arr_12 [i_6] [i_6 + 2] [i_6] [i_6 + 2]))))));
                            var_31 = ((/* implicit */signed char) (short)-32616);
                            arr_33 [5LL] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
                            arr_34 [i_0] [i_1] [i_3] [(unsigned short)12] [i_6] [i_9] = ((/* implicit */unsigned short) (+((~(var_13)))));
                        }
                    }
                }
                for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_0] [i_1] [i_10] [i_10])) * (((/* implicit */int) var_5))))) >= (min((((/* implicit */long long int) var_16)), (var_12)))));
                    arr_37 [i_1] [i_1] [i_1] = ((arr_20 [i_0] [i_10] [i_1] [(unsigned char)9] [i_1] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_16))));
                    /* LoopSeq 2 */
                    for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        arr_40 [i_11] [i_1] [i_1] [i_11] [i_11] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) max((811479266U), (((/* implicit */unsigned int) (unsigned short)43519)))))) * (((int) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_0])))))));
                        arr_41 [(signed char)6] [i_1] [i_1] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1676370979U)) ? (((/* implicit */int) arr_29 [i_1])) : (((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)23541)) : (((/* implicit */int) var_8))))))) ? (((unsigned long long int) min((28U), (((/* implicit */unsigned int) (unsigned short)36850))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_10] [i_11])))));
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (arr_22 [i_0] [i_1] [i_10] [i_11] [i_10]) : (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17103))) : (arr_22 [i_0] [i_10] [i_11] [i_11] [i_0]))))))));
                        var_34 = ((/* implicit */unsigned char) 9ULL);
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        arr_44 [i_1] [i_1] [i_10] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_10] [i_10] [i_12]))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned char) 109559898U);
                            arr_49 [i_0] [i_0] [i_1] [i_0] [i_0] = 959720942;
                        }
                        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) arr_31 [i_0] [i_1] [i_0]))));
                    }
                }
                var_37 = ((/* implicit */int) 3483488020U);
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) : ((-(15ULL)))))));
            }
        } 
    } 
    var_39 = ((/* implicit */short) var_18);
    var_40 = ((/* implicit */long long int) ((var_13) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((var_18) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58621))))) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
}
