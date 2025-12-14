/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222782
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
    var_18 ^= ((/* implicit */unsigned char) var_3);
    var_19 = (unsigned char)0;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3753185709U)) ? (arr_1 [i_0]) : (((/* implicit */int) var_16)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [7U]))) > (arr_12 [i_2 + 2] [i_2 + 3] [i_2] [i_2])));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_16 [i_2] = ((((/* implicit */_Bool) ((long long int) (unsigned char)255))) ? (arr_12 [i_2] [i_2 + 1] [i_2 + 3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3] [(_Bool)1])) || (((/* implicit */_Bool) var_15)))))));
                            arr_17 [i_0] [i_2] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) ((arr_8 [i_0] [i_2 - 1] [i_4] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11854)))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (var_3)));
                            var_23 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_2 + 2] [(unsigned char)14] [i_5 + 3] [(unsigned char)14]))));
                            arr_22 [i_2] [i_1] [i_1] [i_3] [i_5] = ((((/* implicit */_Bool) ((1674935175U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) ? ((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_2])))) : (((/* implicit */int) var_17)));
                        }
                        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_6] [i_2] [i_3] [i_2 + 4] [i_2] [i_0] = ((/* implicit */_Bool) ((int) arr_23 [i_2 - 1] [i_6 + 4] [i_2 - 1] [i_6] [i_2]));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (((+(arr_9 [(short)17] [i_1] [(short)17] [i_6]))) & (var_1))))));
                        }
                        for (unsigned char i_7 = 2; i_7 < 20; i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_7 - 2] [i_2] [i_2 + 1] [i_2] [22ULL] = ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_2 + 2] [i_2] [i_2 - 1])) << (((((/* implicit */int) arr_26 [i_2] [i_2] [i_2 + 4])) - (11884)))));
                            arr_29 [i_0] [i_2] [i_2 + 2] [5] [i_3] [i_3] [i_7 + 2] = ((/* implicit */unsigned short) (-(arr_24 [i_7] [i_3] [i_2] [i_1] [i_0])));
                            arr_30 [i_2] [i_7] [8ULL] [i_3] [i_7] = ((/* implicit */signed char) (~(((arr_24 [i_0] [i_1] [i_1] [i_3] [i_7 + 4]) >> (((var_6) + (585519078)))))));
                            var_25 = ((/* implicit */long long int) arr_7 [i_7] [(unsigned short)13] [(unsigned short)13]);
                            arr_31 [i_0] [i_0] [21U] [21U] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_2 - 1] [i_7 + 3] [i_7]))));
                        }
                        var_26 *= ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_3] [i_2] [i_2 - 1] [i_2] [i_2 + 4])) != (((/* implicit */int) var_5))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_8 = 1; i_8 < 13; i_8 += 4) 
    {
        var_27 -= ((/* implicit */int) min((((((/* implicit */_Bool) arr_32 [i_8 + 3])) ? (((/* implicit */unsigned int) var_10)) : (var_7))), (((/* implicit */unsigned int) max((arr_32 [i_8 - 1]), (arr_32 [i_8 + 1]))))));
        var_28 += ((/* implicit */signed char) arr_21 [i_8] [i_8] [16] [18ULL] [12] [i_8 - 1] [(unsigned short)2]);
        arr_35 [i_8 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_32 [i_8])), (arr_34 [(unsigned char)15] [(unsigned char)15])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)255)), (var_6)))) : (max((arr_5 [22U] [i_8 - 1]), (((/* implicit */unsigned long long int) arr_3 [i_8] [i_8] [1LL])))))) * (((/* implicit */unsigned long long int) (((-(-2825885130660944439LL))) / (((/* implicit */long long int) ((unsigned int) arr_27 [i_8] [(unsigned short)0] [(unsigned char)20] [i_8] [i_8]))))))));
        var_29 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_2 [12] [i_8 + 3])))) != (((/* implicit */int) ((unsigned short) arr_6 [i_8] [i_8 - 1] [i_8])))));
    }
    /* LoopNest 2 */
    for (short i_9 = 2; i_9 < 10; i_9 += 4) 
    {
        for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            {
                arr_42 [i_9] [i_10] [i_10] = ((/* implicit */int) (-(min((((/* implicit */unsigned int) (+(var_10)))), (((((/* implicit */_Bool) arr_18 [i_9] [i_9] [i_9 - 2] [i_9] [i_9 - 2])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                var_30 -= ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)252)));
            }
        } 
    } 
}
