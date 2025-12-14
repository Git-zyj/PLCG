/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210396
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_10 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0]))));
        var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-19046))));
        var_12 -= ((/* implicit */short) arr_1 [i_0]);
        var_13 -= ((/* implicit */long long int) (unsigned char)255);
        var_14 -= ((/* implicit */unsigned char) ((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) < (((/* implicit */int) ((signed char) arr_2 [i_1])))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) (-(((var_7) & (((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_1]))))));
                    var_17 = ((/* implicit */_Bool) var_6);
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
                        {
                            {
                                var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_4 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-19043))));
                                var_19 -= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >> (((((/* implicit */int) arr_14 [i_4 + 1] [i_5] [i_5 - 1] [i_1] [i_1])) - (203)))));
                                var_20 -= ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_3])))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_4 + 3] [i_4 - 1])) : (((/* implicit */int) arr_14 [i_4] [i_4] [i_4] [i_3] [15U]))));
                                var_22 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_1] [i_4 - 1] [i_4 - 1] [(short)4]))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                    var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_1 [i_1]))));
                }
            } 
        } 
        var_24 -= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)6)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_0), (var_0))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49603)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6 - 2] [i_6 + 1] [i_6]))) : (var_6))))));
                    arr_24 [i_6] [i_7] [i_8] = ((/* implicit */signed char) ((((var_6) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)19))));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) (~(max((9223372036854775807LL), (-1210496223514978733LL)))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-74)) * ((+(((((/* implicit */int) var_9)) >> (((arr_7 [i_6 - 2] [i_6 - 1]) - (498603688U))))))))))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_12 [i_6] [i_6] [i_6])))))) == (min((((/* implicit */unsigned int) arr_5 [i_6 + 1])), (var_7)))));
                        var_29 -= ((/* implicit */unsigned char) (unsigned short)47953);
                    }
                    for (short i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-16384)) : (((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_26 [i_6 + 1] [i_6] [i_8] [i_8]))))))) : (((((/* implicit */_Bool) arr_19 [i_6 - 2])) ? (((/* implicit */long long int) var_7)) : (arr_19 [i_6 + 1])))));
                        var_31 -= ((((((/* implicit */_Bool) (unsigned short)49603)) ? (((/* implicit */int) (short)19075)) : (((/* implicit */int) (unsigned short)40660)))) & ((-(((/* implicit */int) arr_11 [i_7] [i_7] [i_8] [i_10])))));
                    }
                }
                for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    var_32 = ((/* implicit */unsigned short) (_Bool)1);
                    var_33 = ((/* implicit */unsigned int) max(((-(-1878907237))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)46)))))));
                    var_34 -= ((/* implicit */long long int) max((((/* implicit */int) max((arr_14 [18LL] [i_7] [i_6 - 2] [i_7] [i_6]), (((/* implicit */unsigned char) arr_17 [i_6 - 1]))))), ((~(((/* implicit */int) arr_9 [i_11] [i_6]))))));
                    var_35 = ((/* implicit */long long int) arr_31 [i_6] [i_7] [i_11] [i_11]);
                    /* LoopNest 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            {
                                arr_39 [i_6 - 2] [i_6] [i_11] [i_6 - 2] [i_12 - 1] [i_11] [i_13] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_5)) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))), (((/* implicit */long long int) ((max((var_3), (((/* implicit */unsigned long long int) arr_17 [i_7])))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_6 - 1] [i_7] [i_11] [i_6] [i_13])) & (((/* implicit */int) var_4))))))))));
                                var_36 = ((/* implicit */long long int) ((max((462470895U), (((/* implicit */unsigned int) arr_31 [i_12 - 1] [i_13] [i_13] [i_12 - 1])))) | (((/* implicit */unsigned int) (-(((/* implicit */int) arr_31 [(signed char)9] [i_13] [i_12 - 1] [i_12 - 1])))))));
                            }
                        } 
                    } 
                }
                var_37 = 9223372036854775807LL;
            }
        } 
    } 
}
