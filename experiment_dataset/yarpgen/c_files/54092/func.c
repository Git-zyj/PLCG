/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54092
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_12 += ((/* implicit */unsigned short) min((((var_4) || (((/* implicit */_Bool) ((arr_2 [i_0] [4LL]) ? (arr_5 [i_0] [8LL] [i_2] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))), ((!(((/* implicit */_Bool) min((((/* implicit */short) var_4)), (arr_3 [i_0] [i_1] [i_2 - 1]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (~(arr_8 [i_1 + 1]))))));
                        arr_10 [i_3] [i_1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) arr_4 [i_1] [i_2] [i_3]);
                        arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_1]))) >= (arr_4 [i_1] [i_2 + 1] [i_3]))) ? (((/* implicit */int) arr_6 [i_0] [i_1 - 2])) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_3])) >= (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_4 = 2; i_4 < 22; i_4 += 3) 
                    {
                        arr_15 [i_1] [(unsigned char)14] [(unsigned char)14] [i_2] [i_2] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0] [i_1]))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_4 - 1] [i_4 - 2] [i_2 - 1]), (arr_3 [i_4] [i_4 - 2] [i_2 - 1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_1] [i_0] [i_0] [i_0]))))) : ((-((~(arr_8 [(signed char)16])))))));
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_7 [i_1] [10ULL] [i_4]))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (arr_14 [i_0] [i_0] [i_1 + 1] [i_2] [i_0] [i_5]))) ? (arr_8 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) max((arr_12 [i_1] [i_1] [i_2] [i_5]), (((/* implicit */signed char) var_4))))))))) ? (min(((-(var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_17 [(unsigned char)15] [(signed char)10] [i_2] [i_5]))))))) : (min((max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (var_10))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))))));
                        arr_18 [i_0] [i_0] [i_2 + 1] [i_0] [i_5] [i_1] = ((/* implicit */signed char) min((arr_1 [i_5] [i_2]), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1 - 2] [i_5]))) : (arr_8 [(_Bool)1]))), ((-(arr_8 [i_5]))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((long long int) arr_9 [i_0] [i_0] [i_0] [i_1 + 2])))))));
                        arr_21 [i_0] [i_1] [i_2] [(signed char)4] = ((/* implicit */signed char) max(((_Bool)1), ((_Bool)1)));
                    }
                    arr_22 [i_0] [i_1] [i_1] = ((/* implicit */int) var_8);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_4 [20LL] [20LL] [i_7]))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_12 [(signed char)10] [i_1] [i_2] [i_7]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((arr_1 [i_8] [i_8]) >= (arr_1 [i_8] [i_8]))))));
        arr_27 [i_8] |= ((/* implicit */unsigned int) arr_2 [i_8] [(_Bool)0]);
    }
    /* LoopNest 3 */
    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            for (unsigned short i_11 = 2; i_11 < 20; i_11 += 4) 
            {
                {
                    arr_38 [i_9] [(short)16] [i_9] = ((/* implicit */long long int) (-(2391059606668873968ULL)));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) (~((+(arr_5 [8U] [i_11] [i_10] [8U])))))) ? (((arr_13 [i_9] [i_10] [i_10] [i_10] [i_11 + 1]) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_9] [i_10]))))) : (max((((/* implicit */unsigned long long int) arr_33 [i_10])), (var_11))))) : (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_2 [i_9] [i_11])))))))))));
                    var_22 -= (-((-(arr_5 [i_11 + 2] [i_10] [i_11] [i_11]))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        for (signed char i_13 = 1; i_13 < 20; i_13 += 4) 
                        {
                            {
                                var_23 = var_10;
                                var_24 = ((/* implicit */_Bool) min(((-((~(((/* implicit */int) var_7)))))), (((/* implicit */int) ((arr_14 [i_9] [i_9] [i_9] [i_11 + 1] [i_11] [i_11 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
