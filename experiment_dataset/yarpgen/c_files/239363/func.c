/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239363
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) + (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)20988)) : (((/* implicit */int) (short)32763))))) : (arr_1 [i_0]))) & (((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) (short)32763)), (arr_0 [i_0] [(unsigned char)6]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) (!((_Bool)1))))))), (((((/* implicit */_Bool) 798492818U)) ? (((12358721638152438066ULL) + (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
    }
    for (short i_1 = 4; i_1 < 19; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) <= ((~(arr_1 [i_1 - 3])))))), (((var_10) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1] [i_1 + 1]) == (arr_7 [i_1]))))) : (min((((/* implicit */long long int) var_9)), (arr_0 [(_Bool)1] [i_1]))))))))));
        var_14 = ((/* implicit */unsigned long long int) (~(((max((arr_0 [i_1 - 2] [i_1]), (((/* implicit */long long int) arr_2 [i_1])))) & (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))))));
        var_15 *= ((/* implicit */unsigned int) (+(((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2106)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1]))))) >= (((((/* implicit */int) (unsigned short)10347)) << (((((/* implicit */int) (short)32766)) - (32750)))))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (short)-32761))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((int) (unsigned short)10342));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (+(arr_1 [i_2]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
    {
        arr_14 [i_3 - 1] [i_3 + 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)55214))));
        var_19 = ((/* implicit */unsigned short) (+(3496474491U)));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
        {
            arr_19 [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0))));
            arr_20 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) var_2)))));
            arr_21 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 798492812U)) ? (3496474484U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14008)))));
        }
        for (long long int i_6 = 4; i_6 < 18; i_6 += 4) 
        {
            arr_26 [i_4] [i_4] [i_6] = ((/* implicit */unsigned char) ((arr_16 [i_4] [i_6 - 4]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-32755)))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) (short)32741);
                            arr_33 [i_4] [i_7] [i_4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (short)32760))));
                            var_21 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_7] [i_7])))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_10 = 3; i_10 < 17; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                var_23 -= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [(unsigned short)3])) : (((/* implicit */int) (unsigned short)10359)))));
                var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */_Bool) var_9)) || ((!((_Bool)1)))))));
            }
            arr_38 [13LL] [i_4] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_37 [i_10 - 3] [i_10 - 2]))));
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    {
                        arr_44 [i_13] [i_4] [i_10] [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */unsigned long long int) 2147483647)) : (10750558604055594228ULL)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-9850))))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_10 - 2])))))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (-(arr_43 [i_10 - 2] [i_12] [i_13] [i_4] [i_4]))))));
                        var_27 -= ((/* implicit */short) (-(arr_22 [i_10] [i_10 - 3] [i_12])));
                        var_28 *= ((((/* implicit */_Bool) 798492804U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (798492838U));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                for (unsigned short i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    {
                        arr_50 [i_4] = ((/* implicit */long long int) arr_37 [i_4] [i_10 + 3]);
                        arr_51 [i_4] [i_4] [i_14] [i_15] [i_4] = ((/* implicit */unsigned int) var_1);
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */short) (((-(3305896016U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_4] [i_4]))))))));
    }
}
