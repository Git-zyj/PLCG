/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39971
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
    var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (((18352678464781526584ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)3])) ? (((/* implicit */int) (short)-15632)) : (((/* implicit */int) var_9))))) ? (((int) var_7)) : (((/* implicit */int) arr_0 [i_2 - 2]))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            arr_16 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_2 - 2] [i_3] [i_3] [i_4] [i_4]) : (((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) + (7655)))))));
                            arr_17 [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) var_7);
                        }
                        var_13 -= ((/* implicit */unsigned long long int) (+(arr_13 [i_2 + 1] [i_2 - 1] [i_3 + 4] [i_3])));
                        arr_18 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_0] [i_3 + 2] [i_2] [i_2 - 2] [i_2 - 2]))));
                    }
                } 
            } 
            arr_19 [(unsigned short)11] = (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_1])));
            var_14 = ((/* implicit */unsigned short) ((arr_7 [i_1] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_13 [i_1] [i_1] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_13 [i_0] [i_0] [i_1] [i_0])));
        }
        var_16 = (!(((/* implicit */_Bool) arr_4 [i_0])));
        var_17 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (short)13445))) + (((/* implicit */int) (short)13445))));
    }
    var_18 = ((/* implicit */signed char) var_8);
}
