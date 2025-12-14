/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224769
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0 - 1] [(unsigned short)15])) ? (arr_1 [i_0 - 1] [i_0]) : (arr_1 [i_0 + 3] [i_0 + 3]))), (((/* implicit */unsigned long long int) var_11))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)16695)) << (((/* implicit */int) (unsigned char)15))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) min((var_9), (((/* implicit */long long int) var_3))))))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 + 1] [i_0 + 3] [i_0 + 3] [i_0] [i_0 - 1] [i_0] [18LL]))) : (arr_3 [i_1 + 1] [(unsigned short)6] [i_0]))), (((/* implicit */long long int) min((arr_12 [i_1 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0] [i_0]), (((/* implicit */unsigned char) var_10))))))))));
                            }
                        } 
                    } 
                    arr_13 [(signed char)12] [i_2] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) + (var_4)))) ? (min((4184108761U), (2673931091U))) : (((/* implicit */unsigned int) min((var_1), (((/* implicit */int) var_10)))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) (-(var_9)));
                        var_22 = (~(((/* implicit */int) var_17)));
                    }
                }
                var_23 = ((/* implicit */short) (+((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_14)))))));
                var_24 ^= ((/* implicit */short) min((((((arr_6 [i_1 - 4] [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)164)), (((((/* implicit */int) (unsigned char)253)) << (((((/* implicit */int) (short)-3022)) + (3030))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))))), (((/* implicit */unsigned short) var_10)))))));
    /* LoopSeq 4 */
    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))), (((((/* implicit */unsigned long long int) arr_4 [i_6])) + (min((((/* implicit */unsigned long long int) 4002620203U)), (var_4)))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (arr_9 [i_6] [i_6] [i_6] [i_6] [i_6]))))))));
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)36), ((unsigned char)253)))) ? ((+(((/* implicit */int) arr_2 [i_6])))) : (((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]))))) ? (min((arr_3 [i_6] [i_6] [i_6]), (arr_3 [i_6] [i_6] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)15), ((unsigned char)234)))))));
    }
    /* vectorizable */
    for (short i_7 = 2; i_7 < 21; i_7 += 2) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)241)) ^ (((/* implicit */int) arr_20 [i_7]))));
        arr_22 [i_7] = var_15;
    }
    for (unsigned char i_8 = 3; i_8 < 15; i_8 += 3) /* same iter space */
    {
        arr_25 [i_8] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) var_12))), (min((((/* implicit */long long int) arr_2 [i_8])), (var_12)))))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_11))))) : (((/* implicit */int) arr_10 [i_8] [i_8] [i_8] [i_8] [i_8 + 2])))) : ((~(((/* implicit */int) var_13)))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            for (unsigned short i_10 = 1; i_10 < 15; i_10 += 3) 
            {
                for (unsigned char i_11 = 1; i_11 < 16; i_11 += 1) 
                {
                    {
                        var_30 |= var_17;
                        var_31 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_8 + 2] [i_10] [2U]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-40)) + (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_7)) ? (var_9) : (var_12)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_5)))))) : (var_14)));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */unsigned int) (((((+(arr_31 [i_8]))) + (9223372036854775807LL))) << (((((min((-264608624), (((/* implicit */int) (signed char)-12)))) + (264608634))) - (10)))));
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            for (short i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((var_16), (((/* implicit */short) arr_12 [i_8] [i_8 - 3] [i_8] [5U] [5U] [i_8 + 2] [i_12]))))) : (((((/* implicit */_Bool) arr_12 [5LL] [(unsigned char)20] [(unsigned char)20] [i_8 - 1] [(unsigned char)13] [i_8 - 1] [i_8])) ? (((/* implicit */int) arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 - 1] [i_12])) : (((/* implicit */int) arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 - 1] [i_14]))))));
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_15 = 3; i_15 < 15; i_15 += 3) /* same iter space */
    {
        arr_43 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_3 [i_15 + 1] [i_15 - 3] [i_15 + 1]) : (arr_3 [i_15] [i_15 + 1] [(unsigned short)7]))));
        var_36 = ((short) ((((/* implicit */_Bool) arr_8 [i_15 - 3] [i_15 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-16689)))) : (arr_23 [i_15 - 2])));
    }
}
