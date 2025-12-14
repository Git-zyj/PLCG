/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199777
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((max((var_4), (((/* implicit */int) (short)-3779)))) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)3779)) : (((/* implicit */int) var_14))))))))))));
    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) max((((/* implicit */unsigned char) var_10)), (var_5)))), (var_9))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((/* implicit */int) arr_3 [i_1] [i_3])) : (((/* implicit */int) (short)3769))))) || (((/* implicit */_Bool) (~(((((((/* implicit */int) arr_1 [(short)13])) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_2] [i_1])) + (15693)))))))))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (short)-3759))))))));
                        arr_9 [8] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) 32767);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 4) 
            {
                {
                    arr_15 [i_0] [i_4] [i_5] = ((/* implicit */unsigned char) arr_2 [i_0] [i_4] [i_5]);
                    arr_16 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5 + 1] [i_5 + 1] [i_5])) ? (((/* implicit */int) arr_2 [i_5 - 1] [i_5 + 1] [i_5])) : (((/* implicit */int) arr_2 [i_5 - 1] [i_5 + 1] [(signed char)11]))))) ? (((/* implicit */int) arr_2 [i_5 + 1] [i_5 + 1] [i_5])) : (((((/* implicit */_Bool) arr_2 [i_5 - 1] [i_5 - 1] [i_5])) ? (((/* implicit */int) arr_2 [i_5 + 1] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) arr_2 [i_5 - 1] [i_5 + 1] [i_5 - 1]))))));
                    var_19 = ((((((/* implicit */_Bool) arr_12 [i_5] [i_5 + 1] [i_5 - 1])) ? (((/* implicit */int) arr_1 [i_5 - 1])) : (((((/* implicit */int) arr_6 [i_5] [i_0] [i_4] [i_0])) + ((-2147483647 - 1)))))) / (((((/* implicit */_Bool) arr_5 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5])) ? (arr_10 [i_5 + 1] [i_5 + 1] [i_5 + 1]) : (((/* implicit */int) (short)3779)))));
                    arr_17 [i_5] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5 - 1]))) >= (arr_12 [i_5 - 1] [i_5 + 1] [i_5 - 1]))));
                }
            } 
        } 
    }
}
