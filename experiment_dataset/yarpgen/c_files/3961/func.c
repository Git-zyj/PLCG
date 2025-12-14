/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3961
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((2397077237310609212ULL), (((/* implicit */unsigned long long int) arr_3 [(signed char)0] [i_1] [i_0]))))) ? (((/* implicit */int) (short)-18176)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) var_6)))))))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_18 = ((/* implicit */unsigned long long int) ((_Bool) min((5724701413363556755LL), (((/* implicit */long long int) (-(((/* implicit */int) (short)18))))))));
                var_19 = ((/* implicit */short) (~(arr_4 [i_0] [i_0] [9])));
            }
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0] [i_0] [16ULL])) >> (((((int) (unsigned short)65535)) - (65522)))));
                var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)31))))) ? (((((/* implicit */_Bool) 107430749)) ? (4173191436U) : (974500741U))) : (((/* implicit */unsigned int) arr_7 [i_1] [i_3]))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_3])) ? (arr_4 [i_0] [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_1])) >> (((/* implicit */int) arr_5 [i_3]))))) : (var_13)));
                var_22 = ((/* implicit */long long int) arr_4 [i_3] [i_0] [i_0]);
                var_23 = ((/* implicit */unsigned char) ((arr_5 [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_3]))));
            }
            for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                var_24 = 3320466579U;
                arr_12 [i_4] [i_4] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((short) (unsigned char)54))), ((+(arr_11 [i_0] [i_0] [i_1] [i_0]))))) < (((((/* implicit */_Bool) ((((var_5) + (9223372036854775807LL))) << (((arr_11 [i_4] [18] [i_0] [i_0]) - (5728895476562542859LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (arr_3 [i_0] [i_0] [i_0])))));
            }
            arr_13 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (short)-8204)), (arr_4 [i_0] [i_0] [i_1]))), (min((arr_4 [i_0] [i_0] [i_1]), (arr_4 [i_0] [i_0] [i_1])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
            {
                arr_17 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0]);
                var_25 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (unsigned short)16128)) / (((/* implicit */int) (unsigned char)21)))));
            }
            var_26 = ((/* implicit */unsigned char) min((0), (((/* implicit */int) (unsigned char)21))));
        }
        arr_18 [i_0] = ((/* implicit */unsigned int) (-2147483647 - 1));
        var_27 = ((/* implicit */unsigned char) 7937052058139717861ULL);
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            {
                arr_23 [i_6] [i_6] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_7] [(short)8])) ? (((/* implicit */int) (signed char)-32)) : (arr_7 [i_6] [i_6])))) + ((+(8471597921869551529ULL))))), (((((/* implicit */unsigned long long int) min((4173191446U), (((/* implicit */unsigned int) (unsigned char)76))))) - (arr_16 [i_7] [i_7] [i_7])))));
                arr_24 [i_6] [i_7] |= ((/* implicit */unsigned short) 12926522740357431224ULL);
            }
        } 
    } 
}
