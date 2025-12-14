/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21718
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_16 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (unsigned char)65)), (3479430913U)))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_2]);
            var_18 = ((/* implicit */unsigned short) max(((_Bool)1), (((_Bool) (signed char)-83))));
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_19 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3] [i_3]))) >= (38905453550737765ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25706))) : (1780727287U)));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                var_20 = ((/* implicit */short) ((arr_13 [(unsigned char)5] [i_1] [i_3] [i_4]) < (((/* implicit */long long int) (-(((/* implicit */int) (short)25705)))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_0))));
                var_22 = ((/* implicit */short) 17529241903243741502ULL);
            }
        }
        arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_11 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-96)) % (((int) arr_7 [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((unsigned long long int) arr_0 [18LL] [18LL]))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-27259)) ? (((((/* implicit */_Bool) 12736776536195619297ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(var_1)))))))));
            arr_19 [i_5] [i_6] [i_5] = arr_17 [i_5] [i_5];
        }
        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            var_24 = ((/* implicit */long long int) ((((int) (signed char)64)) ^ (((554837388) + (((/* implicit */int) (unsigned char)214))))));
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (var_6)));
        }
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_12)) ? (arr_18 [i_5] [i_5] [i_5]) : (((/* implicit */int) var_3))))))));
    }
    for (short i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
    {
        var_27 |= ((/* implicit */signed char) min(((-(min((var_6), (((/* implicit */unsigned long long int) var_0)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(signed char)20] [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)126))))) ^ ((~(var_6)))))));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((16170910049424007045ULL), (((/* implicit */unsigned long long int) (short)24010))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(unsigned char)4]))))) : (((/* implicit */int) arr_9 [i_8] [i_8] [i_8]))))) ? (arr_12 [(short)11] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_8] [i_8])))))))))));
    }
}
