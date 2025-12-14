/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222585
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
    var_14 = ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */int) var_3)), ((~(2147483647))))) : (((((int) 2147483647)) / (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_13))))))));
    var_15 = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((unsigned short) 2147483647))))), (((/* implicit */int) var_13))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 3])) && (((/* implicit */_Bool) (signed char)-118))))) & (((/* implicit */int) arr_11 [i_1 + 2] [i_2])))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_2 - 3] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1907316862)) ? (arr_10 [i_2 + 1] [i_2 + 1] [i_2] [i_3]) : (arr_10 [i_2 + 1] [i_4] [i_2] [i_4])))) ? (((/* implicit */long long int) arr_9 [i_2 - 1] [i_2 - 1] [i_2])) : ((+(arr_8 [i_2 + 1] [i_3] [(_Bool)1])))));
                            var_16 = ((/* implicit */long long int) ((signed char) -1515344254));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                        {
                            var_17 = ((((/* implicit */_Bool) ((long long int) arr_2 [i_2]))) ? (((/* implicit */int) (!(var_11)))) : (((/* implicit */int) ((signed char) (unsigned short)35656))));
                            var_18 = ((/* implicit */int) var_9);
                            arr_18 [0LL] [i_1 + 1] [i_2] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / ((-(((/* implicit */int) arr_4 [i_0]))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                        {
                            var_19 ^= ((/* implicit */short) arr_5 [i_3] [(unsigned short)8]);
                            arr_22 [i_2] [i_2] = ((/* implicit */long long int) (unsigned char)247);
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned long long int) arr_11 [i_0] [i_6])))));
                        }
                        var_21 = ((/* implicit */unsigned char) (-(max((max((arr_19 [(unsigned short)8] [i_0] [(short)8] [i_1 - 1] [i_2] [i_3]), (((/* implicit */int) arr_7 [i_0] [i_1])))), (min((var_8), (-538832025)))))));
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                        arr_23 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 - 1] [i_0] [i_2 - 3])) ? (((/* implicit */int) ((short) arr_2 [(_Bool)1]))) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1])) / (arr_19 [(short)8] [i_0 + 1] [i_1 + 3] [i_2] [i_2] [i_3])))) ? (((((/* implicit */_Bool) arr_10 [i_0] [1] [i_2] [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_21 [i_3 - 1] [i_2] [i_1] [i_1 + 2] [i_0]))) : (((/* implicit */unsigned long long int) min((arr_9 [i_0] [i_1] [i_2]), ((-2147483647 - 1)))))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        arr_26 [i_2] [i_1] [i_2 - 2] [i_7] [i_7] [i_2] = ((/* implicit */short) var_3);
                        var_23 -= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) -379418280)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))));
                        arr_27 [i_7] [i_2 - 1] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_1 - 1] [i_1 + 1])) ? (((long long int) arr_3 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-18)) != (((/* implicit */int) (short)-29998))))))));
                        var_24 ^= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_13))) == (arr_8 [i_7] [i_1] [i_0]))) ? (((((/* implicit */_Bool) 5380232761559247098ULL)) ? (arr_21 [i_0] [i_1 - 1] [i_1 - 1] [i_2 - 2] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)57)))))));
                    }
                    var_25 = ((short) ((((/* implicit */_Bool) (short)-25210)) ? (((/* implicit */int) (unsigned short)29885)) : (((/* implicit */int) (signed char)-118))));
                }
            } 
        } 
    } 
}
