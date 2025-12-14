/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238502
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
    var_11 = ((/* implicit */unsigned char) (((+(((/* implicit */int) max((var_0), (var_0)))))) - (((((/* implicit */int) ((signed char) var_9))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (var_5)))))) + (((var_8) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned char) ((((var_1) ? (((/* implicit */unsigned int) arr_0 [i_3])) : (var_6))) >= (((unsigned int) arr_7 [i_0] [i_0] [i_2] [i_2] [(short)5]))));
                        var_14 = ((/* implicit */long long int) ((((arr_0 [i_0]) + (((/* implicit */int) var_9)))) + (((/* implicit */int) var_0))));
                    }
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */long long int) (((+(arr_9 [(_Bool)0] [i_4]))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_10)))))))) - (((arr_8 [i_0] [(_Bool)1] [i_2] [i_2] [i_0]) - (arr_8 [i_4] [i_2] [i_4] [i_4] [i_1]))))))));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((max((arr_1 [i_1] [(short)2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_10))))))), (((/* implicit */unsigned int) max((((((/* implicit */int) arr_2 [i_0] [4U] [i_4])) / (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [8])) : (((/* implicit */int) var_9))))))))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_6] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_2] [i_1] [i_0]))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_5] [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_5] [i_6]))));
                            var_19 = ((/* implicit */signed char) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_20 = ((/* implicit */signed char) ((((var_8) ^ (((/* implicit */unsigned long long int) var_5)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))));
                        }
                        for (long long int i_7 = 1; i_7 < 8; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(arr_0 [(_Bool)1]))))));
                            arr_20 [i_0] [i_1] [i_0] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */int) arr_11 [10LL] [i_2] [i_2] [i_0])) > (((/* implicit */int) arr_19 [i_0] [i_1] [(_Bool)1] [i_5])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_5] [i_7])) : (((/* implicit */int) var_9)))))));
                        }
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_4 [(unsigned char)5] [(unsigned char)5] [i_5]))));
                        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) != (((/* implicit */int) var_9)))) ? (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_2] [i_2])) : (((arr_8 [i_0] [i_1] [i_2] [i_2] [i_5]) / (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_0] [i_1])))))));
                    }
                    var_24 = ((((((/* implicit */_Bool) ((unsigned short) var_0))) || (((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_2))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_0] [i_1])), (max((arr_4 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) var_0))))))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_16 [i_2] [i_1] [(short)4] [i_2] [i_1] [i_1])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [2LL] [i_1] [2LL] [8U]))))))) ? ((+(((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [(unsigned char)10] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_1)))))));
                    arr_21 [i_0] [i_1] = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_16 [i_0] [4U] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_2] [i_1] [i_0] [i_0] [i_0] [i_0])))) * (((((/* implicit */int) arr_2 [i_2] [i_0] [i_2])) * (((/* implicit */int) var_7)))))));
                }
            } 
        } 
    } 
}
