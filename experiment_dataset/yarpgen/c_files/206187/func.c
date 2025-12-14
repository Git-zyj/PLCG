/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206187
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
    var_20 = ((short) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)237)))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (!(((arr_4 [i_0] [i_1] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)11] [0ULL] [i_1]))))))))));
            arr_6 [i_0] = ((/* implicit */unsigned char) arr_1 [(signed char)5] [i_1]);
        }
        for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
        {
            var_23 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_0] [i_2 - 2]))));
            arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 - 2] [i_0]))) : (arr_0 [i_0])))) : (arr_4 [i_2 + 1] [i_2] [i_2 - 2])));
            var_24 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
        }
        for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_25 = ((/* implicit */short) arr_10 [i_3] [i_0] [i_0]);
            arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [10U]))) - (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [11] [i_0])))));
            arr_13 [i_0] = ((/* implicit */signed char) arr_3 [(unsigned char)12] [i_3]);
            arr_14 [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_3] [(short)13])))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 1; i_5 < 13; i_5 += 4) 
            {
                arr_20 [i_0] [i_4] [i_5] = ((/* implicit */unsigned short) (~(arr_10 [i_0] [i_4] [i_4])));
                arr_21 [i_0] [5ULL] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_0])))) > (((unsigned int) arr_15 [i_0]))));
            }
            var_26 ^= ((/* implicit */unsigned int) ((signed char) arr_11 [i_0] [i_0] [i_0]));
            arr_22 [8U] |= (-(((/* implicit */int) (unsigned short)3)));
            var_27 = ((/* implicit */short) arr_3 [i_0] [i_0]);
        }
        arr_23 [i_0] = ((/* implicit */unsigned short) arr_16 [i_0] [i_0]);
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned short) (unsigned short)43174))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((/* implicit */int) (short)-21120)) : (var_15)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            {
                arr_29 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7])) ? (((/* implicit */int) arr_26 [i_7])) : (((/* implicit */int) arr_26 [i_7]))))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) arr_26 [i_7])) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7])))))));
                var_29 = ((/* implicit */unsigned int) arr_24 [i_7]);
                var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_25 [i_6]))) ? (((((/* implicit */_Bool) arr_25 [i_6])) ? (((/* implicit */int) arr_28 [i_6] [i_7])) : (((/* implicit */int) arr_26 [0U])))) : (((/* implicit */int) min((arr_26 [(unsigned short)10]), (arr_25 [i_6]))))));
            }
        } 
    } 
}
