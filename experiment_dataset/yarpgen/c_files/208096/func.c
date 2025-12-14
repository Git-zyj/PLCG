/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208096
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_11))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_12 [i_3] [i_1] [i_2] [i_3] [(signed char)16] [i_3] = ((/* implicit */signed char) (((~(((/* implicit */int) (short)-7646)))) << (((var_4) + (2051559659)))));
                        var_14 -= ((/* implicit */unsigned short) min((max((((((/* implicit */int) (unsigned char)1)) << (((var_8) - (6217519564190933936ULL))))), (((/* implicit */int) (unsigned char)248)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 - 1] [i_1] [i_2] [(unsigned char)11])))))));
                    }
                } 
            } 
        } 
        var_15 -= ((/* implicit */short) min((min((arr_0 [(short)8]), (((/* implicit */unsigned long long int) arr_5 [(short)10])))), (arr_0 [(short)9])));
        var_16 = ((/* implicit */unsigned long long int) (short)15754);
        arr_13 [i_0] = 9563208160283159951ULL;
    }
    var_17 &= ((/* implicit */signed char) var_8);
}
