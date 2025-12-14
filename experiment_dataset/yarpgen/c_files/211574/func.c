/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211574
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
    var_17 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) max((var_7), (var_1))))) + (-5006734996495930280LL))) + (9223372036854775807LL))) >> (((/* implicit */int) var_0))));
    var_18 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))));
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */signed char) (-((+(((/* implicit */int) var_4))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((arr_0 [17LL] [13ULL]) / (min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [(unsigned char)10]))))), (arr_7 [i_0] [i_0] [i_2]))))))));
                    var_21 = ((/* implicit */signed char) (~(((arr_1 [13LL]) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_1])) : (arr_2 [i_0]))) : ((-(((/* implicit */int) var_7))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (signed char i_3 = 3; i_3 < 22; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            {
                arr_14 [i_3 - 2] = ((/* implicit */signed char) ((var_0) ? (((/* implicit */long long int) (+((-(((/* implicit */int) var_4))))))) : (max((5006734996495930279LL), (((/* implicit */long long int) ((5006734996495930273LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [17ULL]))))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 3; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [(_Bool)1] [i_5] [(_Bool)1])) : (((/* implicit */int) var_14))))) ? (((var_0) ? (arr_17 [i_3] [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) max((arr_11 [i_3]), (((/* implicit */int) var_13)))))))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (-((~(((/* implicit */int) arr_13 [i_3 + 1] [i_5 + 1])))))))));
                            var_25 += ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_3] [i_5]))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) arr_17 [i_3] [i_3] [(short)0])) : (arr_10 [3U])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5 - 1] [i_3 + 1] [i_5 - 3] [i_3 - 3] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -5006734996495930274LL)))))) : (arr_17 [i_3] [i_4] [i_6])))) : (var_9)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                arr_28 [i_3] [i_3] [i_7 + 1] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_3 - 3] [i_4] [i_7] [i_8] [i_9]))));
                                var_26 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_3 - 2])) ? (((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) var_16))))) ? ((~(((/* implicit */int) arr_21 [i_3] [i_4] [i_8])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_16))))))));
                                var_27 = ((/* implicit */unsigned char) arr_26 [i_3] [i_4] [i_7] [i_8] [i_7] [i_8]);
                                var_28 ^= ((/* implicit */short) min((min((arr_23 [i_7]), (((/* implicit */long long int) arr_12 [i_4] [i_4] [i_9])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_17 [i_3] [i_4] [i_9])))) ? (((((/* implicit */int) arr_27 [i_7])) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_13), (arr_19 [(_Bool)1] [(_Bool)1] [i_9] [i_9] [(unsigned char)5])))))))));
                            }
                        } 
                    } 
                } 
                var_29 += ((/* implicit */signed char) arr_24 [i_3]);
                /* LoopSeq 2 */
                for (long long int i_10 = 1; i_10 < 24; i_10 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            {
                                var_30 = 5006734996495930273LL;
                                arr_38 [(signed char)5] [(unsigned char)1] [21ULL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1056964608)) ? (arr_10 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_3])))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_14)) != (((/* implicit */int) arr_27 [i_3 - 3])))));
                }
                for (long long int i_13 = 1; i_13 < 24; i_13 += 3) /* same iter space */
                {
                    arr_42 [i_3] = ((/* implicit */signed char) arr_19 [i_3] [i_4] [i_3] [i_3] [i_4]);
                    var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_33 [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 + 1])) ? (((/* implicit */int) arr_31 [i_3] [i_3 + 1] [i_13] [i_13 - 1])) : (((/* implicit */int) arr_31 [i_3] [i_3 - 3] [i_13] [i_13 + 1])))) << ((((-(((/* implicit */int) var_6)))) << ((((-(((/* implicit */int) var_14)))) - (72)))))));
                    var_33 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_14)), (((var_6) ? (((/* implicit */long long int) (+(3832145117U)))) : ((-(arr_10 [i_3])))))));
                }
            }
        } 
    } 
}
