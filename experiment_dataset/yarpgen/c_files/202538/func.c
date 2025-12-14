/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202538
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
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) 1921016870U))));
                arr_7 [i_0 - 1] [i_0 - 1] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2373950426U))))), (min((var_1), (var_1)))))) : (((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [2ULL]))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) min((2147483647U), (((/* implicit */unsigned int) max((arr_0 [i_3 - 2] [i_0 + 1]), (((/* implicit */short) (signed char)19)))))));
                            arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) (+(var_11)));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) 2082680826U)) ? (((/* implicit */int) arr_3 [i_3] [i_3])) : (((/* implicit */int) (unsigned char)80)))), ((-(((/* implicit */int) arr_9 [13] [i_2] [(unsigned short)7])))))) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_0] [i_0] [(unsigned char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56)))))) || (((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)7] [i_0 - 1] [(unsigned short)7] [i_3 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 2; i_4 < 11; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 12; i_7 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        var_17 = ((/* implicit */unsigned long long int) ((arr_8 [i_4] [i_4 - 2] [i_7 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_18 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)80)))))));
                        var_19 *= ((/* implicit */int) (!(arr_21 [i_7] [i_6] [i_6] [(unsigned char)2])));
                        arr_26 [i_4] [2U] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(2373950425U)));
                    }
                    for (short i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        arr_29 [i_4] [(short)10] [i_6] [i_8] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_4 - 1] [i_4 - 2])) ? (((/* implicit */int) arr_0 [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) (_Bool)1))))));
                        var_20 *= ((/* implicit */long long int) min((min((var_11), (2373950416U))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 1921016870U)))))))));
                        var_21 = ((/* implicit */signed char) arr_6 [(_Bool)1]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        arr_34 [i_4 + 2] [i_4] [i_6] = ((/* implicit */long long int) max(((-(12288U))), (((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)33236)))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_10 = 2; i_10 < 11; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) (-(8589934591ULL)));
                            arr_38 [i_4] [i_5] [i_6] [i_4] [i_4] = ((/* implicit */_Bool) (-(var_3)));
                            var_23 = ((/* implicit */int) min((var_23), ((-(((/* implicit */int) var_0))))));
                            var_24 += ((/* implicit */unsigned short) 1921016870U);
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 - 2])) || (((/* implicit */_Bool) arr_30 [i_4 - 1] [i_4 - 2] [i_4] [i_4 - 1])))))));
                            arr_41 [i_4] [i_5] [i_6] [i_9] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_4] [i_5])) ? (8388096) : ((-(((/* implicit */int) (_Bool)1))))));
                        }
                        for (short i_12 = 1; i_12 < 9; i_12 += 1) 
                        {
                            arr_44 [i_4 - 1] [i_5] [i_4] [i_9] [i_9] [i_12] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), ((+(max((((/* implicit */unsigned long long int) (unsigned short)64512)), (17165880701263696185ULL)))))));
                            arr_45 [i_4] [i_4] [i_6] [i_9] [i_4] |= ((/* implicit */_Bool) min((((/* implicit */int) max((arr_6 [i_4 + 2]), (((/* implicit */unsigned char) arr_23 [i_4] [i_4 + 1] [i_4] [9ULL] [i_4 - 1] [i_4 + 1]))))), ((~(((/* implicit */int) (_Bool)1))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) arr_28 [i_4] [i_5] [i_9] [i_5] [i_13] [i_6]);
                            var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-37)) >= (((/* implicit */int) var_1)))))));
                            arr_48 [i_13] [i_4] [i_9] [i_9] [i_6] [i_4] [i_4] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4] [i_5] [i_6] [i_9] [i_13] [i_13]))) : (9522883555240221772ULL)))));
                        }
                        arr_49 [i_5] [i_5] [i_9] [i_4] = ((/* implicit */unsigned char) min((max((arr_36 [i_4 - 2] [i_9] [i_4] [i_4] [i_6]), (arr_36 [i_4 + 1] [i_9] [i_6] [i_4] [i_5]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_43 [i_4] [i_4] [i_4] [3LL] [i_4] [i_4] [i_4]), ((unsigned short)65516)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 3; i_14 < 10; i_14 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (~(arr_39 [i_4] [i_6] [i_5] [i_4] [i_5] [(unsigned char)6] [i_4]))))));
                        arr_53 [i_4] [i_6] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_14 - 3] [i_14 + 3] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) 854363538U)) : (arr_11 [i_14 + 1] [i_5] [i_6] [i_6])));
                        var_29 = ((/* implicit */short) (_Bool)1);
                        var_30 = ((/* implicit */unsigned char) arr_21 [i_14 - 1] [i_4] [i_4] [i_4 - 1]);
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(901568031822714881LL)))) ? (((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 2] [i_14 + 3])) : ((~(var_3)))));
                    }
                }
            } 
        } 
    } 
}
