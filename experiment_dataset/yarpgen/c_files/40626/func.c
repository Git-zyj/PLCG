/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40626
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((var_16) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned short) (_Bool)1);
            arr_6 [i_1] = ((/* implicit */_Bool) arr_3 [i_0] [15] [i_1]);
            var_19 = ((/* implicit */int) min((var_19), (max((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])), ((~(((/* implicit */int) (signed char)-16))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            var_20 -= ((/* implicit */unsigned short) ((unsigned long long int) arr_7 [i_0] [i_2]));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_8 [i_2]))));
            arr_11 [i_0] = (-(((/* implicit */int) (_Bool)1)));
        }
    }
    /* LoopSeq 2 */
    for (long long int i_3 = 2; i_3 < 19; i_3 += 3) 
    {
        arr_14 [i_3 + 2] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29032))) | (arr_13 [i_3])))) ? (arr_12 [i_3 + 1]) : (((/* implicit */long long int) 1960494220U))))) > ((+(arr_13 [i_3 + 1]))));
        arr_15 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((-(arr_13 [(_Bool)1])))))) ? (((unsigned long long int) (short)15540)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (short)15567)) : (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) var_7)), (arr_13 [i_3])))))));
        arr_16 [6ULL] [i_3] = (~(2358806170U));
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) ^ (arr_12 [i_4 - 1])));
        arr_21 [i_4] = ((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-15541))));
    }
}
