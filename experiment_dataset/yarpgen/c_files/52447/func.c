/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52447
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
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) var_9)) : (var_15)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) (!(((arr_8 [i_3 - 1] [i_0] [i_3 - 3] [i_3]) != (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) var_9)))))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)99)) || (((/* implicit */_Bool) var_2))));
                    }
                    for (short i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) var_10);
                        var_20 = ((/* implicit */long long int) arr_12 [i_4 + 1] [i_1] [i_2] [(signed char)6]);
                    }
                    /* LoopSeq 2 */
                    for (long long int i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        arr_16 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(min(((_Bool)1), ((_Bool)1)))))))));
                        var_21 = ((/* implicit */short) max(((!(((/* implicit */_Bool) var_11)))), ((!(((/* implicit */_Bool) arr_2 [i_0]))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        var_22 *= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_6])), (arr_12 [i_0] [i_6] [i_2] [i_6])))) : (((/* implicit */int) arr_3 [i_6] [i_1]))))), ((((!(((/* implicit */_Bool) -1LL)))) ? (min((var_2), (((/* implicit */unsigned long long int) arr_19 [i_2] [0] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_6] [i_6])))))))));
                        var_23 = ((/* implicit */unsigned long long int) var_12);
                    }
                    var_24 |= ((/* implicit */unsigned short) ((unsigned int) (((!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) var_4))))) : (min((var_15), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1])))))));
                    var_25 -= ((unsigned long long int) ((unsigned int) arr_18 [i_0] [i_2] [i_1] [i_2]));
                }
                for (long long int i_7 = 1; i_7 < 11; i_7 += 4) 
                {
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (max((((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-11)))))) : (((unsigned long long int) 1LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_7 - 1] [i_1])))))))));
                    arr_24 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7 - 1] [i_7 + 3] [i_7 + 1] [i_7] [i_7 + 3])) ? (((/* implicit */int) arr_13 [i_7 - 1] [i_7 + 2] [i_7 + 2] [i_7] [i_7 - 1])) : (((/* implicit */int) arr_0 [i_7 + 1])))))));
                }
                for (int i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned short) arr_18 [(signed char)8] [i_1] [i_1] [i_8]))) : (((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1]))))))))));
                    arr_27 [i_0] = ((/* implicit */_Bool) max(((+(((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)109)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    arr_31 [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((arr_18 [i_9] [i_0] [i_0] [i_0]) != (((((/* implicit */int) arr_3 [i_1] [i_0])) + (((/* implicit */int) var_7))))));
                    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1])) ? (arr_8 [i_0] [i_1] [i_1] [i_9]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_9] [i_9] [(signed char)9] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))))));
                    var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                    var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [(unsigned short)12]))));
                }
                var_31 = ((unsigned long long int) min((arr_15 [i_0] [i_0] [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) arr_4 [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
    {
        for (unsigned char i_11 = 2; i_11 < 12; i_11 += 4) 
        {
            {
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [i_10] [i_10] [i_10] [i_10]))))) ? (((/* implicit */unsigned long long int) ((long long int) var_1))) : (((var_15) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_11] [i_11 + 1] [i_11 + 1] [i_10])) ? (arr_19 [i_11] [i_11] [i_11 - 1] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((((unsigned long long int) var_2)) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_37 [i_10])), (arr_35 [i_11]))))))));
                var_33 ^= ((/* implicit */int) ((unsigned short) min((arr_12 [i_10] [i_11] [i_11] [i_11]), (((/* implicit */unsigned short) arr_34 [i_10])))));
                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) max((-7691730488168425159LL), (((/* implicit */long long int) (signed char)-74)))))))))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned long long int) var_14);
}
