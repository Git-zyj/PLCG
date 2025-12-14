/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47639
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_6))));
    var_14 = var_7;
    var_15 ^= ((/* implicit */unsigned int) min((max((((/* implicit */signed char) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_3))))), (((signed char) var_10)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)15541)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-15542))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        {
                            arr_12 [(signed char)15] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [i_2] [i_3])) ? (((/* implicit */int) (short)-15530)) : (((/* implicit */int) var_7))))) ? (430379066692310497ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)248)))));
                            arr_13 [i_0] [i_3] [i_2 + 1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [17] [i_2 + 1] [i_2] [i_2]))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */long long int) (signed char)-116);
            arr_14 [i_0] = ((/* implicit */signed char) var_3);
        }
        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 3) /* same iter space */
        {
            arr_17 [i_0] [i_5] = ((/* implicit */signed char) var_1);
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-116)) ? (((long long int) var_12)) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-2)) ^ (((/* implicit */int) (unsigned char)173)))))));
        }
    }
}
