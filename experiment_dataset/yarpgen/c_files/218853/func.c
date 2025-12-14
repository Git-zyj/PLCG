/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218853
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
    var_10 = ((/* implicit */int) 8388607U);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_11 *= ((/* implicit */unsigned char) max((arr_3 [i_0] [(unsigned short)6] [i_1]), (((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) max(((unsigned short)4064), ((unsigned short)4084))))))));
            arr_4 [i_1] = ((/* implicit */unsigned int) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61450)))));
            var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_1 [1] [i_1])) : (3ULL))))))), (max((((/* implicit */unsigned long long int) arr_1 [i_1] [i_0])), (max((18446744073709551611ULL), (((/* implicit */unsigned long long int) (unsigned char)59))))))));
            var_13 = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned short)61458)) ? (3087231608U) : (1207735704U)))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4065)) ? (((/* implicit */unsigned int) ((int) var_8))) : (arr_2 [i_2 + 1])));
            var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_2]))) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 2] [i_2 - 2])) : (((/* implicit */int) ((unsigned short) (unsigned short)61456)))));
            var_16 ^= (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [(unsigned short)5])) : (((/* implicit */int) arr_5 [3] [3] [i_2])))));
            var_17 = ((/* implicit */unsigned int) arr_3 [(unsigned char)7] [(unsigned char)8] [i_2 + 1]);
        }
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(var_9)))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (max((((/* implicit */int) (unsigned char)19)), (var_4))))) : ((~((+(var_4)))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)61470))));
        var_18 &= ((/* implicit */unsigned char) arr_9 [i_3]);
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (((+(var_9))) < (min((var_5), (((/* implicit */long long int) var_3))))))) : (((/* implicit */int) var_8)))))));
    var_20 += ((/* implicit */unsigned long long int) (unsigned short)61461);
}
