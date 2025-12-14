/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49668
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
    var_15 = ((/* implicit */unsigned short) var_7);
    var_16 = ((/* implicit */unsigned int) var_5);
    var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)73))))) ? (((3049623768430079355ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39902))))) : (max((var_13), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)196)), (var_12))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)4])) ? (-1111781160) : (((/* implicit */int) arr_1 [(unsigned short)14]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_13)))))))));
        var_19 -= ((/* implicit */signed char) (~(max(((+(((/* implicit */int) arr_0 [i_0 - 1])))), (((/* implicit */int) arr_3 [i_0]))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [8U]))) == (9U)));
            /* LoopNest 2 */
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((int) (-(((/* implicit */int) (short)1))))))));
                        var_22 &= ((/* implicit */long long int) var_7);
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(min(((~(((/* implicit */int) (signed char)114)))), (((((/* implicit */int) arr_7 [i_6] [(unsigned short)12] [(unsigned short)12])) >> (((arr_12 [i_6] [i_6] [(unsigned short)23]) + (5027370650325373631LL))))))))))));
                            var_24 = (!(((/* implicit */_Bool) var_10)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 24; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_11 [i_9] [i_10]) + (2147483647))) >> (((arr_16 [(_Bool)1] [i_8] [i_4] [(_Bool)1]) - (6429907574086102948LL)))))) ? (((/* implicit */unsigned long long int) (~(-2106824069)))) : (((var_11) | (arr_15 [(_Bool)1] [i_9 + 1] [i_8 + 2])))));
                            var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8] [i_8]))))))));
                            var_27 = ((/* implicit */unsigned char) ((arr_12 [i_8 - 1] [i_8 + 2] [i_8 - 1]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28)))));
                            var_28 = ((((/* implicit */_Bool) arr_20 [i_9] [i_9] [i_9 - 1] [i_4] [i_9] [i_9 - 1])) && (((/* implicit */_Bool) arr_20 [i_9] [i_9 - 1] [i_9 + 1] [i_4] [i_9] [i_9 + 1])));
                            var_29 = ((/* implicit */long long int) -1111781160);
                        }
                    } 
                } 
                var_30 |= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (arr_21 [i_0] [2U]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61)))));
            }
        }
        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */long long int) 4294967287U);
            var_32 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1111781177)), (var_5)))) ? (arr_9 [i_0] [i_11]) : ((~(var_5)))))) == ((-(arr_28 [i_0] [i_0 + 2] [15U] [i_0] [i_0 + 2] [i_0 - 3] [i_0 - 1])))));
            var_33 &= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_24 [20ULL] [(unsigned short)16] [i_0 + 3] [0U]) : (arr_27 [i_11] [(unsigned short)3] [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [(unsigned char)17]))))) : (max((arr_12 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_0)))))), (9223372036854775807LL));
            var_34 ^= ((/* implicit */unsigned long long int) ((unsigned char) arr_22 [i_0 - 1] [i_0] [(unsigned char)11]));
        }
    }
    var_35 = ((/* implicit */unsigned long long int) var_4);
}
