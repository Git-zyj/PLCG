/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24333
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
    var_13 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_14 = ((/* implicit */short) arr_5 [i_0]);
                    var_15 = ((/* implicit */short) ((min((max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_2])), (arr_3 [i_0] [i_0] [i_2]))), (((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [i_2])))) ^ (((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_5 [i_0])) : (arr_9 [i_0] [i_0 - 2])))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 2]))))));
                }
                for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0 - 1] [i_3 + 1] [i_3])))) < ((+((+(arr_3 [i_0] [i_0] [i_0])))))));
                    var_17 &= ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (arr_0 [i_1])))))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((arr_3 [i_1] [i_1] [i_3 + 3]) != (arr_3 [i_0 - 2] [i_1] [i_3 + 4]))))))));
                }
                /* vectorizable */
                for (long long int i_4 = 4; i_4 < 11; i_4 += 3) 
                {
                    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_15 [i_0] [i_0] [i_0]))))));
                    var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_5 [i_0])))) ? ((~(arr_5 [i_0]))) : (((/* implicit */long long int) ((arr_14 [12] [i_1]) / (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_4])))))));
                    var_21 = ((/* implicit */short) (-(7737069515649123421ULL)));
                    var_22 = ((/* implicit */short) (-(arr_9 [i_0] [i_0])));
                }
                for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))), (((/* implicit */int) arr_4 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_0 [i_5]), (((/* implicit */unsigned long long int) ((arr_0 [i_7]) != (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_7]))))))))));
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-(arr_15 [i_0] [i_6] [i_1])))) ^ (((((/* implicit */_Bool) arr_16 [i_0] [i_0 - 2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_5] [(short)14])))))) : ((-(arr_9 [i_7] [i_1]))))))))));
                            }
                        } 
                    } 
                }
                arr_22 [i_0] = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)106)))))))), (((unsigned char) arr_0 [i_0])));
                var_26 -= ((/* implicit */short) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1]);
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((arr_3 [i_1] [i_0] [i_0 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 2])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0] [i_1] [i_1]))))))))) : (((((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_1] [i_0] [14ULL] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0 + 1] [(unsigned char)0] [i_1])))))));
                var_28 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            }
        } 
    } 
}
