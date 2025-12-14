/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235158
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) arr_2 [(unsigned short)11]);
            arr_5 [i_0] [7ULL] = ((/* implicit */unsigned short) arr_0 [i_0]);
            arr_6 [i_0] |= ((/* implicit */_Bool) arr_2 [i_0]);
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)1])) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_1 [(unsigned short)1] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) arr_3 [i_1 + 1] [i_0])))) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7560653325337336049LL)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */int) max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) (signed char)(-127 - 1))))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [(unsigned char)7] [(unsigned char)7])) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) ((signed char) arr_2 [i_1 + 1])))))) : (max((((unsigned long long int) 1052278091U)), (((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_0])))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_2]), (arr_1 [i_2] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_1 [7ULL] [i_0]))))) : (((unsigned int) arr_0 [15U]))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_15 [i_0] [14LL] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3])) != (((/* implicit */int) arr_14 [i_3 - 1] [i_4 + 1])))));
                        arr_16 [i_0] [i_2] [i_3 - 1] [i_4 - 1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_13 [i_4] [i_4 + 2] [i_4 + 2] [i_3])) ^ (((/* implicit */int) arr_13 [(_Bool)1] [i_4] [i_4 + 2] [i_0])))));
                    }
                } 
            } 
            arr_17 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) || (((/* implicit */_Bool) var_9))));
            var_13 ^= ((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_9 [i_2] [i_0])))) >= (var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_0])) || (((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-259)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(unsigned char)14] [(signed char)11] [5U] [(unsigned short)10]))) : (var_10)))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_2] [2LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24615))) : (arr_9 [i_0] [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2])) | (((/* implicit */int) arr_10 [i_0] [3ULL]))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_20 [i_5] [(unsigned char)15] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((signed char) arr_0 [i_0]))) : (((/* implicit */int) arr_0 [i_5]))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                arr_24 [i_6] [10U] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [(signed char)0] [i_5] [(signed char)0] [(signed char)0])) > (((/* implicit */int) ((signed char) (!((_Bool)1)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    var_14 = ((/* implicit */unsigned int) ((_Bool) arr_18 [i_6 + 1]));
                    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [12LL] [12LL])) : (((/* implicit */int) arr_14 [i_5] [i_7]))))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_6 + 1] [i_6 + 1] [i_6 + 1])) && (((/* implicit */_Bool) arr_11 [i_6 + 1] [i_6 + 1] [i_6 + 1]))))) : (((/* implicit */int) (unsigned short)62618))));
                    arr_28 [i_0] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0]))) : ((-(((unsigned int) arr_19 [i_0] [i_0] [i_0]))))));
                }
                for (int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_3 [i_5] [i_0])) - (111)))))) ? (arr_9 [i_5] [i_5]) : (arr_18 [i_6 + 1]))))));
                    var_17 = ((/* implicit */short) max((arr_2 [i_6 + 1]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_13 [i_0] [i_5] [i_6 + 1] [i_8])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 3) 
                    {
                        var_18 -= ((unsigned char) ((unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_32 [(unsigned short)15] [i_8] [i_6] [i_5])) : (((/* implicit */int) var_4)))));
                        var_19 = ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_9 - 2] [i_9 + 2])) : (((/* implicit */int) arr_10 [i_9 - 1] [i_9 - 1])))) % (((((/* implicit */_Bool) ((unsigned int) 917504U))) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) arr_29 [i_9] [i_0] [i_9] [i_8] [i_9] [i_0]))))) : (max((arr_11 [i_8] [i_8] [i_8]), (((/* implicit */int) var_1)))))));
                        var_20 = ((/* implicit */_Bool) var_2);
                    }
                }
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)-29049)) ? (arr_25 [i_5] [i_5] [i_6 + 1] [i_6] [i_0]) : (max((arr_25 [i_0] [i_0] [i_5] [i_0] [i_6]), (((/* implicit */int) arr_32 [i_5] [i_0] [i_6] [i_0])))))))))));
                var_22 *= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_6 + 1] [i_6 + 1]))) & (var_2))));
            }
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            arr_36 [i_10] = ((/* implicit */short) ((unsigned int) arr_32 [i_0] [i_0] [i_0] [i_0]));
            var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_10])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_2))) : (((unsigned long long int) var_4))));
        }
        var_24 ^= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) arr_23 [i_0] [3LL]))), ((+(18446744073709551615ULL)))))) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) * (((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1052278072U))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_19 [(unsigned short)6] [i_0] [(unsigned short)6])) : (((/* implicit */int) arr_27 [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4))))))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                {
                    arr_43 [(unsigned char)10] [(unsigned char)10] |= ((/* implicit */unsigned short) ((unsigned int) max((arr_25 [i_12] [i_11] [i_11] [i_0] [i_0]), (((/* implicit */int) ((_Bool) arr_35 [i_0] [9ULL]))))));
                    var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [(unsigned char)11] [i_11] [7ULL] [i_12])) | (((/* implicit */int) arr_12 [i_0] [i_11] [i_12]))))) ? (((/* implicit */int) (!(arr_21 [i_0] [i_11])))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_11])) ? (((/* implicit */int) arr_2 [i_12])) : (((/* implicit */int) arr_12 [i_12] [i_11] [i_0]))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_8 [i_12] [i_11] [(short)14])) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) arr_12 [i_0] [i_11] [i_0])))) : (((/* implicit */int) arr_40 [i_11] [i_11] [i_11] [(_Bool)1])))))))));
                }
            } 
        } 
        var_27 ^= arr_30 [i_0] [i_0] [i_0] [(unsigned char)3];
    }
    var_28 = ((/* implicit */long long int) ((short) ((int) var_10)));
}
