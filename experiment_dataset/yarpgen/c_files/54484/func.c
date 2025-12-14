/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54484
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
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((var_1) ? (((var_7) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_11))))), (var_5)));
    var_16 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))) : (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32542)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)122)) < (((/* implicit */int) (signed char)-118))))) / (((/* implicit */int) min((((/* implicit */short) min((arr_0 [i_0]), (arr_0 [i_0])))), (arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)511)) == (((/* implicit */int) arr_4 [i_1] [i_0]))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)-1);
            var_18 = ((((/* implicit */int) (unsigned char)122)) | (((/* implicit */int) (short)(-32767 - 1))));
            arr_7 [(short)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_2 [(_Bool)1] [i_1])))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) 18446744073709551611ULL))))))) : (((/* implicit */int) arr_1 [(unsigned char)11] [17U]))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 2) 
    {
        arr_12 [i_2] &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_11 [i_2]) || (((/* implicit */_Bool) arr_9 [3LL])))))));
        var_19 += ((/* implicit */unsigned int) arr_9 [i_2 - 4]);
        /* LoopSeq 3 */
        for (long long int i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            arr_17 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) arr_8 [i_3 + 1] [i_3 + 1]));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 24; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_2] [i_3 + 1] [i_4] [i_4])) || (((/* implicit */_Bool) arr_8 [i_2 - 1] [i_5]))));
                            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 2] [i_4]))));
                            arr_26 [i_4] [i_4 + 1] [i_6 - 1] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_22 [i_4] [i_5] [i_4] [i_4])) : (((/* implicit */int) arr_15 [(unsigned short)2] [i_2]))))));
                        }
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(arr_20 [i_2 + 1] [i_2] [18ULL]))))));
                    }
                } 
            } 
        }
        for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    arr_34 [(unsigned short)17] [i_2 - 4] [i_7] [i_8] [i_7] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (short)13950)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2])))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13950))) : (1019357430U)))));
                    var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_2] [i_2 - 3] [i_2 - 4] [i_2] [i_2 - 4])) ? (((/* implicit */int) arr_24 [i_2 - 4] [i_2 - 2] [i_9] [i_9] [i_2 - 4] [i_2 - 4])) : (((/* implicit */int) arr_24 [i_2 - 1] [i_2 + 1] [i_7] [i_7] [i_2 - 1] [i_2 - 2]))));
                }
                arr_35 [i_2 - 4] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_29 [i_7] [i_7]))))) : (arr_30 [i_2 - 4] [(_Bool)0] [i_2 - 3])));
                var_24 = ((/* implicit */int) arr_11 [i_2]);
                arr_36 [i_8] [4] [i_7] [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_27 [9])) ? (((/* implicit */int) arr_24 [i_2] [2] [i_8] [i_8] [i_7] [i_8])) : (((/* implicit */int) var_8))))));
            }
            arr_37 [i_7] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)101)) ? (((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_2] [(unsigned char)22] [(short)10])) ? (arr_21 [i_2] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_2 + 1] [i_2 - 3] [i_2 - 3] [i_7])))));
            arr_38 [i_7] [i_2] = ((/* implicit */short) arr_28 [i_2] [i_7]);
        }
        for (int i_10 = 3; i_10 < 22; i_10 += 4) 
        {
            arr_41 [i_2 - 2] [15] = ((/* implicit */unsigned short) arr_39 [i_2 - 1] [i_10 - 1] [i_2]);
            var_25 &= ((/* implicit */unsigned short) ((arr_39 [i_2] [i_10 + 1] [i_10 + 3]) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [(short)9] [i_10] [i_10])) - (((/* implicit */int) (_Bool)0)))))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_2 - 1] [i_10 + 3] [i_10 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [(short)23])) ? (2995401989U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_10 - 3])))))) : (arr_21 [i_2 + 1] [i_2] [4U] [i_10])));
        }
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2 - 4] [i_2 - 4])) ? (((/* implicit */int) arr_18 [i_2] [i_2 - 4] [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_2]))));
    }
}
