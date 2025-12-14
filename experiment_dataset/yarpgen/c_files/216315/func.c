/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216315
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((var_3) * (3624930776U))))) ? (((unsigned long long int) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [16ULL]))) * ((+(arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */_Bool) 1374859386U);
        /* LoopNest 3 */
        for (signed char i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 4; i_4 < 17; i_4 += 2) 
                        {
                            arr_16 [i_2] [i_4 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (12630654651437931634ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */int) ((17896121548861380644ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_3])))))) : ((~(((/* implicit */int) var_5))))));
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_3))))));
                            var_16 = ((/* implicit */signed char) arr_15 [1U] [i_1] [i_2 - 1] [i_3] [(signed char)2] [(unsigned short)14] [(signed char)2]);
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10077002982864633532ULL)) ? (arr_11 [i_4]) : (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))) : (var_1))) : (((/* implicit */long long int) var_3))));
                        }
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_11))));
                    }
                } 
            } 
        } 
        arr_18 [i_0] = ((/* implicit */unsigned long long int) (short)208);
    }
}
