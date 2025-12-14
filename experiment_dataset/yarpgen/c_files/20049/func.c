/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20049
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (+(((((/* implicit */_Bool) ((short) (unsigned char)48))) ? (arr_3 [i_0] [i_0] [i_1 - 3]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))))))))));
                var_12 = ((/* implicit */long long int) min((var_12), (((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1]))) - (max((((/* implicit */long long int) arr_2 [i_0])), (arr_0 [i_0]))))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)217)) + (((/* implicit */int) (unsigned char)217)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
    {
        arr_6 [i_2] = ((/* implicit */long long int) ((unsigned int) max((arr_0 [i_2]), (((/* implicit */long long int) 4294967295U)))));
        var_13 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) arr_2 [i_2])) == (((/* implicit */int) arr_2 [i_2])))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_3 [i_2] [i_2] [i_2]))) / (((/* implicit */int) max((((/* implicit */short) (unsigned char)225)), ((short)0))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 4; i_4 < 11; i_4 += 4) 
        {
            arr_14 [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((long long int) (unsigned char)144));
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                var_15 *= ((/* implicit */short) (+((~(var_7)))));
                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_4 + 3]))));
                var_17 = ((/* implicit */long long int) min((var_17), (((((((/* implicit */long long int) ((/* implicit */int) var_6))) & (arr_0 [i_4]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_8 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))))))))));
            }
            for (long long int i_6 = 2; i_6 < 14; i_6 += 4) 
            {
                /* LoopSeq 3 */
                for (signed char i_7 = 2; i_7 < 12; i_7 += 3) 
                {
                    var_18 ^= ((/* implicit */_Bool) ((long long int) arr_1 [i_4 + 2]));
                    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-1))));
                }
                for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    var_20 += ((/* implicit */unsigned int) ((((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_3))))) > (arr_18 [i_3])));
                    var_21 = ((long long int) arr_26 [i_4] [i_4 + 1] [i_6] [i_8] [i_6 - 1] [i_6]);
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_29 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) var_7);
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        var_22 = ((/* implicit */short) arr_25 [i_9]);
                        var_23 *= ((/* implicit */_Bool) -2422118248385980993LL);
                        var_24 &= ((_Bool) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3])))));
                    }
                    for (long long int i_11 = 2; i_11 < 13; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_10 [i_6 + 1] [i_4 - 3])) <= (arr_15 [i_6 - 2] [i_4 - 2] [i_6] [i_11 - 2])));
                        arr_35 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_26 [i_3] [i_4] [i_6] [i_4] [i_9] [i_11]))) / (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (var_1))))));
                        var_26 = ((/* implicit */unsigned int) (-((+(arr_15 [i_3] [i_3] [i_3] [i_3])))));
                    }
                    var_27 = ((/* implicit */signed char) arr_2 [i_3]);
                }
                /* LoopSeq 4 */
                for (unsigned char i_12 = 2; i_12 < 12; i_12 += 4) 
                {
                    var_28 = ((/* implicit */_Bool) ((short) (-(arr_8 [i_3]))));
                    arr_39 [i_3] [i_4] [i_6] [i_12] = ((/* implicit */signed char) arr_22 [i_6 - 2]);
                    var_29 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_33 [i_3] [i_4 - 3] [i_6 - 1] [i_12] [i_4] [i_12] [i_12])) + (2147483647))) << (((((((/* implicit */int) arr_33 [i_3] [i_3] [i_3] [i_4 + 2] [i_6 - 2] [i_12] [i_12])) + (26836))) - (24)))));
                    var_30 = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_4 + 1] [i_4 + 3] [i_6 - 1] [i_3] [i_12 - 1] [i_12 + 3])) != (((/* implicit */int) arr_26 [i_4 - 3] [i_4 + 2] [i_6 - 2] [i_12] [i_12 + 3] [i_12 + 3]))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    arr_42 [i_3] [i_4] [i_6] [i_3] [i_6] = ((/* implicit */short) ((arr_8 [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4 - 3])))));
                    var_31 &= ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)207)))) * (((/* implicit */int) ((2993870137U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))))))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_4 + 1] [i_6] [i_6 - 1])) ? ((+(((/* implicit */int) (signed char)-10)))) : (((/* implicit */int) var_3)))))));
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_4 + 2] [i_14] [i_14] [i_14])) + (((/* implicit */int) arr_28 [i_4] [i_4 + 3] [i_4] [i_4])))))));
                    var_34 &= ((long long int) arr_27 [i_3] [i_3] [i_4] [i_4] [i_6] [i_14]);
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 15; i_15 += 1) 
                    {
                        var_35 ^= ((/* implicit */short) arr_26 [i_3] [i_4] [i_4] [i_6] [i_14] [i_15]);
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2422118248385980999LL)) ? (((/* implicit */int) arr_33 [i_15] [i_14] [i_6] [i_4] [i_4] [i_3] [i_3])) : (((/* implicit */int) arr_28 [i_3] [i_3] [i_3] [i_3]))))) ? (arr_31 [i_4 - 2]) : (((arr_10 [i_15] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                        arr_48 [i_15] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) / (arr_12 [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_44 [i_14] [i_15])) + (((/* implicit */int) arr_19 [i_14]))))) : (9223372036854775807LL)));
                    }
                }
                for (long long int i_16 = 0; i_16 < 15; i_16 += 3) 
                {
                    arr_51 [i_3] [i_4] [i_6] [i_16] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_47 [i_16] [i_16] [i_6] [i_4] [i_3])) > (((/* implicit */int) arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))) + (((/* implicit */int) ((unsigned char) var_4)))));
                    var_37 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((unsigned char) -5987003206326712195LL)))));
                    var_38 = ((/* implicit */unsigned int) ((short) arr_30 [i_3] [i_4] [i_4] [i_4 + 4] [i_16] [i_16] [i_16]));
                }
            }
        }
        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)225)) > (((/* implicit */int) (signed char)-10))))))))));
        var_40 = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_4 [i_3])))));
    }
}
