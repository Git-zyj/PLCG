/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33075
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
    var_17 -= ((/* implicit */int) ((8505518431352698424LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
    var_18 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_0) | (((/* implicit */int) var_6))))) == (var_9)))) >> (((var_7) - (740918235)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_15)) ? (arr_2 [i_0]) : (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))))))));
        var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)7))) : (((((/* implicit */_Bool) (unsigned char)20)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) var_14))))))));
    }
    for (long long int i_1 = 4; i_1 < 9; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            arr_9 [i_1 + 2] = ((/* implicit */long long int) var_1);
            arr_10 [i_1] [i_1 - 4] [i_1] = ((/* implicit */short) max((var_10), ((((+(((/* implicit */int) arr_4 [i_1])))) & (((/* implicit */int) ((4294967295U) >= (4294967271U))))))));
            arr_11 [i_1] [i_2] = ((/* implicit */long long int) var_2);
        }
        for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) /* same iter space */
        {
            var_21 = ((((/* implicit */_Bool) max((arr_12 [i_3 + 1] [i_3 - 2] [i_3 - 1]), (arr_7 [i_3 + 1] [i_3 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_3 [i_3 + 1] [i_3 - 2])))))) : (arr_7 [i_3 + 1] [i_3 - 2]));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3 - 1]))) : (-12LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */int) var_1)) <= (var_0))))))) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24311))) : (arr_13 [i_1] [i_1] [i_1]))), (var_12))) : (arr_13 [i_3] [i_3] [i_3])));
            arr_14 [i_1] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_6)), (arr_12 [i_1 + 4] [i_3] [i_3 - 1]))), (((/* implicit */unsigned long long int) (-(4294967275U))))));
        }
        for (unsigned int i_4 = 2; i_4 < 12; i_4 += 4) /* same iter space */
        {
            arr_18 [i_1] = ((/* implicit */unsigned char) 3443068733U);
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (unsigned char i_7 = 1; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) min(((unsigned char)251), (((/* implicit */unsigned char) (signed char)112))));
                            var_24 = ((/* implicit */unsigned short) arr_28 [i_1 + 4] [i_4 - 2] [i_5] [i_6] [i_6] [i_7 - 1]);
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 4] [i_4] [i_5])) ? (arr_8 [i_1 + 4] [i_1 + 4] [i_1 + 4]) : (arr_8 [i_1 + 4] [i_4 - 2] [i_1])))) ? (max((arr_8 [i_1 + 4] [i_1 + 4] [i_5]), (((/* implicit */unsigned long long int) var_15)))) : ((-(arr_8 [i_1 + 4] [i_5] [i_5])))));
            }
            /* vectorizable */
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
            {
                var_26 -= ((/* implicit */unsigned char) var_1);
                arr_31 [i_1] [i_1] [i_4] [i_8] = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned int i_9 = 1; i_9 < 12; i_9 += 1) 
                {
                    for (long long int i_10 = 1; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_27 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_35 [i_10] [i_10] [i_10] [i_9] [i_4] [i_1] [i_8]) : (((/* implicit */int) (unsigned short)24314))))) ? (((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) : (12381038599859206518ULL))) : (((/* implicit */unsigned long long int) var_0)));
                            var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
                        }
                    } 
                } 
                arr_37 [i_1] [i_4] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1])) ? (((/* implicit */unsigned long long int) 4194303U)) : (var_9)));
            }
        }
        arr_38 [i_1] = ((/* implicit */_Bool) var_11);
        var_29 ^= (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_10) / (var_7)))), (((((/* implicit */_Bool) 848603679U)) ? (var_12) : (var_12)))))));
    }
    /* vectorizable */
    for (short i_11 = 1; i_11 < 12; i_11 += 4) 
    {
        arr_42 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_12 [i_11] [i_11] [i_11]) + (((/* implicit */unsigned long long int) 134217727))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_11] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 + 1])))));
        var_30 = arr_4 [i_11];
        arr_43 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 - 1])) || (((/* implicit */_Bool) var_12))));
        var_31 &= ((((/* implicit */_Bool) var_14)) ? (arr_6 [i_11 - 1]) : (arr_6 [i_11 - 1]));
    }
    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned int) var_5))));
}
