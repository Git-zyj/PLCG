/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197327
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) arr_0 [i_0])) > (2242856791366372248LL))) ? (((((/* implicit */long long int) (-(var_1)))) ^ (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) (+(1929460396))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] &= ((/* implicit */unsigned long long int) 6110431691221796173LL);
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (arr_3 [(unsigned char)4] [11U])));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 - 4] [i_2]))) : (arr_8 [i_1] [i_1])));
            }
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                /* LoopSeq 4 */
                for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_19 += ((/* implicit */unsigned char) (-(((var_11) + (var_8)))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 2])) : (arr_0 [i_1 - 3])));
                    /* LoopSeq 1 */
                    for (int i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) -2242856791366372243LL))));
                        var_22 = ((int) ((((/* implicit */_Bool) 4077620371U)) && (((/* implicit */_Bool) var_12))));
                    }
                }
                for (short i_6 = 3; i_6 < 9; i_6 += 2) 
                {
                    var_23 = ((/* implicit */unsigned long long int) var_10);
                    arr_20 [i_6] = ((/* implicit */unsigned int) arr_16 [i_1 - 3] [i_1 + 2] [i_6 + 1] [8ULL] [i_6 + 1]);
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        arr_24 [i_6] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(2242856791366372248LL)))) ? (var_12) : (((/* implicit */unsigned long long int) (-(var_10))))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_1 + 2] [i_6 - 3] [i_6] [i_6 - 2] [(unsigned char)10])) || (((/* implicit */_Bool) arr_16 [i_1 - 3] [i_6 - 1] [i_6 - 1] [i_6 + 3] [i_7])))))));
                        var_25 = ((/* implicit */unsigned short) arr_22 [i_0] [i_1] [i_6] [(unsigned char)8] [i_1]);
                        arr_25 [i_0] [5] [i_6] [3ULL] [i_0] [(_Bool)1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)255))));
                    }
                    var_26 += (unsigned char)254;
                }
                for (unsigned char i_8 = 2; i_8 < 11; i_8 += 2) 
                {
                    var_27 ^= ((/* implicit */int) ((long long int) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((int) -2082478726)))));
                    var_29 *= ((/* implicit */unsigned int) ((unsigned char) arr_2 [i_1 - 2] [i_8 - 1] [i_8 - 2]));
                    arr_29 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_8 - 1] [i_8 - 2])) ? (var_1) : (var_1)));
                }
                for (unsigned char i_9 = 1; i_9 < 10; i_9 += 2) 
                {
                    arr_33 [(unsigned char)1] [(_Bool)1] [2U] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_3] [i_9 + 1])) ? (((((/* implicit */_Bool) arr_13 [i_0] [(_Bool)0] [i_3] [i_3] [i_9])) ? (arr_15 [i_9 - 1] [i_9 + 2] [i_3] [i_3] [i_3] [0ULL] [4]) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11)))));
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((arr_32 [i_1 - 2] [i_1 + 1] [i_9] [i_9 + 2] [i_9 + 2]) + (arr_32 [i_1 + 2] [i_1 - 2] [(short)10] [i_1 + 2] [i_9 + 1]))))));
                }
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65525))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 1; i_11 < 11; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned short) ((var_11) & (((/* implicit */unsigned int) var_10))));
                        var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_1] [i_11 - 1])) ? (arr_23 [i_10] [i_11 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)10551)))));
                        arr_38 [i_11] [i_1] [i_11] [7ULL] [4U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_1)) : (arr_27 [i_11] [i_10] [i_3] [i_0] [i_0])))) ? (arr_28 [(signed char)11] [i_1] [i_1 + 2] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_10] [10U] [i_10]))));
                    }
                    arr_39 [i_0] [0] [0] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_1 - 3] [i_1] [i_1 + 2] [4LL] [i_1 - 1] [i_1] [i_1 - 1]))));
                }
            }
            var_34 = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [(unsigned short)8] [i_1] [i_1 - 1]))));
            arr_40 [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */int) var_3)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [0ULL] [i_0])))))));
        }
        for (signed char i_12 = 3; i_12 < 9; i_12 += 2) 
        {
            var_35 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 759099442)) ? (arr_19 [i_12] [i_0] [i_12 - 2] [4ULL] [i_0] [8U]) : (1828961650417363237LL)))) / ((-(9733723359476661319ULL)))));
            arr_44 [i_12] [i_12] = ((/* implicit */unsigned long long int) (((~(var_7))) ^ ((+(max((8191), (((/* implicit */int) arr_11 [i_0] [(_Bool)1]))))))));
            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (unsigned char)194))));
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (short)4080)))))) / (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (-(var_8)))))))));
        }
    }
    var_38 = ((/* implicit */int) (+(((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)24)))))));
}
