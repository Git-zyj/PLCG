/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219247
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
    var_20 = var_10;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12471)) ? (((/* implicit */int) (unsigned short)12471)) : (((/* implicit */int) (unsigned short)12471))))), (min((var_5), (((/* implicit */long long int) arr_0 [i_0] [i_0 - 2]))))));
        var_21 ^= ((/* implicit */unsigned int) min((max((((/* implicit */short) arr_1 [i_0 + 2] [(short)14])), (arr_0 [10] [i_0 - 2]))), (((/* implicit */short) min((arr_1 [12] [12]), (arr_1 [i_0 + 2] [2ULL]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_13)) : (arr_4 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_17))) : (((/* implicit */unsigned long long int) var_8))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                /* LoopSeq 4 */
                for (signed char i_4 = 2; i_4 < 19; i_4 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */int) arr_7 [i_1 + 1] [i_2]);
                    arr_14 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_4 - 1])) ? (var_15) : (arr_5 [i_1 - 1] [i_2])));
                    var_24 = ((/* implicit */int) arr_7 [i_3 + 1] [i_1 + 1]);
                    arr_15 [i_1] [i_1] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */long long int) arr_13 [i_1 - 1]);
                    var_25 = ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_1 + 1]) : (((/* implicit */unsigned long long int) var_19)));
                }
                for (signed char i_5 = 2; i_5 < 19; i_5 += 2) /* same iter space */
                {
                    arr_19 [i_1 - 1] [i_1 - 1] = ((/* implicit */signed char) arr_13 [i_3 + 2]);
                    arr_20 [i_1 + 1] [i_1 + 1] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1 + 1] [i_2] [i_5 + 4] [i_3 + 4])) ? (arr_17 [i_1 - 1] [i_2] [i_5 + 2] [i_3 + 4]) : (arr_17 [i_1 - 1] [i_2] [i_5 + 3] [i_3 + 2])));
                }
                for (signed char i_6 = 2; i_6 < 19; i_6 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) ((unsigned long long int) arr_16 [(signed char)16] [(signed char)16] [i_3] [i_3 + 4] [i_3 + 4] [i_3]));
                    arr_23 [i_1 + 1] [i_2] [i_2] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53057)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)12464))));
                    var_27 = ((/* implicit */unsigned short) (~(arr_10 [i_6 - 2] [i_6 + 4] [i_6 + 2] [i_6])));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        var_28 = ((long long int) var_14);
                        var_29 = var_19;
                    }
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)53065)) ? (((/* implicit */int) (unsigned short)12484)) : (((/* implicit */int) (unsigned short)12471))));
                }
                for (signed char i_8 = 2; i_8 < 19; i_8 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12461)) - (-872287685)));
                    arr_30 [i_3 + 2] [i_8 - 1] = ((/* implicit */signed char) ((unsigned short) 2760019479734580706ULL));
                }
                /* LoopSeq 1 */
                for (signed char i_9 = 1; i_9 < 21; i_9 += 3) 
                {
                    arr_34 [i_1] [i_3] = ((/* implicit */unsigned short) ((arr_28 [i_1] [i_1 + 1] [0ULL] [i_3 + 4]) << (((/* implicit */int) ((var_10) >= (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1])))))));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)240)) && (((/* implicit */_Bool) -2147483637))));
                }
            }
            var_33 = ((/* implicit */signed char) ((unsigned long long int) arr_5 [i_1 - 1] [i_1]));
            arr_35 [i_1] = (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [11LL])));
        }
        var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
        var_35 = ((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [(signed char)22] [i_1] [(signed char)22] [(unsigned short)11]);
        arr_36 [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_1] [i_1 + 1] [(signed char)18] [i_1])) ^ (((((/* implicit */_Bool) (signed char)-91)) ? (-872287687) : (((/* implicit */int) arr_32 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]))))));
    }
    for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_10 - 1])) ? (arr_38 [i_10 - 1]) : (arr_38 [i_10 - 1])));
            arr_41 [i_10] [(unsigned short)10] = ((/* implicit */int) arr_24 [i_10] [i_10 - 2] [i_10] [i_11 + 1] [i_11 + 2] [i_10]);
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 1) /* same iter space */
        {
            arr_46 [3] [3] [i_10] = ((/* implicit */unsigned long long int) ((arr_32 [i_10] [i_12] [i_12 + 1] [i_12]) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_10] [i_10 + 2] [i_12] [(unsigned short)9])))));
            arr_47 [12ULL] [i_12] [i_10] = ((/* implicit */unsigned char) ((_Bool) arr_21 [i_10 - 1] [i_12] [i_12 + 1] [i_12] [i_12 + 1]));
        }
        var_37 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 17320259459120001424ULL)) ? (((/* implicit */int) (unsigned short)12452)) : (-872287687)));
    }
    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) ((_Bool) var_1)))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12)))) ^ (var_5))) : (((/* implicit */long long int) max((((/* implicit */int) var_7)), (((var_12) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)53064)))))))));
    var_39 = ((/* implicit */long long int) var_6);
}
