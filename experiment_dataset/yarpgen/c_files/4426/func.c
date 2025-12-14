/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4426
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-27534)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_3 - 1] [i_4 - 2])) : (((/* implicit */int) (unsigned short)0))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (arr_0 [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3] [i_3 - 1] [2ULL] [i_3])) ? (((/* implicit */int) arr_11 [i_3] [i_3 - 1] [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_3] [i_3 - 1] [i_3] [i_3 - 1]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_0])))) ? (((/* implicit */int) ((arr_15 [(unsigned char)3] [(short)8] [i_2] [(signed char)1] [9U] [i_2] [i_1]) != (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [9ULL] [(signed char)3] [i_3] [i_5]))))) : (((/* implicit */int) arr_1 [i_2] [(signed char)5]))));
                            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3 - 1])))))));
                            arr_17 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((2632804724U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))))))));
                            var_20 = ((/* implicit */_Bool) (+(arr_12 [(short)8] [(short)8] [(short)8] [i_5] [i_5 + 1] [i_5] [i_5 - 3])));
                        }
                        arr_18 [i_0] [10LL] [i_0] [i_3] = ((/* implicit */short) ((unsigned short) (-(((((/* implicit */_Bool) arr_11 [i_0] [(signed char)1] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                        var_21 = var_7;
                    }
                } 
            } 
        } 
    }
    for (long long int i_6 = 3; i_6 < 22; i_6 += 4) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_20 [i_6 - 3])) != (arr_19 [i_6 - 1]))))));
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_1)) != (((/* implicit */int) arr_20 [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_20 [i_6 - 3])), (var_9))))) : (min((arr_21 [i_6]), (((/* implicit */long long int) (short)-1696)))))))));
        arr_23 [(unsigned char)0] [(unsigned char)0] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_19 [i_6])), (1662162596U)))))))));
    }
    var_23 = (-(((var_13) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1984))) : (1662162572U)))))));
    var_24 = ((/* implicit */long long int) 1662162567U);
}
