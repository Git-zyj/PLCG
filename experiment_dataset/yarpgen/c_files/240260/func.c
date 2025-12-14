/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240260
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
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) var_7);
                    var_18 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (short)-3444)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [14U])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_3])) << (((/* implicit */int) arr_12 [i_3]))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2030265917)) ? (824311311216249269ULL) : (((/* implicit */unsigned long long int) arr_14 [i_6 - 3] [i_6 - 3] [i_3 - 1]))));
                                var_22 = ((/* implicit */unsigned short) var_15);
                                var_23 = ((((/* implicit */unsigned long long int) (-(arr_21 [i_6] [i_6] [(unsigned char)11])))) / (arr_17 [i_6] [i_6 - 2] [i_6 - 3] [i_6] [i_6]));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) | (arr_10 [i_7])))) ? (((/* implicit */int) ((686592964U) < (67043328U)))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2238279112U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_15 [i_3 - 1] [i_3] [i_3 - 1] [6U]))) > (((/* implicit */unsigned long long int) var_3))));
                        arr_25 [i_8] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) 2429562141U));
                    }
                    var_26 *= ((((unsigned long long int) (-2147483647 - 1))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (9004278826892010849ULL) : (((/* implicit */unsigned long long int) var_10))))) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4] [i_3 + 2] [(signed char)22] [i_4] [i_3] [i_4])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((1606614033599219128ULL) >> (((((/* implicit */int) (unsigned short)36982)) - (36982)))))) ? (((/* implicit */int) (unsigned char)192)) : (-531274575)));
            /* LoopSeq 2 */
            for (signed char i_10 = 2; i_10 < 20; i_10 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    arr_33 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_11])) ? (((/* implicit */int) arr_30 [i_3] [i_9] [i_10 + 1] [i_11])) : (arr_14 [i_11] [i_10 - 1] [i_9])));
                    var_29 -= ((/* implicit */unsigned int) ((var_11) * (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3])))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_9 [i_10 + 2]))));
                }
                var_31 = ((((long long int) (_Bool)1)) + (((/* implicit */long long int) ((/* implicit */int) var_7))));
                arr_34 [i_3] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_9] [i_3 - 1] [1U])) : (arr_20 [i_3] [i_9])));
                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_18 [i_10] [i_3] [i_3] [i_9] [i_3] [i_3]))));
            }
            for (signed char i_12 = 2; i_12 < 20; i_12 += 2) /* same iter space */
            {
                arr_37 [i_3 - 1] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_3] [i_9] [1U] [i_12 + 2] [i_12 + 3])) ? (var_10) : (2506901418U)));
                /* LoopNest 2 */
                for (short i_13 = 3; i_13 < 21; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        {
                            arr_42 [i_9] = ((/* implicit */unsigned short) ((arr_35 [i_13 - 1] [i_13 - 1] [i_12 - 1] [i_3 + 1]) >> (((var_1) - (3292430152U)))));
                            arr_43 [i_3 + 2] [i_9] [i_12 + 3] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [2ULL] [i_13] [i_13 + 2] [i_3 + 1])) <= (((/* implicit */int) arr_13 [i_13 + 2] [i_14] [i_13 + 2] [i_3 + 1]))));
                            var_33 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_13 - 1] [i_13 - 2] [9U] [i_13 - 2] [i_13] [(signed char)20])) && (((/* implicit */_Bool) arr_16 [i_13] [i_13 - 2] [i_13 - 1] [i_13 - 2] [i_13 + 2] [i_13 - 1]))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned int) 7088142656441632946ULL);
            }
        }
        for (short i_15 = 0; i_15 < 23; i_15 += 1) 
        {
            var_35 = ((/* implicit */unsigned char) ((_Bool) 2249483790U));
            arr_48 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_15] [1U] [i_3 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26926))) : (arr_15 [i_3] [i_3 + 2] [i_3] [i_15])));
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) ? (arr_10 [i_3]) : (((/* implicit */long long int) 2045483486U))))) ? (var_13) : (((/* implicit */unsigned int) var_15))));
            var_37 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))) + (2045483473U)));
        }
    }
}
