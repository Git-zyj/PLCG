/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221339
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
    var_10 = ((/* implicit */int) var_9);
    var_11 = ((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) / (((/* implicit */int) var_5))))) * (((long long int) (short)0)))) / (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_13 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [6ULL]))) | (min((((/* implicit */unsigned int) var_6)), (max((var_9), (((/* implicit */unsigned int) arr_0 [i_1])))))))))));
        var_15 = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2]))))) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_2]))));
        var_17 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2])))), (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_6 [i_2]))))));
        var_18 = ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_6 [i_2])))), (((((/* implicit */int) arr_5 [i_2] [i_2])) ^ (((/* implicit */int) arr_7 [i_2]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (unsigned short)40729))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2]))))))) : (((/* implicit */int) var_7)));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 4; i_3 < 16; i_3 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_6 [i_3]))))))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                for (unsigned short i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_9 [i_2] [i_2] [i_2])))), (((((/* implicit */_Bool) (unsigned short)40729)) ? (((/* implicit */int) arr_11 [i_3] [i_3 - 4] [i_3 + 1] [i_3])) : (((/* implicit */int) var_2)))))))));
                            arr_17 [i_3] [i_5] [i_4] [1ULL] [i_3] = (-(((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)56959))))) & (arr_10 [i_3]))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned char) arr_15 [i_2] [i_2] [i_3] [i_2] [i_3]);
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) arr_9 [i_3 - 2] [i_3] [i_3 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 + 1] [i_3] [9LL]))) : (((long long int) arr_9 [i_3 - 3] [i_3] [i_3]))));
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_25 [5] [1ULL] [1ULL] [i_7] [i_7] [i_3] [i_9] = ((/* implicit */unsigned char) arr_16 [i_2] [i_2] [i_2] [(short)2] [(short)2]);
                            var_23 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)-27898))))));
                            var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ ((~(((/* implicit */int) (unsigned short)40729))))))), ((~((+(2842099807U)))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) var_8);
                            var_26 = ((/* implicit */int) arr_6 [i_8]);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_27 [i_2] [7] [i_3] [i_7] [i_7] [3])))) ? (((arr_11 [i_3 - 1] [i_3 - 1] [i_8] [i_11]) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_3 - 4])) : (((((/* implicit */_Bool) -426132033)) ? (((/* implicit */int) arr_19 [(unsigned short)12] [(unsigned short)12])) : (arr_24 [i_2] [i_7] [i_7] [i_8] [i_7] [i_3] [i_2]))))) : (min((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) arr_28 [i_7] [i_3])) : (((/* implicit */int) (unsigned short)64801)))), (((/* implicit */int) arr_7 [i_2]))))));
                            arr_32 [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) arr_8 [10U] [i_8] [i_7])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_7] [i_2] [i_11])))))) * (min((((/* implicit */int) min((((/* implicit */unsigned short) arr_29 [i_2] [(unsigned char)3] [i_3] [(unsigned char)3] [i_2])), (arr_16 [i_11] [(unsigned char)16] [(unsigned char)16] [(unsigned char)16] [(unsigned char)16])))), (((((/* implicit */int) var_0)) * (-1)))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_36 [(short)1] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) arr_5 [i_3] [i_3]);
                            arr_37 [i_2] [i_2] [i_7] [i_8] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-1169478322)))) ? (((((/* implicit */_Bool) arr_34 [i_8] [i_8] [8] [8] [i_2])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) -426132033)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38226))) : (arr_10 [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2))))));
                            arr_38 [i_3] = arr_28 [i_2] [i_3];
                            arr_39 [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [15ULL])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_23 [i_2] [i_3] [i_7] [3] [(_Bool)1]))))))) ? (((/* implicit */int) arr_7 [i_2])) : (((((/* implicit */_Bool) (~(6624798750380493130ULL)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_2] [i_2] [i_2] [i_2])), (arr_23 [i_12] [i_7] [i_7] [i_3] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1169478322)))))))));
                        }
                    }
                } 
            } 
        }
        for (short i_13 = 3; i_13 < 16; i_13 += 4) 
        {
            var_28 = ((/* implicit */unsigned int) arr_7 [i_2]);
            var_29 = ((/* implicit */int) (-((+(arr_27 [i_13 - 3] [i_13] [i_13] [i_13] [i_13] [i_13])))));
        }
    }
}
