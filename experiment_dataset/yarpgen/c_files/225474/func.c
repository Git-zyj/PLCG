/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225474
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
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) var_5))), (min((((/* implicit */unsigned short) var_6)), (var_15))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (long long int i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((unsigned int) min((arr_6 [i_0] [i_2 - 3] [i_2] [i_0 - 2]), (arr_6 [i_0] [i_2 - 2] [(_Bool)1] [i_0 - 4]))));
                var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned short) arr_8 [i_0] [i_0] [i_0] [i_2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((unsigned int) max((arr_7 [i_0 + 2] [i_0 - 4] [i_2 - 3]), (((/* implicit */unsigned int) arr_5 [i_0 - 2] [i_2 - 2] [i_1]))))))));
                var_24 = min((max(((~(((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) max((arr_4 [i_1] [i_1] [i_2]), (((/* implicit */unsigned char) arr_1 [(unsigned char)12]))))))), (((/* implicit */int) arr_3 [(short)0])));
                arr_9 [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_2] [i_2 - 4] [i_2 + 1] [i_2 - 4]))))) ? (((((/* implicit */int) arr_4 [i_2] [i_2 - 4] [i_2 - 4])) * (((/* implicit */int) arr_5 [i_2] [i_2 - 1] [i_2])))) : (((/* implicit */int) arr_6 [5LL] [i_2 - 4] [i_2 - 4] [i_2])));
            }
            for (short i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                var_25 &= ((/* implicit */int) arr_3 [i_0]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_8 [i_4] [i_3] [i_1] [i_0])) - (156)))))) / (arr_11 [4U] [i_0 + 2] [12LL] [i_4])));
                    arr_14 [(unsigned char)0] [(unsigned char)0] [i_3] [i_4] = ((/* implicit */_Bool) ((unsigned char) arr_1 [i_3]));
                    var_27 = ((/* implicit */unsigned short) (~(arr_11 [i_0] [i_0] [i_0] [i_4])));
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (((-(arr_2 [i_0 - 4]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_4]) < (((/* implicit */int) arr_13 [(unsigned char)5] [i_1])))))))))));
                }
            }
            for (long long int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 4; i_6 < 11; i_6 += 2) 
                {
                    arr_22 [i_6] [i_5] [i_1] = min((min((arr_19 [i_0] [i_0]), (arr_19 [(unsigned char)1] [i_5]))), (((/* implicit */unsigned int) ((int) arr_0 [i_0 - 4]))));
                    var_29 = ((/* implicit */int) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) >> (((arr_10 [i_0]) + (91256650)))))) + (((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5])) ? (arr_16 [i_0] [i_5] [i_6]) : (var_9)))))));
                }
                var_30 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_15 [(unsigned char)7] [i_1] [i_1] [i_1]))))), (max((arr_0 [i_1]), (arr_3 [i_0 - 3]))))))));
                arr_23 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) min((min((arr_19 [i_0] [i_1]), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) == (((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [6ULL]))))))))));
                var_31 = ((/* implicit */unsigned long long int) (+((~(min((((/* implicit */unsigned int) arr_13 [i_5] [i_5])), (arr_20 [(unsigned char)9] [i_1] [i_1] [i_1] [i_0] [(unsigned char)9])))))));
            }
            for (long long int i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_10 [i_0 - 2])))));
                var_33 = ((/* implicit */unsigned char) ((var_14) && (((/* implicit */_Bool) (+(((/* implicit */int) min((arr_13 [i_7] [(signed char)6]), (var_3)))))))));
            }
            var_34 &= ((/* implicit */long long int) min(((~(((unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min(((~(arr_10 [i_1]))), (((/* implicit */int) arr_15 [i_0 - 3] [i_0] [i_0] [i_1])))))));
            var_35 = ((/* implicit */_Bool) (((~(((unsigned int) arr_7 [i_1] [i_0] [i_1])))) ^ (((((/* implicit */_Bool) max((arr_25 [i_1] [i_1] [i_0]), (arr_19 [i_0] [(_Bool)1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) : (((var_9) & (((/* implicit */unsigned int) arr_10 [(unsigned char)0]))))))));
        }
        var_36 = ((/* implicit */int) (~(min((arr_7 [i_0] [i_0 - 2] [i_0 - 3]), (arr_7 [i_0] [i_0 + 1] [i_0 + 1])))));
        /* LoopSeq 2 */
        for (unsigned char i_8 = 2; i_8 < 10; i_8 += 1) /* same iter space */
        {
            var_37 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_26 [i_0] [i_8]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_17)), (arr_27 [i_8 - 1] [i_8] [i_8]))))))) < (min((((/* implicit */int) arr_24 [i_0 - 1] [i_0 - 3] [i_8 + 2] [i_8 + 1])), ((-(((/* implicit */int) arr_1 [i_8]))))))));
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_8] [i_0] [9U])) ? (min(((-(((/* implicit */int) arr_4 [i_8] [i_0 - 3] [i_0 - 3])))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_8])) == (((/* implicit */int) arr_15 [i_0] [i_8] [i_8] [i_8]))))))) : (((((((/* implicit */int) arr_15 [i_0] [i_8 + 3] [i_8] [i_8])) - (var_7))) + ((-(((/* implicit */int) var_6))))))));
            arr_28 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_8])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0])))), (((arr_12 [i_0 - 1] [i_0] [i_0] [i_8]) / (((/* implicit */int) var_6))))))));
            var_39 = min((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_5 [i_8] [i_0] [i_8])) & (((/* implicit */int) var_11)))))), ((~(((/* implicit */int) arr_21 [i_0 + 2] [i_8] [i_8 + 2] [i_8 + 2])))));
        }
        for (unsigned char i_9 = 2; i_9 < 10; i_9 += 1) /* same iter space */
        {
            var_40 *= (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 4] [i_0] [i_9])) ? (arr_20 [i_9] [(short)10] [i_9] [i_0] [i_0] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))))));
            var_41 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_9)), ((((!(((/* implicit */_Bool) arr_29 [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) var_7)), (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [9U] [i_9 - 1] [8U])) ? (arr_2 [i_0]) : (var_1))))))));
            arr_33 [i_0] |= ((/* implicit */signed char) ((((arr_7 [i_0 + 2] [i_0] [i_0 - 3]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1]))))) ? (((arr_7 [i_0 + 2] [(short)10] [i_0 + 2]) % (arr_7 [i_0 - 2] [i_0 + 2] [i_0 + 2]))) : (((unsigned int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 2]))));
            var_42 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((short) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_32 [i_9])) : (((/* implicit */int) var_10))))));
        }
    }
    var_43 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((var_19), (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : ((+(var_18)))))));
}
