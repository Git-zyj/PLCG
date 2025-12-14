/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228718
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 = arr_3 [i_0] [i_0];
                var_21 = (unsigned char)34;
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_1])) & (((/* implicit */int) (unsigned short)33419))))) ? (((arr_5 [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) arr_2 [i_1] [i_1])))) : (((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))) + (((/* implicit */int) (unsigned char)188))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (((!(arr_6 [i_0] [i_0] [i_2]))) || (((/* implicit */_Bool) arr_3 [i_1 + 1] [i_0 - 1]))))) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-22541))) >= (4227858432LL)))), (arr_4 [i_2])))))))));
                    var_24 = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1]);
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)188)) ? ((((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)43363)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) (unsigned char)42)))) : (((/* implicit */int) (short)24191)))) : (((((((/* implicit */int) arr_4 [i_1])) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) (unsigned short)39077)), (16491404033220653546ULL))) - (16491404033220653521ULL)))))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 21; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 22; i_5 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_4] [i_4] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (1065353216) : (((/* implicit */int) (short)22526))))) ? (((((/* implicit */int) arr_13 [i_1] [i_3] [i_3])) << (((arr_0 [i_1] [i_0]) - (4265016470U))))) : (((/* implicit */int) arr_8 [i_0 - 1] [i_1]))));
                                var_26 = ((/* implicit */int) arr_6 [i_1] [i_4] [i_1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */short) arr_3 [i_6] [i_3]);
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) arr_11 [i_0] [i_1])))) : (((/* implicit */int) (!(arr_11 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 3; i_9 < 22; i_9 += 4) 
                    {
                        for (short i_10 = 4; i_10 < 21; i_10 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) arr_28 [i_0 - 1] [i_1 + 2] [i_10 - 1]);
                                var_30 *= ((/* implicit */_Bool) 6637496870395598936ULL);
                                arr_30 [(unsigned short)0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((((_Bool)1) ? (338180742U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_10] [12ULL] [i_0] [12ULL] [i_0])))))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_29 [i_0] [i_0] [i_0] [i_0]))), (3956786553U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned char)14] [i_1] [i_9])))));
                                var_31 = ((((/* implicit */_Bool) var_10)) || (arr_11 [i_9 - 2] [i_1]));
                                arr_31 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)148)) - (((((arr_10 [i_10] [i_1] [i_8] [i_1] [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_9])))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_9] [i_8] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)7))))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned char) arr_21 [i_8] [i_1] [i_0]);
                    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */_Bool) 2147483633)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (338180733U))))));
                    var_34 += ((/* implicit */unsigned char) (_Bool)1);
                }
                /* LoopNest 2 */
                for (short i_11 = 4; i_11 < 22; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_35 -= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_11] [i_12])) ? (arr_9 [i_11] [i_11] [i_11]) : (((/* implicit */int) arr_28 [i_0] [i_1] [i_11])))));
                            var_36 = ((/* implicit */short) max((var_36), ((short)-24191)));
                        }
                    } 
                } 
                var_37 -= ((/* implicit */short) ((3956786538U) >> (((((arr_0 [i_0 - 1] [i_1 - 1]) & (arr_0 [i_0 + 1] [i_1 - 1]))) - (4265016478U)))));
            }
        } 
    } 
    var_38 = ((/* implicit */int) var_4);
}
