/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54093
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) max(((-(var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (var_11)))) : (var_4))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))))));
    var_15 = ((/* implicit */unsigned int) var_6);
    var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-27747)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_9))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((var_2) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_0 [(unsigned char)1])))))) : (min((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) - (var_4))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) var_1)))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0]))))) : ((-(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                        arr_10 [i_0] [i_1] [i_1] [(signed char)8] [i_1] = ((/* implicit */signed char) (!((!(var_9)))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (+(arr_1 [i_0]))))) ? (((/* implicit */unsigned int) var_11)) : ((((!(((/* implicit */_Bool) arr_5 [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_12)) : (var_11)))) : (max((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4])), (arr_4 [i_0] [i_0])))))));
                        var_20 = ((/* implicit */short) var_5);
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (arr_4 [i_4 - 1] [i_4 + 3])))) ? (((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4 - 1]))) / (arr_1 [i_1]))))) : ((~(((/* implicit */int) var_12))))));
                        var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((var_9) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_10)))) & (((/* implicit */int) var_1))));
                    }
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) arr_5 [i_0]);
                        var_24 = ((/* implicit */unsigned int) arr_6 [i_0]);
                        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_5])), ((+(((/* implicit */int) (unsigned char)255)))))))));
                    }
                    var_26 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) ((unsigned char) arr_11 [(signed char)24] [i_0] [i_0] [i_0])))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1073741824)), (3927125182U)));
                        arr_18 [i_0] [23U] [14] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */long long int) (+(((arr_13 [i_0] [i_1] [i_2] [i_6]) * (((/* implicit */int) var_10))))))) : (((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_0] [i_6])) - ((-(arr_1 [i_1])))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 2; i_7 < 23; i_7 += 1) 
                    {
                        var_28 = ((((/* implicit */_Bool) arr_12 [i_7 + 2] [i_7 + 2] [i_2] [i_1] [i_0] [i_2])) ? (arr_8 [i_0] [i_7 + 1] [i_0] [i_2]) : (((/* implicit */unsigned int) ((arr_19 [i_7]) * (((/* implicit */int) var_2))))));
                        arr_21 [i_0] [i_0] [1U] [i_7] = ((/* implicit */int) ((unsigned char) arr_4 [i_7 + 2] [i_7 + 2]));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) var_7))));
                        var_30 &= ((/* implicit */unsigned char) arr_12 [(_Bool)1] [i_1] [i_1] [i_2] [(_Bool)1] [8]);
                        arr_22 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */signed char) ((4294967291U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49)))));
                    }
                }
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_7))));
        arr_26 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [i_8] [i_8])) / (arr_23 [i_8])))) ? ((((+(arr_16 [i_8] [15] [i_8] [i_8]))) / (((/* implicit */unsigned int) max((arr_13 [i_8] [i_8] [i_8] [i_8]), (var_11)))))) : (((/* implicit */unsigned int) arr_13 [i_8] [i_8] [(unsigned char)12] [i_8]))));
    }
    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) min((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_8)) : (var_13))), (((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))))))));
}
