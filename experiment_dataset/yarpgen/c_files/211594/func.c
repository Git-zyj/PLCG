/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211594
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_16 = max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_1 [14])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */int) ((arr_9 [i_0] [i_0] [4U] [i_0 + 1] [i_1]) == (arr_9 [i_0] [i_2] [i_0] [i_0 + 1] [i_0])))) > (((/* implicit */int) arr_6 [i_0] [i_0] [i_2 - 1]))));
                        var_17 = (+(((/* implicit */int) arr_8 [i_2])));
                        arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_1] [3])) ? (((/* implicit */int) arr_6 [i_0] [9] [i_3])) : (((((/* implicit */_Bool) var_1)) ? (arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0]) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0 + 3] [i_2] [i_2] [i_0 + 1] [i_2 + 1])))));
                        var_18 = ((/* implicit */unsigned short) ((long long int) (+(((/* implicit */int) var_15)))));
                        arr_12 [(short)7] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_8 [i_0])), (arr_2 [i_0 - 1]))) - (var_4)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 10; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 3; i_5 < 9; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                {
                    arr_20 [i_5] [i_5] [i_4] = ((/* implicit */unsigned int) ((short) arr_13 [i_4] [i_5]));
                    var_19 = ((/* implicit */long long int) arr_14 [i_4] [(unsigned char)3]);
                    var_20 = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_4] [i_6] [i_6] [i_6]))));
                    arr_21 [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) ((_Bool) ((int) arr_17 [i_4 - 2] [i_5] [i_6] [i_6])));
                }
            } 
        } 
        arr_22 [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) var_10)))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_2 [i_4 - 1]))));
    }
    var_22 = ((/* implicit */unsigned char) ((long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (var_9))))));
}
