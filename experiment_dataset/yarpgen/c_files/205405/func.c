/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205405
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
    var_14 ^= ((/* implicit */int) var_10);
    var_15 = ((/* implicit */unsigned int) var_13);
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1958873880U))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_17 ^= ((/* implicit */short) min((min((((/* implicit */unsigned int) arr_7 [i_3])), (2336093401U))), (((/* implicit */unsigned int) arr_3 [(_Bool)1]))));
                                var_18 |= ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                    arr_13 [(signed char)21] [i_1] [i_2] [i_1] = ((/* implicit */int) arr_1 [2LL]);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 19; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_2] [i_5 + 3])) + (arr_5 [i_5 - 3] [i_5 + 1] [i_5 - 3]))), (((/* implicit */int) var_9)))))));
                                arr_21 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1958873880U)) ? (1958873880U) : (4000756000U))))));
                                arr_22 [i_5 + 1] [i_5] [i_2] [i_6] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-97)) ? (((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0] [i_0] [i_0] [(unsigned char)19]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))))), (((/* implicit */long long int) ((((unsigned int) (signed char)106)) << (((arr_5 [i_1] [i_2] [i_5]) - (2013766239))))))));
                                arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */int) min((var_8), (((/* implicit */unsigned int) (((~(-394178877))) << (((((arr_12 [i_6] [(signed char)17] [i_2] [13] [i_1] [i_0]) + (137389484554981231LL))) - (3LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
