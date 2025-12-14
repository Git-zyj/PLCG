/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194289
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-(((/* implicit */int) (signed char)31)))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)23)) * (((/* implicit */int) (unsigned short)14))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 4; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) (unsigned short)65524)) - (65512)))))) >= ((~(-4285654183350582031LL)))))) & (((/* implicit */int) (unsigned char)255))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) arr_4 [i_0 - 1])))))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 1] [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4])) << (((((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_2 - 1] [i_3] [i_4] [i_4] [i_3 - 1])) - (94)))))) ? ((~(((/* implicit */int) (unsigned short)65522)))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                                var_20 = ((/* implicit */long long int) var_15);
                                arr_12 [i_1] [i_1 - 3] [i_2] [i_2] [i_4 + 1] = ((/* implicit */unsigned short) arr_0 [i_0]);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (((+(1067518727U))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65522))))))));
            }
        } 
    } 
    var_22 &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) (unsigned short)13)))))))) == (((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (_Bool)0))))) << (((((((/* implicit */_Bool) (unsigned short)65522)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)95))))) + (16LL)))))));
    /* LoopSeq 3 */
    for (unsigned short i_5 = 4; i_5 < 12; i_5 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) ^ (4803600200569500773LL)))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) (unsigned short)16597)) : (((/* implicit */int) arr_4 [i_5 + 1])))) > (((/* implicit */int) arr_1 [i_5 + 1] [i_5 + 1])))) && (((/* implicit */_Bool) max((arr_3 [i_5]), ((signed char)-59)))))))));
        /* LoopNest 3 */
        for (short i_6 = 4; i_6 < 12; i_6 += 2) 
        {
            for (short i_7 = 2; i_7 < 12; i_7 += 2) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_23 [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_15 [i_7 - 2] [i_7 - 2] [i_7 - 2])) >> (((((/* implicit */int) arr_15 [i_7 - 2] [i_7 - 2] [i_7 - 1])) - (20589))))) == (((/* implicit */int) arr_7 [i_5] [i_5] [i_7]))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (+((((~(((/* implicit */int) (short)32767)))) & (((/* implicit */int) arr_15 [i_7 + 1] [i_6 - 4] [i_5 - 3])))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_16 [i_5 - 1])) * (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_21 [i_5] [i_5])) : (((/* implicit */int) arr_10 [i_5] [i_5 - 1])))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)62082)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5 - 3]))))))))));
    }
    for (signed char i_9 = 2; i_9 < 18; i_9 += 3) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((((/* implicit */_Bool) arr_5 [i_9])) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (unsigned short)6297)))) : (((((/* implicit */int) arr_8 [i_9 - 1] [i_9] [i_9] [i_9])) << (((((/* implicit */int) (unsigned short)65522)) - (65500)))))))) | (((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_9] [i_9] [i_9])) : (((/* implicit */int) var_4)))))));
        arr_26 [i_9] = arr_0 [i_9];
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (~(((((/* implicit */int) max((arr_5 [i_9]), (arr_7 [i_9] [i_9] [i_9])))) >> (((((arr_0 [i_9]) >> (((((/* implicit */int) arr_10 [i_9 + 2] [i_9])) - (3640))))) - (35551765987760237ULL))))))))));
    }
    for (unsigned char i_10 = 3; i_10 < 8; i_10 += 2) 
    {
        arr_29 [i_10] = ((/* implicit */_Bool) arr_3 [i_10 + 2]);
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 8; i_11 += 2) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_35 [i_10] [i_10] [i_11] [i_12 - 1] = ((/* implicit */unsigned int) arr_3 [i_12]);
                    var_29 = arr_1 [i_11] [i_11];
                    arr_36 [i_10] [i_10] [i_12 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_10 + 1] [i_11 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_10] [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_11))) > (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_11] [i_11] [i_12 - 1]))))))) : (max((((var_10) << (((((/* implicit */int) arr_5 [i_10])) - (194))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_10 + 1] [i_11] [i_12])) >> (((((/* implicit */int) (short)32767)) - (32759))))))))));
                    var_30 = min((((/* implicit */short) (signed char)-59)), ((short)-32767));
                }
            } 
        } 
        arr_37 [i_10] = (+(((/* implicit */int) (unsigned short)15)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_38 [i_13 - 1] [i_13] [i_10 + 1]))));
            arr_42 [i_10] [i_13 - 1] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_10 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_10] [i_13 - 1] [i_10] [i_10] [i_13] [i_10]))) : (((((/* implicit */_Bool) arr_13 [i_10] [i_13 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))) : (arr_24 [(unsigned short)0] [(unsigned short)0])))));
            /* LoopNest 2 */
            for (unsigned int i_14 = 1; i_14 < 8; i_14 += 1) 
            {
                for (unsigned short i_15 = 3; i_15 < 8; i_15 += 3) 
                {
                    {
                        arr_49 [i_10] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_10] [i_13] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27))) : (arr_24 [(short)16] [i_13])))) || ((_Bool)1)));
                        arr_50 [i_10] [i_13] [i_14] [i_15 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_41 [i_15 - 3] [i_15])) : (((/* implicit */int) (_Bool)1))))) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57890)) / (((/* implicit */int) (short)-43)))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_16 = 1; i_16 < 8; i_16 += 2) 
        {
            var_32 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_10] [i_16] [i_16 + 1])) ? (((/* implicit */int) arr_46 [i_16])) : (((((/* implicit */int) var_3)) ^ (((/* implicit */int) (short)18981))))));
            /* LoopNest 2 */
            for (unsigned short i_17 = 2; i_17 < 9; i_17 += 2) 
            {
                for (unsigned short i_18 = 1; i_18 < 9; i_18 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_19 = 3; i_19 < 9; i_19 += 3) 
                        {
                            arr_62 [i_10 - 1] [i_16] [i_19] [i_19 - 3] [i_19] = ((/* implicit */unsigned long long int) var_8);
                            var_33 = ((/* implicit */signed char) ((((/* implicit */int) (short)-11721)) < (((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (unsigned char)4))))));
                            arr_63 [i_19] = ((/* implicit */unsigned short) ((int) arr_14 [i_10] [i_10]));
                        }
                        var_34 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_10 - 1] [i_16 - 1] [i_17] [i_18]))))) ? (((((/* implicit */_Bool) arr_8 [i_10] [i_16 - 1] [i_17] [i_18])) ? (3094721074153580636LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_10] [i_10] [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-27)) && (((/* implicit */_Bool) var_2)))))))));
                        var_35 = ((/* implicit */unsigned short) (short)-32757);
                    }
                } 
            } 
            arr_64 [i_10] [i_16] [i_16 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1)))))));
        }
    }
}
