/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40575
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) var_5);
                arr_8 [6LL] [(_Bool)0] [0LL] = ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))) & (min(((+(var_6))), (((/* implicit */unsigned long long int) var_8)))));
                arr_9 [i_1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0])))))));
                arr_10 [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) * (-354894586)))) : (var_6))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(arr_5 [i_1])))), (min((((/* implicit */int) var_0)), (354894586))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-62)) ? (354894585) : (((((/* implicit */int) (unsigned char)96)) % (((/* implicit */int) (_Bool)1)))))))))));
    var_14 ^= ((/* implicit */signed char) var_7);
    var_15 = 354894585;
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    arr_21 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)39)) & (((/* implicit */int) (signed char)-87))))), (var_6)));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_5 = 3; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */signed char) var_7);
                        arr_26 [15U] [i_5] [i_5] [i_5] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (arr_16 [i_5 + 4] [i_5 - 3] [i_5 + 4]) : (((/* implicit */int) arr_15 [i_5 - 3]))));
                    }
                    for (signed char i_6 = 3; i_6 < 13; i_6 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (min((((/* implicit */int) var_10)), (var_3))))), (((((/* implicit */_Bool) max((((/* implicit */short) arr_15 [i_6])), (var_2)))) ? (354894576) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                        var_18 -= ((/* implicit */unsigned short) min((var_4), (((/* implicit */int) min((arr_25 [i_6 + 1] [i_6 + 1] [i_4] [16ULL]), (((/* implicit */short) (!(var_1)))))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        arr_31 [8] [i_7] [i_4] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -354894586)) || (((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_9))))))));
                        arr_32 [i_7] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_0);
                    }
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_37 [i_3] [i_3] [i_3] [i_3] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_2] [i_2]))));
                            var_19 += ((/* implicit */long long int) var_8);
                        }
                        for (unsigned int i_10 = 1; i_10 < 16; i_10 += 3) 
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_2] [i_2] [(_Bool)1] [16]))))) ? (min(((-(((/* implicit */int) arr_33 [9ULL] [i_8] [i_4] [4])))), (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) (_Bool)1)))))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((2452640240U), (((/* implicit */unsigned int) (unsigned short)55766))))) ? ((~(((/* implicit */int) arr_36 [i_10 + 1] [i_10] [i_10 + 1] [12U] [(_Bool)1] [i_10] [i_4])))) : (((/* implicit */int) arr_30 [i_8] [i_10 - 1] [i_4] [i_4])))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_3) : (354894586)));
                            var_23 = ((/* implicit */unsigned char) arr_13 [i_2]);
                            arr_43 [i_8] [(unsigned short)12] [i_11] [i_8] [i_11] = ((/* implicit */unsigned char) (+(arr_13 [i_11])));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            var_24 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [(unsigned short)5])) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_0))))))))));
                            arr_46 [i_2] [i_2] [(unsigned short)11] [i_8] [i_12] = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_27 [i_2] [i_8] [i_4] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(unsigned char)10] [i_3]))))), (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) arr_42 [i_12] [i_4] [i_2] [i_2])) : (((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_27 [i_2] [i_2] [i_2] [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((arr_35 [i_2] [i_3] [(_Bool)1] [i_4] [i_8] [i_12] [i_12]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_2] [i_2]))) : (var_9))) : (max((var_9), (((/* implicit */unsigned int) var_8)))))))));
                        }
                    }
                }
            } 
        } 
    } 
}
