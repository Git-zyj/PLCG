/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228038
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (var_14)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_18 = (short)-27605;
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                /* LoopSeq 3 */
                for (long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    var_19 ^= ((/* implicit */short) arr_1 [i_0]);
                    arr_10 [i_1] = ((/* implicit */short) var_0);
                }
                for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_2] [i_2] [i_4] [i_5]);
                        arr_16 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
                        var_21 ^= ((/* implicit */unsigned char) (~(((((/* implicit */int) var_10)) / (((/* implicit */int) var_3))))));
                        var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (15036580600576584654ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))) : ((-(arr_7 [i_0] [i_1] [i_5])))));
                        var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0] [i_2] [i_4])) > (arr_2 [(unsigned short)16] [i_5])));
                    }
                    var_24 ^= (~((~(var_14))));
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_4] [9ULL] [i_1] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_11 [i_0])))))));
                }
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    arr_21 [i_0] [1ULL] [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) != (arr_2 [i_0] [i_6])));
                    arr_22 [i_0] [i_0] [i_2] = (short)(-32767 - 1);
                    var_26 ^= ((/* implicit */unsigned char) var_12);
                    var_27 ^= ((/* implicit */short) (+(arr_2 [9ULL] [i_2])));
                }
                var_28 = ((/* implicit */unsigned long long int) ((((arr_7 [i_0] [i_0] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1]))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
            }
            arr_23 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
            var_29 = ((/* implicit */long long int) arr_0 [i_1]);
            var_30 ^= ((/* implicit */_Bool) arr_1 [i_0]);
            arr_24 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
        }
        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 2) 
        {
            var_31 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_7 + 2] [i_7])) ? (arr_20 [i_0] [5U] [i_0] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
            var_32 ^= ((/* implicit */_Bool) var_12);
            /* LoopNest 2 */
            for (long long int i_8 = 3; i_8 < 15; i_8 += 2) 
            {
                for (short i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) var_7);
                        arr_33 [i_8] [(unsigned char)2] = ((arr_8 [i_7 + 1] [i_7 - 1] [i_8 + 3] [i_9 - 1] [i_7 - 1]) & (arr_8 [i_0] [i_7 + 1] [i_7] [i_8] [i_9 + 1]));
                    }
                } 
            } 
            var_34 ^= ((/* implicit */_Bool) arr_25 [i_0]);
        }
        arr_34 [(unsigned char)10] = arr_0 [i_0];
        var_35 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
    {
        var_36 ^= ((/* implicit */unsigned int) var_13);
        arr_38 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_10] [i_10] [i_10] [i_10])) - (((/* implicit */int) arr_31 [i_10] [i_10]))))) ? (((/* implicit */int) ((unsigned char) var_1))) : (2147483627)));
    }
}
