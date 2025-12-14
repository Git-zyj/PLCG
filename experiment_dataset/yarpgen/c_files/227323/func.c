/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227323
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
    var_15 ^= ((/* implicit */unsigned short) var_12);
    var_16 = ((/* implicit */short) max((((/* implicit */long long int) ((signed char) 1861443629))), (((((/* implicit */_Bool) max(((short)-2048), ((short)6115)))) ? (max((((/* implicit */long long int) var_9)), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                var_18 = ((/* implicit */_Bool) max(((unsigned char)152), (((/* implicit */unsigned char) (_Bool)1))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [1U] [i_1] [i_2 + 2])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)109)) / (((/* implicit */int) (_Bool)1))))) : (arr_4 [i_2] [9ULL] [(unsigned char)9])));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((long long int) (signed char)-113));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) var_0);
                                arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)19995))));
                                arr_16 [i_0] = ((((/* implicit */_Bool) var_13)) ? (arr_10 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_2 + 3]) : (arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_2 - 1]));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */unsigned int) ((long long int) arr_12 [i_0 - 2] [i_0 + 1]));
                }
                /* vectorizable */
                for (signed char i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    var_21 ^= ((/* implicit */int) ((arr_5 [i_0 + 1] [i_5] [i_0 - 1] [i_5 - 2]) >> (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    arr_22 [2U] [i_0] [i_5 + 2] = ((/* implicit */short) (-(arr_4 [i_5 - 2] [i_5] [(short)2])));
                    var_22 = arr_13 [i_0] [0LL] [(_Bool)1] [i_0 - 2] [(_Bool)1] [(_Bool)1];
                }
                for (int i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    arr_26 [(signed char)4] [i_1] [i_6] [i_0] = var_9;
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_7))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */short) (_Bool)1);
                                arr_34 [(short)6] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (arr_0 [i_0])))) : (((unsigned int) arr_32 [i_0] [(unsigned short)4] [(short)2] [i_7] [i_7])))));
                                arr_35 [(signed char)10] [i_0] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_30 [i_8 - 1] [(unsigned short)3] [i_0] [9U] [9U] [i_8])))));
                                var_25 ^= ((max((max((var_11), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) max(((unsigned char)107), (var_2)))))) - (max((arr_32 [i_7] [8U] [i_6 + 1] [i_7] [i_8 - 1]), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])))));
                            }
                        } 
                    } 
                    arr_36 [i_0] [i_0] = (~(((/* implicit */int) arr_31 [i_1] [i_0])));
                    var_26 = (-((~((-(((/* implicit */int) (signed char)1)))))));
                }
            }
        } 
    } 
    var_27 -= ((/* implicit */unsigned char) var_5);
}
