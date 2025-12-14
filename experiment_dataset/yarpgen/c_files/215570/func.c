/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215570
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
    var_14 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)95))))) ? (var_10) : (98141835))) | (((/* implicit */int) (unsigned char)3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */int) (unsigned char)3)) + (((/* implicit */int) arr_1 [i_0])));
        var_15 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_2] = ((/* implicit */unsigned int) min((max(((+((-2147483647 - 1)))), ((~(199123649))))), (((/* implicit */int) arr_4 [(unsigned char)14] [1LL]))));
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (-(((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (5292977806301850811LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))))))))));
                    arr_13 [i_1] [i_1] [13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((int) var_13)))) ? (-199123653) : (((((/* implicit */int) arr_4 [i_1] [i_3])) + (-199123650)))));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)0)))) || (((/* implicit */_Bool) max((var_0), ((unsigned char)0)))))))))));
                        arr_17 [i_4] [i_4] [i_3] [i_1] [21] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4])) ? (arr_6 [i_3]) : (arr_6 [i_1])))) ? (min((arr_6 [i_2]), (arr_6 [i_2]))) : (arr_6 [i_4]));
                    }
                }
            } 
        } 
        arr_18 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_15 [(unsigned char)14] [(unsigned char)14] [(unsigned char)14] [i_1]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned char)165), ((unsigned char)4))))))) : (((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_7 [i_1])) : (arr_16 [14] [14] [14]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (635777239U) : (((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_1])))))))));
        var_18 = min((((((/* implicit */_Bool) (~(4095LL)))) ? (((((/* implicit */_Bool) arr_15 [0U] [i_1] [8] [0U])) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) var_7)))) : (1236571566))), (((/* implicit */int) ((arr_14 [6] [i_1] [i_1]) != (((((/* implicit */_Bool) arr_14 [8] [8] [8])) ? (((/* implicit */int) (unsigned char)119)) : (50331648)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)15))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (unsigned char i_7 = 1; i_7 < 24; i_7 += 2) 
                {
                    {
                        var_20 = ((int) (-(((/* implicit */int) var_5))));
                        var_21 = ((/* implicit */int) arr_1 [i_1]);
                        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)128))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    {
                        arr_29 [(unsigned char)12] [i_8] [i_5] [i_1] &= ((/* implicit */long long int) (+(arr_14 [i_8] [i_8] [2LL])));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (((((~(((/* implicit */int) var_7)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                    }
                } 
            } 
        }
        for (long long int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            arr_32 [i_10] = ((/* implicit */long long int) min((min((((/* implicit */int) min((arr_4 [i_10] [i_1]), ((unsigned char)253)))), ((-(arr_28 [i_1] [i_10]))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_2)), (arr_3 [(unsigned char)14])))))))));
            var_24 |= ((((((/* implicit */int) ((unsigned char) arr_6 [i_10]))) - (((/* implicit */int) min(((unsigned char)255), ((unsigned char)133)))))) + (((/* implicit */int) (unsigned char)255)));
        }
    }
}
