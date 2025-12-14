/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39090
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
    var_16 = ((/* implicit */unsigned int) 6428713545644412988LL);
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (max((var_3), (min((var_3), (((/* implicit */unsigned long long int) (unsigned short)14)))))) : ((+(9212539548181363032ULL)))));
    var_18 |= ((/* implicit */unsigned int) ((unsigned long long int) min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (-1221635048) : (var_7)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (-((+(arr_0 [i_0] [i_0])))));
        var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */unsigned long long int) arr_2 [i_0])) / (arr_0 [i_0] [i_0])))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_7 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_5 [i_1])))) * ((-(((/* implicit */int) (!((_Bool)1))))))));
            arr_8 [21ULL] [i_0] = ((((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_1]) | (((/* implicit */long long int) var_11))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_13)), (var_11)))) : (((long long int) var_8)));
            var_20 = ((/* implicit */unsigned long long int) max((max((arr_2 [i_0]), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) arr_4 [i_0]))));
            var_21 = ((/* implicit */short) arr_1 [i_0] [i_1]);
            var_22 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 8246337208320ULL)) ? (9212539548181363032ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_11 [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
            var_23 = ((((/* implicit */_Bool) ((short) var_14))) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_15)))))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_15 [i_2] [i_3] [i_4] [i_2]))));
                            arr_18 [i_5] [i_5] [24U] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_10 [i_0]) : (var_14))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                for (long long int i_8 = 1; i_8 < 22; i_8 += 2) 
                {
                    {
                        arr_27 [i_0] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) var_4);
                        var_25 = ((/* implicit */unsigned long long int) ((short) ((arr_17 [i_8 - 1] [i_7] [i_7] [i_0] [i_0]) ? (arr_2 [i_8 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7]))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_6] [i_6] [i_0] [i_0]))));
            var_27 = ((/* implicit */short) ((signed char) arr_25 [i_0] [13] [(short)21] [13] [i_6] [i_6]));
        }
    }
    for (unsigned short i_9 = 4; i_9 < 15; i_9 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_10 = 2; i_10 < 15; i_10 += 2) /* same iter space */
        {
            var_28 -= ((/* implicit */unsigned long long int) (short)19018);
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    arr_38 [i_12] [i_12] [i_12] = ((/* implicit */int) ((arr_31 [i_11] [i_11]) + (arr_31 [i_12] [i_9 - 4])));
                    arr_39 [i_9] [i_9 - 4] [i_10] [i_11] [i_9] = ((/* implicit */unsigned char) arr_20 [i_9 - 1] [i_10 - 2]);
                }
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(var_5)))) / ((~(8841127296973545236LL)))));
            }
            for (short i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                arr_42 [i_9] = ((/* implicit */unsigned long long int) (short)10958);
                var_30 |= ((/* implicit */unsigned char) var_2);
                arr_43 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((arr_24 [i_9 + 2] [i_10 + 2] [i_10 + 2] [i_13]) ? (((/* implicit */int) arr_24 [i_9 - 3] [i_10 - 1] [i_13] [i_9 - 2])) : (((/* implicit */int) arr_24 [i_9 - 1] [i_10 - 1] [i_10] [i_10]))));
            }
        }
        for (long long int i_14 = 2; i_14 < 15; i_14 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 4) 
            {
                for (long long int i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    {
                        arr_51 [i_16] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_22 [i_16])))));
                        var_31 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(var_7)))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) & (1915301964796934545LL)))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_14] [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_25 [i_16] [i_14] [i_14 + 2] [i_14 + 2] [i_9] [i_9]))))) ? (((((/* implicit */int) (unsigned char)15)) / (((/* implicit */int) arr_36 [i_9 - 1] [i_9 - 1])))) : ((+(((/* implicit */int) arr_25 [i_16] [i_14 + 2] [i_16] [i_14 + 2] [i_14] [i_14]))))));
                    }
                } 
            } 
            var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (max((min((var_5), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((int) arr_10 [i_9 + 2])))))));
        }
        var_34 -= ((/* implicit */_Bool) min((arr_33 [i_9 - 1] [i_9] [i_9 - 3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_9] [i_9] [(short)1] [i_9])) ? (((/* implicit */long long int) var_5)) : (var_10)))) ? (min((var_6), (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_9 + 2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_23 [i_9] [i_9] [i_9 - 2] [i_9]))))))))));
        var_35 = ((/* implicit */int) arr_2 [i_9]);
    }
}
