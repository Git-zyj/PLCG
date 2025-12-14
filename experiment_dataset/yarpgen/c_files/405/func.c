/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/405
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
    var_14 = ((/* implicit */unsigned char) min((var_9), (((/* implicit */long long int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((unsigned short) arr_1 [i_0 + 1] [i_0 + 1]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned char) var_8);
                    arr_9 [i_2] = ((/* implicit */unsigned int) (-(((2047LL) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 4])) ? (((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (short)28818))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -19))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) arr_5 [i_0 + 1] [(unsigned short)7]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) (unsigned short)54315);
        arr_15 [i_3] = ((/* implicit */_Bool) min((max((arr_5 [i_3] [7ULL]), (arr_5 [i_3] [i_3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) (signed char)-1))))))));
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((_Bool) 63ULL)))) && (((/* implicit */_Bool) arr_4 [i_6] [i_5] [i_4 + 2]))));
                        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) min((5623443182671808456LL), (((/* implicit */long long int) (unsigned short)30)))))));
                    }
                } 
            } 
        } 
        arr_25 [i_3] = ((/* implicit */int) arr_0 [i_3] [i_3]);
    }
}
