/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234333
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned short) (+(((int) (short)-32736))));
            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_5))));
        }
        var_13 ^= ((/* implicit */unsigned int) (unsigned char)3);
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((short) arr_1 [i_0])))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_14 [i_0] [i_2] [i_3] [i_0] [i_0] |= ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_5] [i_5] [i_4] [i_3] [i_2] [6]))) ? (((((/* implicit */_Bool) (short)7480)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) var_0))));
                            var_15 = ((/* implicit */short) (signed char)-126);
                            var_16 = ((/* implicit */signed char) var_6);
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((2147483648U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-495))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)99)) | (((/* implicit */int) var_6)))))));
                            arr_15 [i_0] [(unsigned short)12] [i_2] [i_3] [i_0] [i_5] |= arr_1 [i_3];
                        }
                    }
                } 
            } 
            var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0] [i_2])) != (((/* implicit */int) arr_10 [i_2] [i_2]))));
            var_19 *= ((/* implicit */unsigned long long int) (unsigned short)960);
        }
        for (short i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) var_10);
                            arr_25 [i_0] [i_7] [(short)12] [i_7] [i_8] [i_9] = ((unsigned char) var_5);
                        }
                        for (signed char i_10 = 2; i_10 < 15; i_10 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (arr_7 [i_0]))))));
                            arr_29 [i_0] [i_0] [(unsigned char)4] [i_0] [i_7] [(unsigned short)8] = ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_10 - 2] [i_7])) % (((/* implicit */int) var_9))));
                            arr_30 [i_7] [i_6] = ((/* implicit */unsigned char) ((unsigned int) arr_26 [i_10 - 2] [(unsigned short)6] [i_10 + 1] [(unsigned char)5] [i_10 + 1] [i_10] [i_10]));
                        }
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0)));
                    }
                } 
            } 
            arr_31 [(unsigned char)14] = arr_5 [(short)14] [i_0];
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) var_5))))) ? (-849879408) : (max((((/* implicit */int) arr_34 [i_11])), (((((/* implicit */_Bool) 2065500004U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0))))))));
        arr_35 [i_11] [i_11] = ((/* implicit */unsigned int) max((((unsigned short) arr_32 [i_11])), (var_10)));
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        for (signed char i_13 = 4; i_13 < 14; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        for (short i_16 = 0; i_16 < 17; i_16 += 1) 
                        {
                            {
                                arr_48 [i_12] [i_15] = ((/* implicit */short) var_10);
                                arr_49 [i_12] [i_12] [i_15] [i_14] [i_12] [i_16] = ((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_12])) >> (((/* implicit */int) ((_Bool) ((unsigned int) arr_41 [i_14] [i_14] [i_14] [i_14]))))));
                                arr_50 [i_12] [i_12] [i_15] [i_15] [i_16] = ((/* implicit */short) arr_44 [3U] [i_13 + 1] [i_13 + 1] [3U]);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-477)) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_51 [i_12] [i_13] [i_14] = ((/* implicit */_Bool) var_1);
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55652)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))) : (max((((/* implicit */unsigned int) var_7)), (arr_39 [i_12] [i_12])))))), (((((/* implicit */_Bool) min(((unsigned char)228), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_12]))) : (min((var_0), (((/* implicit */unsigned long long int) var_6))))))))));
                }
            } 
        } 
    } 
}
