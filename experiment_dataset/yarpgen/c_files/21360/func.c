/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21360
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
    var_14 = ((/* implicit */_Bool) var_3);
    var_15 = ((/* implicit */unsigned char) max((var_15), (var_3)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [5] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) var_10)) - (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) max((var_5), (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned short)58173)) ? (var_13) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((int) arr_1 [i_0])))))));
    }
    for (int i_1 = 4; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 2; i_2 < 14; i_2 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) max((max((2187673765U), (((/* implicit */unsigned int) arr_4 [i_1 - 3])))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7359)) - (((/* implicit */int) (unsigned short)7363)))))));
            var_18 *= ((/* implicit */signed char) min((((((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 3] [i_2 + 1])) - (((/* implicit */int) (unsigned short)7367)))), (((/* implicit */int) ((signed char) arr_5 [i_1 + 2] [i_1 + 2] [i_2 + 1])))));
        }
        for (unsigned int i_3 = 2; i_3 < 14; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_4 = 3; i_4 < 13; i_4 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */long long int) ((arr_8 [i_4 - 1] [i_3 - 2] [i_1]) >> (((/* implicit */int) (_Bool)1))));
                var_20 = ((/* implicit */short) arr_7 [i_3]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 2; i_5 < 14; i_5 += 4) 
                {
                    arr_14 [i_3] [i_5] [i_4] [i_3] [i_1 - 4] [i_3] = ((/* implicit */short) arr_4 [i_5]);
                    var_21 += ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1 - 4] [i_1]);
                    arr_15 [i_3] [i_3 + 1] [i_3] [i_5] [i_4] [i_4] = ((long long int) var_12);
                }
            }
            /* vectorizable */
            for (unsigned short i_6 = 3; i_6 < 13; i_6 += 4) /* same iter space */
            {
                arr_19 [i_1] [i_3] [i_6] = ((/* implicit */signed char) var_7);
                var_22 -= ((/* implicit */_Bool) ((short) ((unsigned short) arr_5 [(signed char)1] [i_3 - 2] [i_1])));
            }
            for (unsigned short i_7 = 3; i_7 < 13; i_7 += 4) /* same iter space */
            {
                arr_23 [i_7 - 1] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_1 - 4])), (min((((/* implicit */long long int) var_10)), (arr_12 [i_7 + 1] [12U] [i_1] [i_1])))))) ? (max((max((var_11), (((/* implicit */long long int) -1915113182)))), (var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_12)))) ? (((/* implicit */int) arr_13 [i_3 + 1] [i_7])) : (((/* implicit */int) var_3)))))));
                /* LoopNest 2 */
                for (long long int i_8 = 4; i_8 < 11; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */short) arr_7 [i_3]);
                            arr_29 [i_3] [i_3] [i_8 - 3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_1 + 2] [i_3] [i_7] [i_8]))))), (max((((/* implicit */long long int) arr_22 [i_9] [i_3] [i_3] [i_1])), (arr_20 [i_8])))))), (((((/* implicit */_Bool) min((arr_4 [i_1]), (arr_26 [i_3] [i_3] [i_8] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58173))) - (var_2)))))));
                            arr_30 [i_3] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) arr_3 [i_9]);
                        }
                    } 
                } 
                arr_31 [i_7] [i_3] [i_1 - 2] = ((/* implicit */short) var_13);
                arr_32 [i_3] [i_3] [i_3] [i_7] = ((/* implicit */unsigned char) -4329440527566755386LL);
                var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)6276))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_10 = 2; i_10 < 11; i_10 += 2) 
            {
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_10 - 1] [i_3 - 2])))))));
                arr_35 [(short)5] [i_3] [i_3] = ((/* implicit */signed char) -1348510211);
            }
            arr_36 [i_3] [i_3] = ((/* implicit */int) var_4);
            /* LoopNest 3 */
            for (short i_11 = 1; i_11 < 14; i_11 += 2) 
            {
                for (short i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    for (int i_13 = 1; i_13 < 13; i_13 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (unsigned short)19856))));
                            arr_46 [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_38 [i_12]))));
                            var_27 = ((/* implicit */int) var_7);
                        }
                    } 
                } 
            } 
            arr_47 [i_3] = ((/* implicit */int) var_0);
        }
        for (short i_14 = 0; i_14 < 15; i_14 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_37 [i_1] [i_14] [i_14] [i_14]), (max((arr_28 [i_1] [i_1] [i_14] [i_14] [i_1] [i_1] [i_1]), (var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_1] [i_14] [i_14] [10LL])) ? (var_4) : (var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7363)) - (((/* implicit */int) arr_43 [i_1] [i_1] [i_1] [i_1] [i_1 - 3]))))) : (((((/* implicit */_Bool) arr_25 [i_14] [i_14] [i_1 - 2] [i_1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_1] [i_1] [i_1] [i_1 + 1])))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)58172)) - (((/* implicit */int) arr_38 [i_14]))))), (arr_48 [i_1] [i_14]))))))));
            /* LoopNest 3 */
            for (unsigned char i_15 = 0; i_15 < 15; i_15 += 4) 
            {
                for (short i_16 = 1; i_16 < 14; i_16 += 3) 
                {
                    for (int i_17 = 0; i_17 < 15; i_17 += 4) 
                    {
                        {
                            var_29 &= ((/* implicit */short) arr_3 [i_1]);
                            arr_57 [i_1 - 2] [i_17] [i_15] [i_1] [i_17] [i_17] [(unsigned char)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) - (min((((/* implicit */unsigned int) (unsigned short)7371)), (2231740214U)))))) ? (((/* implicit */unsigned long long int) -2023150175)) : (((((/* implicit */_Bool) (unsigned short)58173)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)58172))))) : (4238361685783391294ULL)))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_55 [i_1] [i_1 + 1] [i_16 + 1])), (arr_3 [i_1 - 2])))) ? (max((((/* implicit */int) arr_3 [i_1 - 1])), (var_9))) : (((/* implicit */int) max((var_8), (var_8))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_18 = 0; i_18 < 15; i_18 += 1) 
            {
                arr_60 [i_18] = ((/* implicit */unsigned long long int) ((long long int) (-(((unsigned long long int) (_Bool)1)))));
                arr_61 [i_18] = var_1;
            }
        }
        arr_62 [i_1] = max((var_4), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [i_1])), (arr_20 [i_1 - 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23567))) : (var_4))));
    }
    for (unsigned int i_19 = 2; i_19 < 21; i_19 += 1) 
    {
        var_31 = ((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58184))) - (arr_63 [i_19 - 2]))), (((/* implicit */long long int) (unsigned short)7352))))) - (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_64 [i_19 - 2] [i_19])) : (((/* implicit */int) arr_64 [i_19] [i_19]))))) - (min((var_13), (((/* implicit */unsigned long long int) var_6)))))));
        arr_65 [i_19] = max((arr_63 [i_19 + 2]), (((/* implicit */long long int) (-(var_5)))));
    }
}
