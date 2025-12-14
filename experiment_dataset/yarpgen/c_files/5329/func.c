/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5329
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
    var_15 = ((/* implicit */signed char) var_5);
    var_16 = ((/* implicit */unsigned short) ((33554430) + (((/* implicit */int) var_11))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (2279891397746252422LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_2] [i_3 + 2] [i_3] [8U] |= ((/* implicit */short) ((((/* implicit */_Bool) 2279891397746252422LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)35))) : (arr_0 [i_2] [i_2])));
                        arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) (+(12288ULL)));
                        var_17 = ((/* implicit */int) arr_1 [i_0]);
                        var_18 = ((/* implicit */int) arr_5 [0] [i_1] [i_2] [i_0]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(arr_0 [i_0 + 1] [i_4]))))));
                            arr_19 [i_0] [i_1] [i_4] [i_0] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_1] [9LL] [i_0 + 1] [i_0 + 1])) ? (arr_0 [20] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(unsigned char)2] [(unsigned char)17] [i_5] [i_6])))));
                            arr_20 [i_6 + 4] [i_0] [(_Bool)1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_14) / (8543135785388865922LL)));
                            var_20 = ((/* implicit */unsigned long long int) ((_Bool) 536870911ULL));
                            var_21 -= ((/* implicit */_Bool) ((unsigned char) 3566538204U));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 1] [4ULL] [i_7])) >= (((/* implicit */int) (unsigned char)128)))))));
            arr_25 [19ULL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [18LL] [i_0 + 1] [(_Bool)1] [i_0 + 1] [(unsigned short)12] [(unsigned char)14])) ? (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (14840719886949848311ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_7] [i_7] [i_7] [i_7] [2])) ? (1249538292U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7] [i_7] [i_0] [i_0] [i_0] [i_0]))))))));
        }
    }
    for (short i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned long long int) (unsigned short)58480);
        arr_30 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned short) 9199554339080529876ULL)), (((/* implicit */unsigned short) arr_27 [i_8]))))) || (((/* implicit */_Bool) ((short) (((_Bool)1) ? (2013265920U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
    }
    for (long long int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    {
                        var_23 |= ((min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_37 [(_Bool)1] [(_Bool)1] [i_11] [i_12])), (arr_17 [i_9] [i_9] [i_10] [i_11] [i_12] [i_12])))), (((((/* implicit */_Bool) (unsigned short)45407)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))) : (2635701998719497654LL))))) | (((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_9] [i_10] [i_11] [i_9])) & (((/* implicit */int) (short)-27412))))) & (((((/* implicit */_Bool) 8588695725973086901LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (2279891397746252420LL))))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_12] [i_12] [i_12] [i_12] [i_12] [9LL])) ? (((/* implicit */long long int) arr_40 [i_10] [i_11] [i_12])) : (((long long int) ((((/* implicit */_Bool) -4441396615468541907LL)) && (((/* implicit */_Bool) 2279891397746252427LL)))))));
                        arr_42 [i_9] [8ULL] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((arr_6 [i_12] [i_11] [16LL]), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (arr_0 [i_10] [i_10]))))))), (((long long int) arr_13 [5LL] [(unsigned char)3] [i_11] [i_12]))));
                        arr_43 [i_9] [i_10] [i_11] [i_9] = ((/* implicit */long long int) arr_37 [17ULL] [17ULL] [i_10] [i_9]);
                    }
                } 
            } 
        } 
        arr_44 [i_9] = ((/* implicit */long long int) 3566538204U);
        var_25 = ((/* implicit */unsigned char) var_12);
    }
    for (long long int i_13 = 0; i_13 < 19; i_13 += 4) /* same iter space */
    {
        arr_47 [12LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [(_Bool)1] [i_13] [7LL])) ? (max((arr_41 [i_13] [i_13] [i_13]), (((/* implicit */long long int) var_7)))) : (min((arr_41 [i_13] [i_13] [3ULL]), (((/* implicit */long long int) var_13))))));
        var_26 = ((/* implicit */_Bool) max((var_26), (((((((/* implicit */_Bool) arr_23 [i_13] [i_13] [i_13])) && (((/* implicit */_Bool) arr_12 [i_13] [10LL] [i_13])))) || (((/* implicit */_Bool) max((arr_23 [i_13] [0LL] [i_13]), (728429091U))))))));
    }
    var_27 = ((/* implicit */unsigned short) var_13);
    var_28 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_7)), (var_6)))) ? (((/* implicit */int) max((var_3), (var_3)))) : (((/* implicit */int) var_7))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)127))))), (266338304LL)))));
}
