/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3800
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
    var_13 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned short)0))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11U)) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-9455)))))));
        var_15 = ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
        var_16 += ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
    }
    for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 2] [i_2]))) : (arr_2 [i_2])))));
            var_18 = ((/* implicit */unsigned int) arr_4 [i_1]);
            arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */int) arr_3 [3])) : (((/* implicit */int) arr_3 [i_1 + 1]))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_19 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1])) <= (((/* implicit */int) (unsigned char)153)))))));
                        arr_12 [i_4] [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_9 [i_1] [i_1 + 2]))));
                    }
                } 
            } 
        }
        for (short i_5 = 1; i_5 < 14; i_5 += 3) 
        {
            var_20 += ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) var_8)))), (arr_9 [i_1] [i_1 + 2])));
            var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min(((unsigned short)39719), ((unsigned short)36093)))), (max((((/* implicit */long long int) arr_14 [i_1 + 1])), (var_12)))));
        }
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 511)) <= (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)1023))))), (min((((/* implicit */unsigned long long int) arr_14 [i_1])), (arr_2 [i_1 - 1])))))));
        arr_15 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1]))) + (arr_13 [i_1] [i_1])));
    }
}
