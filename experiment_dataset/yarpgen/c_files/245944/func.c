/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245944
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
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) (signed char)117)), (2725546914U)));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (min((min((var_3), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_0 [i_0 + 3]))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                var_20 = ((/* implicit */_Bool) 8);
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 - 2] [i_2] [12])) ? (((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2] [i_2 - 1])) : (2147483647)));
            }
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                arr_16 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_4 [i_0 + 1])) <= ((~(18446744073709551615ULL)))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) | (arr_13 [i_0] [i_0 - 1] [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [(unsigned short)4] [i_2 - 2])) ? (18446744073709551615ULL) : (0ULL)))));
                arr_17 [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) (-(arr_9 [i_0] [i_0] [i_0 + 3] [i_2 + 1])));
            }
            var_23 &= ((/* implicit */long long int) var_5);
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((((arr_13 [i_0] [i_0] [i_0] [i_0 - 1]) == (((/* implicit */unsigned int) 561373897)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0])) | (134086656))))));
                            arr_25 [i_0] [i_5] [12] = ((/* implicit */unsigned long long int) (signed char)43);
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */unsigned int) ((2147483638) >> (((arr_24 [i_0 - 1] [6U] [i_0 - 1] [(short)15] [(short)15] [(short)15] [i_7]) - (61351764333921034ULL)))))) : (((arr_22 [i_0 - 1] [i_2] [i_2] [i_2]) >> (((18446744073709551615ULL) - (18446744073709551593ULL))))))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0 + 2] [i_2] [i_2 - 1] [i_2] [i_2])) ? (arr_4 [i_0 + 2]) : (((/* implicit */int) var_15))));
                            arr_26 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1])) ? (arr_23 [i_0 - 1] [i_0 - 1] [i_0] [i_2] [i_2 - 2]) : (((/* implicit */unsigned long long int) 134217600))));
                        }
                        for (int i_8 = 2; i_8 < 13; i_8 += 2) 
                        {
                            arr_30 [i_2] [i_0] [(signed char)11] = ((/* implicit */int) ((((var_4) != (((/* implicit */unsigned int) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [0] [i_5] [0]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_13 [i_2] [i_2] [i_6] [i_2])) : (0ULL)))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) -561373898))));
                        }
                        var_28 = ((/* implicit */unsigned short) ((int) var_9));
                        arr_31 [i_0] [i_0] [i_0] [(signed char)2] = ((/* implicit */short) arr_13 [i_6] [i_5] [10ULL] [i_0]);
                    }
                } 
            } 
            var_29 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1805983798))));
        }
        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_10 = 1; i_10 < 15; i_10 += 1) 
            {
                var_30 = ((((/* implicit */_Bool) arr_28 [i_0] [13ULL] [13ULL] [13ULL] [13ULL] [i_0 + 2] [i_10 - 1])) ? (((/* implicit */int) arr_28 [i_0 + 1] [i_0] [i_0] [i_0] [7] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_28 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [0] [i_0 + 2] [i_9])));
                var_31 += ((/* implicit */short) var_7);
            }
            /* LoopNest 3 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                for (int i_12 = 2; i_12 < 12; i_12 += 2) 
                {
                    for (int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        {
                            var_32 -= (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 + 3]))) == (var_17)))));
                            arr_46 [i_12] [i_12] [i_11 - 1] [i_11] [i_11 - 1] [i_12] [i_11] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) arr_4 [i_9]))))) ? (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */long long int) -660528646)) : (var_17))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_7 [14U] [i_9] [14U]))))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55676))))), (((((/* implicit */int) (unsigned short)3)) ^ (((/* implicit */int) (unsigned short)65521))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)25))))) ? (min((((/* implicit */unsigned long long int) var_7)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_9])) && (((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0]))))))))));
        }
        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            arr_49 [0] [i_0] = ((/* implicit */int) (unsigned short)8160);
            var_34 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 1754537077)) != (((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (arr_23 [i_0] [i_0] [i_0 + 3] [i_14] [i_0 + 3])))))), (arr_37 [i_0 + 1] [i_0 + 3])));
        }
        var_35 = ((/* implicit */int) ((134086653) <= (((/* implicit */int) ((((/* implicit */_Bool) min((11ULL), (((/* implicit */unsigned long long int) var_12))))) && (((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_14))))))))));
    }
    var_36 = (unsigned short)1;
}
