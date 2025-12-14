/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5141
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((((var_5) || (((/* implicit */_Bool) min(((signed char)70), ((signed char)77)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) max((var_0), (var_0)))))))))));
    var_14 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [12ULL]))) : (arr_0 [i_0]))))))))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [(unsigned char)11] = ((/* implicit */unsigned short) min(((short)-4678), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_0 [(signed char)3])))))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                var_16 = ((/* implicit */signed char) ((arr_4 [i_0] [i_2]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)218))));
                arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_3 [(signed char)2] [5U]);
                var_17 -= ((/* implicit */short) arr_2 [i_0]);
            }
            var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        }
        for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_7 [i_0] [i_0] [(_Bool)1])) ^ (((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4])))))) ? (max((arr_2 [i_0]), (arr_2 [i_4]))) : (max((arr_2 [i_3]), (((/* implicit */long long int) 58720256U))))))));
                arr_13 [5LL] [5LL] [i_3] [5LL] = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_0] [i_0]))))));
                arr_14 [i_0] [i_0] [i_0] [i_0] = (~(((arr_9 [i_0] [0ULL]) / (arr_2 [i_0]))));
                arr_15 [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_4])) : (((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0]))) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (signed char)-71))));
                arr_16 [i_0] [i_3] [i_3] [i_4] = ((long long int) min(((+(((/* implicit */int) arr_11 [2LL] [2LL] [6ULL])))), ((-(((/* implicit */int) (short)-32766))))));
            }
            for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 4) 
            {
                var_20 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) arr_11 [11LL] [(short)13] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551612ULL)))))));
                arr_19 [i_3] [i_3] [i_3] &= ((/* implicit */long long int) (_Bool)1);
                var_21 = ((/* implicit */_Bool) arr_0 [4LL]);
                var_22 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(_Bool)1] [i_5 + 1] [i_5])) & (((/* implicit */int) arr_11 [i_5 + 1] [i_5 + 1] [i_5])))))));
            }
            var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) ((unsigned char) 0LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-77)) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_10 [i_0] [i_3]))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_23 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((signed char) arr_4 [i_0] [i_0]))), (var_4)));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_6] [i_6])), (arr_6 [i_0] [8U] [1ULL] [i_7]))))) : (min((var_11), (arr_2 [i_6])))))) ? (min((arr_20 [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) var_12))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74))))))));
                arr_26 [(short)2] = ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_6])))), (arr_2 [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) min((min(((short)0), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_2 [1ULL])))))))) : (((long long int) var_2)));
                arr_27 [i_0] [i_6] [i_7] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-71))));
            }
        }
        for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            arr_30 [i_8] [0LL] = ((/* implicit */long long int) (_Bool)1);
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_9 = 1; i_9 < 13; i_9 += 2) 
            {
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_12 [i_0] [(unsigned char)12] [i_9 + 1]))));
                var_26 *= ((/* implicit */signed char) ((_Bool) arr_6 [i_0] [i_9 + 1] [i_9] [i_9 - 1]));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        {
                            arr_37 [i_0] [i_9] [i_9 - 1] [i_10] = ((/* implicit */short) arr_2 [i_0]);
                            arr_38 [i_0] [i_9] [(short)6] [i_0] [8ULL] = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                        }
                    } 
                } 
                arr_39 [i_0] [i_8] [i_9] [10LL] = ((/* implicit */unsigned long long int) ((arr_33 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 1]) ? (((/* implicit */int) arr_25 [i_9 + 1])) : (((/* implicit */int) arr_4 [i_9 + 1] [i_9 - 1]))));
            }
            /* vectorizable */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_12] [i_0])) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) arr_21 [i_0] [i_0]))));
                var_28 &= ((/* implicit */long long int) ((_Bool) (_Bool)1));
            }
            /* vectorizable */
            for (short i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) var_1);
                /* LoopNest 2 */
                for (unsigned int i_14 = 1; i_14 < 10; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        {
                            arr_51 [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_8] [i_13] [(signed char)2])) ? (((/* implicit */long long int) arr_20 [i_13] [i_14] [i_14])) : (((((/* implicit */long long int) arr_20 [12U] [12U] [(unsigned short)9])) / (arr_0 [(unsigned char)11])))));
                            arr_52 [(unsigned char)4] [i_8] [(unsigned char)4] [(unsigned char)4] [i_15] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-63)))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) & ((~(-2188382071608142551LL))))))));
            }
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? ((~(0LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_0] [i_8])) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (signed char)-72))))))))));
        }
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 11; i_16 += 1) 
    {
        var_32 *= ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)4] [i_16] [13LL] [(unsigned char)5]))) < (arr_46 [i_16] [i_16] [i_16]))));
        var_33 = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_16] [13ULL]))));
        arr_55 [i_16] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_16] [i_16] [(signed char)2] [i_16] [i_16]))) > (arr_12 [i_16] [i_16] [i_16]));
    }
}
