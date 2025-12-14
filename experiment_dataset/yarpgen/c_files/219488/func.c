/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219488
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)1851));
                                arr_15 [i_0] [i_0] [i_1 - 2] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) (_Bool)1)));
                                arr_16 [i_0] [i_0] [i_0] [0ULL] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) max(((unsigned short)1850), (arr_4 [i_0] [i_2 + 1] [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63684))))) : (((/* implicit */int) (unsigned short)1851)))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_7 [i_0]));
                                var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)15503)) ? (((int) var_0)) : (((/* implicit */int) ((signed char) (unsigned char)208)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_5 = 1; i_5 < 6; i_5 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */int) var_1)))));
                        arr_20 [i_1] [i_2] [i_1] = ((/* implicit */int) ((unsigned short) (unsigned short)1851));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 2; i_6 < 8; i_6 += 1) 
                    {
                        arr_23 [(unsigned char)8] [i_2] [i_1] [5U] = ((/* implicit */unsigned short) ((signed char) arr_6 [i_6 - 2] [i_1 - 1] [i_1] [i_6]));
                        var_15 -= ((/* implicit */unsigned int) ((arr_5 [i_2] [i_1 - 1] [i_2 + 1] [i_2]) & (arr_5 [i_2] [i_1 + 1] [i_2 - 1] [i_6])));
                    }
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 1; i_8 < 8; i_8 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1] [i_2] [i_7] [i_8]))))), (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_25 [i_1] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))))))));
                            arr_30 [i_8 + 1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)65)), (var_3)));
                        }
                        for (unsigned int i_9 = 4; i_9 < 8; i_9 += 3) 
                        {
                            arr_33 [i_9] [i_1] [(unsigned char)7] [i_0] [i_9] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | ((-(((/* implicit */int) arr_8 [i_0] [i_1]))))));
                            arr_34 [i_0] [i_1] [i_1] [i_2 - 1] [i_7] [i_7] [i_1] = ((/* implicit */signed char) (short)-29457);
                        }
                        arr_35 [i_1] [i_7] [i_2] [i_1] = ((/* implicit */long long int) arr_18 [i_7] [i_2] [i_1 + 3] [i_0]);
                        arr_36 [i_1] [i_2] [i_2] [i_7] = ((/* implicit */short) (signed char)-87);
                        arr_37 [i_1] [i_1] = ((/* implicit */unsigned char) arr_29 [i_0] [i_1] [i_0] [i_2] [i_7] [i_7]);
                    }
                }
                for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) (((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)63679)) < (arr_18 [i_0] [i_0] [i_0] [i_0])))))) >= ((+(((/* implicit */int) arr_38 [i_1]))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_27 [i_0] [i_1] [i_10] [4U] [i_0]))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_22 [(unsigned char)6] [i_0] [i_1] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)63668))))) : (((arr_13 [8] [i_0] [i_1] [i_1] [i_10]) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1900)) ? (max((((/* implicit */unsigned int) (short)-1)), (arr_21 [i_10] [i_1]))) : (((/* implicit */unsigned int) -1982002041))))))))));
                    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_24 [i_1 + 3] [i_1 + 3] [i_1] [i_1 - 2])), (15776173331556962845ULL)))) ? (arr_24 [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)235))))));
                }
                var_21 -= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (signed char)86)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))) : (9101992665620708449ULL))))) ^ (((/* implicit */unsigned long long int) ((var_2) & ((-(arr_18 [i_0] [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_22 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5)) ? (-1741327083) : (var_7)))) ? (((/* implicit */int) min(((signed char)61), ((signed char)-1)))) : (((/* implicit */int) var_8)))))));
    var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
}
