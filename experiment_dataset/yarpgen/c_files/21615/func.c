/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21615
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [4ULL] [i_2] |= ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_2 - 2])))));
                    var_11 += ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_2 + 2])) == (max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)24))))))), (524287U)));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */int) (-(min((var_4), (((/* implicit */unsigned int) arr_2 [i_0]))))));
        var_12 += ((/* implicit */_Bool) 0ULL);
        var_13 ^= ((/* implicit */signed char) max((arr_0 [i_0] [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)232)))))));
        var_14 = 2147483647;
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */long long int) (unsigned char)15);
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
                    {
                        for (signed char i_7 = 4; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-(((/* implicit */int) arr_20 [i_6 + 1] [i_7 + 2])))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)24)) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)22)) && ((_Bool)0))))));
                                var_19 ^= ((/* implicit */_Bool) arr_12 [i_3] [i_3]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_0))));
                }
                for (signed char i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_14 [i_3 + 3]))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) var_4);
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_8] [i_8] [i_8])))))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 2; i_10 < 16; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (arr_12 [i_9 - 1] [i_3 - 3]))) == (((((/* implicit */_Bool) arr_4 [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 - 1] [i_9 - 1]))) : (arr_4 [i_3 - 1])))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (unsigned char)64))));
                            var_26 = ((/* implicit */_Bool) max(((+(arr_29 [i_10] [i_10] [i_10 + 2] [i_10 - 1] [i_10 - 2]))), (((/* implicit */long long int) (-(arr_1 [i_3]))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 2; i_11 < 17; i_11 += 3) 
                        {
                            var_27 = ((/* implicit */_Bool) max((var_27), (arr_31 [i_3] [i_3] [i_3 + 3] [i_3] [i_3])));
                            arr_32 [i_3] [i_4] [i_3] [i_3] [i_9] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) var_3);
                        }
                    }
                }
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (-(max((((/* implicit */long long int) arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 3])), (var_3))))))));
                arr_33 [i_3 - 1] [(short)14] [i_4] = ((/* implicit */short) ((arr_18 [i_4] [i_4] [i_3 + 2] [i_3 - 2] [i_3 - 2]) == ((~(4294967288U)))));
            }
        } 
    } 
    var_29 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_12] [i_12] [i_12] [(unsigned short)2] [i_12] [10LL] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [6U] [i_12] [i_12] [i_12]))) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_23 [i_12] [i_12] [i_12] [i_12]))))) : (((arr_21 [i_12] [i_12] [(unsigned short)0] [i_12] [i_12] [(_Bool)1] [8U]) ^ (arr_21 [i_12] [i_12] [i_12] [i_12] [i_12] [(unsigned char)16] [(unsigned char)16])))));
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_17 [2ULL] [2ULL] [i_12] [i_12]))));
    }
}
