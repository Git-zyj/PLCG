/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236968
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
        var_18 = ((/* implicit */long long int) min((var_18), (min((((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned short)1]))) : (((((/* implicit */_Bool) 268435455U)) ? (var_7) : (((/* implicit */long long int) arr_1 [i_0])))))), (((/* implicit */long long int) (((~(arr_1 [i_0]))) << (((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [(unsigned short)6] [(short)12])), (var_13)))) - (12507))))))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        arr_3 [(short)12] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (var_0) : (((/* implicit */long long int) ((arr_1 [i_0]) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (12489)))))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_20 -= arr_5 [i_1];
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 4; i_4 < 16; i_4 += 2) 
                {
                    {
                        var_21 += ((/* implicit */signed char) arr_12 [(unsigned char)9] [i_4 - 1] [i_4 + 2] [(unsigned char)9]);
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 255ULL)) ? (var_14) : (var_17)))))));
                        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) arr_4 [i_4] [i_4 + 2])) ? (((/* implicit */int) arr_9 [i_4 - 2] [(short)16] [(short)16])) : (((/* implicit */int) arr_9 [i_4 - 1] [i_4] [4U]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 17; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 2; i_7 < 14; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */short) var_7);
                        arr_21 [i_1] [i_5] [(unsigned char)7] [(short)2] |= ((/* implicit */short) (~(((((/* implicit */_Bool) var_8)) ? (267ULL) : (((/* implicit */unsigned long long int) var_2))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 1; i_8 < 17; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_8 + 1] [(short)9] [i_8]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-32)) + (2147483647))) >> (((((/* implicit */int) var_15)) + (12776)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) - (arr_15 [i_1] [(signed char)12] [i_1])))));
                            arr_24 [i_8] = arr_11 [i_1] [i_1] [i_1];
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)62)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_16 [15LL] [i_5] [i_5])) | (var_14)))))))));
                        }
                        for (short i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) ((short) arr_26 [(short)7] [i_5 - 2] [i_5] [i_6] [i_7 + 4] [i_9] [i_9]));
                            arr_28 [i_1] [i_5] [i_1] [7U] [i_5] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_5]))) : (arr_15 [(short)17] [i_5] [i_5 - 1]))) >> (((((((/* implicit */_Bool) (short)24)) ? (arr_27 [i_5 - 1] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_7]))))) + (1156605075566131440LL)))));
                            var_28 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */long long int) (-2147483647 - 1))) ^ (arr_17 [i_1] [i_1] [12U] [i_1]))));
                        }
                        for (short i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
                        {
                            arr_31 [3LL] [(short)1] [(unsigned short)16] [(unsigned short)16] [13LL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_10] [8ULL] [i_7 + 2] [i_1] [(short)13] [11LL])) ? (arr_20 [i_10] [i_7] [i_7 + 2] [i_6] [i_1] [i_1]) : (arr_20 [i_10] [(unsigned short)7] [i_7 + 2] [i_7] [i_6] [i_1])));
                            var_29 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_7 - 1] [(short)16] [i_7] [i_7 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_17 [(short)11] [i_7] [i_7 + 4] [i_7 + 4])));
                            arr_32 [(unsigned short)0] [i_7] [i_7] [i_6] [i_5 - 1] [i_5] [i_1] = ((/* implicit */long long int) (signed char)0);
                        }
                    }
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) arr_10 [(unsigned short)2] [i_1] [i_1]))) : (((((/* implicit */int) var_11)) & (arr_6 [i_6] [i_5])))));
                    arr_33 [i_5] [11ULL] [i_5] [i_1] = ((/* implicit */unsigned char) (+(18446744073709551360ULL)));
                    var_31 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) arr_22 [i_1] [i_1]))))) > (((/* implicit */int) ((arr_29 [i_5] [i_5] [i_5] [i_5 - 2] [i_5] [i_5 - 2] [i_5]) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_5 - 2] [i_5 - 2] [i_6]))))))));
                }
            } 
        } 
        var_32 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (var_17))))));
    }
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */long long int) var_17)) <= (var_2)))), (min((var_15), (((/* implicit */short) var_8))))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((9223372036854775807LL), (var_2))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (var_14)))))))))));
}
