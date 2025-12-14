/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47344
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_4)))))));
        var_21 = ((/* implicit */int) arr_2 [i_0]);
    }
    var_22 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (short i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            {
                arr_9 [i_2] [i_1] |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((~(((/* implicit */int) (short)11551)))), (((/* implicit */int) (signed char)-17))))), (16777216U)));
                var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38307)) ? (((/* implicit */int) (short)11551)) : (((/* implicit */int) (unsigned short)38307))))), (17017507585959102886ULL)));
                /* LoopNest 3 */
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) var_12);
                                arr_20 [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_3] [2ULL] [i_5]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) (-(min((((/* implicit */int) var_17)), (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) (_Bool)1))))))));
}
