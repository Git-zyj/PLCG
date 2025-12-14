/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36372
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
    var_14 = ((/* implicit */long long int) var_9);
    var_15 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0])))))));
                    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((int) arr_5 [i_1] [i_2]))))) ? ((~(arr_6 [i_2 - 1] [i_2 + 1] [i_1] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2 - 1])))))));
                    var_17 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)9] [(short)8])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (arr_6 [i_0] [i_0] [i_1] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) var_12);
        arr_13 [i_3] = var_1;
        var_18 = ((/* implicit */long long int) var_7);
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) 3342048840526513376LL);
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_5] [i_4] [i_3])))) ? (arr_1 [i_4] [i_5]) : (((/* implicit */unsigned int) (-(arr_14 [i_5])))))))));
                }
            } 
        } 
    }
}
