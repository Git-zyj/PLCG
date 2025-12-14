/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233876
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
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (short)-32767);
        var_21 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))));
        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)8]))) % (var_13)));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_23 &= arr_5 [i_2];
            /* LoopNest 2 */
            for (short i_3 = 2; i_3 < 14; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_24 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_4]))) >= (var_2)));
                        var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12602)) && (((/* implicit */_Bool) ((unsigned char) arr_7 [i_3] [i_2])))));
                    }
                } 
            } 
            var_26 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [(short)6] [(short)6]))));
            var_27 = (unsigned char)24;
            arr_14 [i_1] [i_1] = var_17;
        }
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            arr_17 [(unsigned char)1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_1] [i_1]))));
            var_28 = (unsigned char)232;
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_9))));
                var_30 -= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) / (((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_12 [i_1] [i_1])) - (63)))))));
                var_31 = ((/* implicit */long long int) (~(((/* implicit */int) var_14))));
            }
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
            {
                var_32 -= ((/* implicit */short) arr_13 [i_1] [i_1] [i_1] [i_1]);
                arr_24 [i_7] [i_7] [i_7] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                var_33 += ((/* implicit */unsigned char) var_3);
                arr_25 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (((-(((/* implicit */int) (short)8091)))) > (((((/* implicit */int) arr_5 [i_5])) & (((/* implicit */int) arr_5 [i_7]))))));
            }
            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
            {
                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_20 [i_1] [i_5] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_8] [i_5] [i_8] [i_8] [(short)11] [i_1])) : (((/* implicit */int) var_15)))), (((/* implicit */int) arr_3 [i_1]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)68)))))));
                var_35 += ((/* implicit */unsigned char) arr_20 [i_1] [i_1] [i_5] [i_8]);
                var_36 ^= ((/* implicit */unsigned char) -8328260419324881091LL);
                var_37 = ((/* implicit */short) min((var_37), (arr_8 [i_8] [i_8] [i_1])));
            }
        }
        var_38 = ((/* implicit */unsigned char) arr_5 [i_1]);
        arr_29 [i_1] = ((/* implicit */long long int) min((((/* implicit */int) (short)127)), (((((/* implicit */int) arr_18 [i_1] [i_1] [i_1])) - (((/* implicit */int) (unsigned char)0))))));
        var_39 *= arr_20 [i_1] [i_1] [i_1] [(short)10];
        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (-(((/* implicit */int) (short)20252)))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_9 = 1; i_9 < 13; i_9 += 2) 
    {
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                {
                    var_41 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_34 [i_9] [i_9] [i_9 + 2])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)19139))))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_33 [i_9] [i_9 - 1]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89)))))))));
                    var_42 *= arr_31 [i_10];
                    var_43 = ((/* implicit */short) (~(((/* implicit */int) min((arr_36 [i_9 + 3] [i_10] [i_11] [i_9 + 3]), (arr_36 [i_9 - 1] [i_10] [i_11] [i_10]))))));
                }
            } 
        } 
    } 
}
