/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3947
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (var_14)))) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
        var_17 = ((/* implicit */unsigned short) ((signed char) -8902177906261989111LL));
        arr_3 [i_0] = ((/* implicit */_Bool) 6952202485295474485ULL);
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (short)-16172)) > (((/* implicit */int) (short)(-32767 - 1)))))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_9 [i_1] [i_1] [i_2] = ((signed char) var_8);
            /* LoopSeq 1 */
            for (unsigned int i_3 = 3; i_3 < 7; i_3 += 3) 
            {
                arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) 0ULL))));
                    /* LoopSeq 1 */
                    for (int i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        arr_18 [i_1] [i_3] = ((/* implicit */short) arr_14 [i_1] [i_2] [i_3 - 3] [i_1] [i_3 - 3]);
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_17 [(short)3] [i_2] [i_2] [i_2] [9U]) : (((/* implicit */int) var_9))))) ? (((((/* implicit */unsigned long long int) arr_15 [i_1] [i_2] [i_3 + 4] [i_3] [i_5] [i_5])) | (arr_5 [(_Bool)1]))) : (((/* implicit */unsigned long long int) (+(var_10))))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                    var_22 *= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)4390))));
                    arr_19 [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -1)))) : (arr_10 [i_3 + 3] [i_3 + 1] [i_3 + 3] [i_3 + 1])));
                }
                arr_20 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((unsigned int) (-(arr_10 [i_3] [i_2] [3U] [(unsigned char)10]))));
            }
        }
        for (signed char i_6 = 3; i_6 < 10; i_6 += 2) 
        {
            var_23 ^= ((arr_10 [i_6 - 2] [i_6 + 1] [i_6 - 1] [i_6 - 2]) >= (arr_10 [i_6 - 2] [i_6 + 1] [i_6 - 3] [i_6 + 1]));
            var_24 = ((/* implicit */unsigned int) (unsigned char)125);
            var_25 = ((/* implicit */_Bool) arr_0 [i_6 - 3]);
        }
        for (unsigned short i_7 = 2; i_7 < 7; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 10; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    {
                        var_26 = ((/* implicit */long long int) ((unsigned char) (unsigned char)123));
                        arr_31 [i_1] [i_7] [i_1] [i_9] [i_9] = (-(((/* implicit */int) (short)16794)));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)85))))) : (arr_10 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8])));
                    }
                } 
            } 
            arr_32 [i_1] &= ((/* implicit */_Bool) arr_25 [i_7 + 3] [i_7 + 4] [i_7 - 1]);
        }
        var_28 = ((/* implicit */unsigned long long int) (_Bool)0);
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                {
                    var_29 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)26226))));
                    var_30 = ((((unsigned long long int) -304326053)) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))));
                    arr_40 [4ULL] [i_11] = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) arr_11 [(unsigned short)5] [(unsigned short)5] [i_1] [i_1]);
    }
    for (short i_12 = 0; i_12 < 15; i_12 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_13 = 1; i_13 < 13; i_13 += 1) 
        {
            for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) 
            {
                {
                    var_32 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((-15) + (2147483647))) >> (((2147483647) - (2147483632))))) : (((/* implicit */int) var_12)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        arr_50 [i_13] [i_13 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15)) ? (1077980776U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                        arr_51 [i_12] [i_13 + 2] [i_14] [i_13] = ((/* implicit */short) 0);
                    }
                    arr_52 [i_13] = 5157578937411983700ULL;
                }
            } 
        } 
        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned long long int) arr_48 [14U] [i_12] [i_12] [i_12])) : ((~((+(1956320817302347086ULL)))))));
    }
    var_34 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(var_11)))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) var_3))));
}
