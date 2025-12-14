/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226925
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
    var_18 = ((/* implicit */_Bool) (+((+(var_5)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [(unsigned short)0] = ((/* implicit */long long int) ((var_17) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)11941)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16)))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1]);
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                arr_13 [i_3] [i_2] = ((/* implicit */unsigned long long int) ((var_17) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) arr_7 [i_1 - 1])) : (((var_4) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_1] [(signed char)17]))))))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) : (564733069U)))));
                arr_14 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_1] [(unsigned short)15] [i_1 + 2])) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_9 [i_3] [i_1]))))) : (var_5))) / (((/* implicit */long long int) ((unsigned int) ((unsigned char) (signed char)75))))));
            }
            arr_15 [i_2] = ((((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ ((~(var_5))))) <= (((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) ((unsigned short) var_2)))))));
            arr_16 [(unsigned short)7] [i_2] [i_2] = max(((-(arr_6 [i_1 + 1]))), (((/* implicit */unsigned int) var_1)));
        }
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            arr_21 [i_4] [i_4] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_20 [i_1] [i_4])))) ? (max((((/* implicit */unsigned long long int) arr_11 [i_1 + 1] [i_1 + 2] [i_1 + 3])), (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75)))));
            arr_22 [i_4] [i_1 - 1] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            arr_25 [i_1 + 1] [i_1] = ((/* implicit */signed char) arr_18 [i_1] [i_1] [i_1]);
            arr_26 [6U] [i_5] [i_5 - 1] = ((/* implicit */unsigned short) (((-(var_15))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_1 + 2] [i_5 + 1] [i_5])) * (((/* implicit */int) arr_11 [i_1 + 2] [i_5 - 1] [i_5])))))));
        }
    }
    var_19 = var_9;
    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
    var_21 = var_10;
}
