/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226512
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
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_18 ^= arr_3 [i_0 + 2];
            var_19 = ((/* implicit */unsigned long long int) arr_0 [(unsigned short)1]);
            var_20 = ((/* implicit */unsigned short) ((6614038523076222385ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19885)))));
        }
        var_21 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) : (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_2 [i_0] [i_0] [i_0 + 2])))) : (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_1)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_10)) << (((arr_2 [i_0] [i_0] [i_0 - 2]) - (1185909381886883049LL))))))) : (((/* implicit */int) arr_0 [i_0 + 2]))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_2] [i_2])) ^ (((((/* implicit */_Bool) (short)17398)) ? (((/* implicit */int) (short)19885)) : (((/* implicit */int) (_Bool)1))))));
        var_22 = ((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2]);
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_3])) - (((/* implicit */int) arr_10 [i_3]))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_10 [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_3]))))))))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) arr_15 [i_3] [i_3] [i_5]);
                    arr_18 [i_5] [i_5] [i_4] [i_3] = ((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_5])) ? (((int) var_8)) : ((~(((/* implicit */int) var_6)))));
                }
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        arr_21 [i_6] [(short)5] = ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)181)), ((unsigned short)19)));
        var_26 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (arr_14 [i_6] [i_6] [i_6])))) ? (((/* implicit */int) arr_8 [i_6])) : (((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) arr_19 [i_6] [i_6])) : (((/* implicit */int) arr_5 [i_6])))))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((var_11), (((/* implicit */long long int) var_2))))))) ? (((((/* implicit */int) var_4)) % (((/* implicit */int) var_12)))) : ((+(((var_0) * (((/* implicit */int) var_17))))))));
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_29 [i_9] [i_8] [i_9] = ((/* implicit */unsigned long long int) arr_9 [i_9]);
                    var_28 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_7] [i_7])) * (((/* implicit */int) arr_1 [i_8] [i_8])))) / (((/* implicit */int) ((unsigned short) arr_1 [i_8] [(short)2])))));
                }
            } 
        } 
    } 
}
