/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209454
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
    var_19 = ((/* implicit */int) max((var_19), (max((var_15), (((int) var_5))))));
    var_20 = ((/* implicit */long long int) ((int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (var_5))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_13))))) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned int) var_1)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_22 = (signed char)-100;
                        arr_11 [i_3] [i_3] = ((/* implicit */_Bool) (-(arr_0 [i_0])));
                    }
                    for (int i_4 = 1; i_4 < 22; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */_Bool) max(((unsigned short)221), ((unsigned short)65300)));
                        arr_16 [21] [i_1] [21] [i_4] = ((/* implicit */unsigned short) max(((~((~(3844628459U))))), (((arr_3 [i_4 - 1]) << (((var_6) - (1417589048)))))));
                        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)102)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))) <= ((~(((long long int) -1LL))))));
                    }
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((((((/* implicit */_Bool) 2138048295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99))) : (1611906475U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((arr_13 [(signed char)9] [i_1] [i_0] [i_0]), (((/* implicit */signed char) arr_12 [i_0] [i_2] [(unsigned short)7] [(unsigned short)7]))))))))));
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */short) (-((~(((long long int) var_5))))));
                    var_26 ^= ((/* implicit */int) 3057849843475731985ULL);
                }
            } 
        } 
    } 
}
