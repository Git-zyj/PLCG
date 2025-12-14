/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39149
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */short) min(((+(((/* implicit */int) arr_7 [1U] [(unsigned char)9] [12ULL])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)13])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_7 [8U] [(unsigned char)5] [(unsigned char)7]))))))))));
                    arr_8 [(signed char)2] [11] [(short)0] [(signed char)14] = ((/* implicit */signed char) var_5);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (short i_5 = 3; i_5 < 22; i_5 += 3) 
            {
                {
                    var_12 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [(signed char)22]))) + (max((((/* implicit */long long int) var_0)), (arr_13 [i_3] [(_Bool)1])))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned short) (short)32640)), ((unsigned short)65535))))));
                                arr_20 [2U] [(short)19] [(unsigned char)4] [(short)12] [(signed char)16] [(unsigned short)0] [(short)24] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)255))));
                                arr_21 [(unsigned short)5] [(_Bool)1] [(unsigned char)17] [24] = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_18 [2LL] [i_5 + 3] [i_5 + 3] [16LL] [(unsigned char)19] [(unsigned short)9])))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (int i_8 = 3; i_8 < 24; i_8 += 2) /* same iter space */
                    {
                        arr_25 [(unsigned short)0] [(unsigned char)8] [(unsigned char)20] = ((/* implicit */unsigned short) (((~(((((/* implicit */int) (unsigned short)65509)) % (((/* implicit */int) (short)-31912)))))) >= ((+(arr_24 [(unsigned char)22] [i_8 + 1] [(unsigned char)23] [(unsigned char)0])))));
                        arr_26 [14LL] [(unsigned char)23] [(short)23] [18U] [(_Bool)1] [(short)19] = ((/* implicit */unsigned char) min((var_9), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)26)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) arr_16 [(unsigned char)16] [(_Bool)1] [13] [15U] [(_Bool)1] [12U])))), ((-(((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1] [(unsigned char)19] [(unsigned char)4] [(unsigned char)3]))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [5ULL] [1U] [(unsigned char)18] [(_Bool)1] [(short)12] [7ULL])) ? (((/* implicit */int) arr_23 [(_Bool)1])) : (((/* implicit */int) arr_15 [11U] [(_Bool)1] [(signed char)12]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [19ULL] [9] [(unsigned char)15] [22LL] [(unsigned char)14]))))) : (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(signed char)4] [(signed char)3] [7LL])))))))));
                    }
                    for (int i_9 = 3; i_9 < 24; i_9 += 2) /* same iter space */
                    {
                        arr_29 [(signed char)23] [(short)11] [(unsigned char)16] [(short)20] [24U] [(_Bool)1] = ((/* implicit */short) var_4);
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned short) ((short) arr_15 [(unsigned char)3] [(_Bool)1] [(unsigned char)16]))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                    {
                        arr_34 [8ULL] [24LL] [(unsigned char)5] [(unsigned short)15] [23] [(unsigned char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)65531), ((unsigned short)63))))))) ? (((arr_15 [(unsigned char)19] [i_5 - 3] [23LL]) ? (((/* implicit */int) arr_15 [19ULL] [i_5 - 1] [7])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) max(((short)1), (arr_17 [(unsigned char)1] [22LL] [(unsigned short)2])))) || (((((/* implicit */_Bool) arr_9 [17])) || (var_3))))))));
                        var_16 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
                    {
                        var_17 += ((/* implicit */unsigned short) max((((7654617394907756852ULL) >> (((((/* implicit */int) (unsigned short)65527)) - (65501))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_22 [10ULL] [10ULL] [(short)23] [(unsigned char)14])))) ? (((/* implicit */int) ((unsigned char) arr_13 [(signed char)23] [(unsigned char)9]))) : (((arr_15 [(unsigned short)9] [21LL] [(unsigned char)24]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)5368)))))))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_0))));
                        arr_38 [8ULL] [(short)18] [19U] [6LL] = ((/* implicit */short) (+(((/* implicit */int) ((4290772992U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9))))))));
                        arr_39 [(signed char)15] [(unsigned char)1] [(unsigned char)8] [(unsigned char)1] = ((/* implicit */unsigned long long int) arr_22 [(short)15] [(_Bool)1] [(short)10] [(_Bool)1]);
                    }
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(short)5])) ? (((arr_14 [(unsigned char)15] [i_5 - 3] [11ULL] [(unsigned short)8]) ? (((/* implicit */int) max((arr_11 [16U]), (((/* implicit */unsigned char) arr_14 [(short)17] [(_Bool)1] [19U] [(short)7]))))) : ((-(((/* implicit */int) (short)-31938)))))) : (max((((/* implicit */int) arr_19 [i_5 - 1] [i_5 + 3] [(unsigned char)22] [i_5 - 2] [14U])), (63)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_5);
}
