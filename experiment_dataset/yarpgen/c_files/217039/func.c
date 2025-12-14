/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217039
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
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = min((arr_0 [i_0 + 1] [i_0 - 4]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 1]))))));
                    var_10 = ((/* implicit */unsigned char) ((((var_5) ^ ((-(((/* implicit */int) (signed char)-112)))))) / (((int) var_5))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_3 [i_0])), ((~(((/* implicit */int) var_8))))));
                                var_12 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) var_5)), (var_6))), (((/* implicit */long long int) min((var_9), (var_9))))));
                                var_13 = (-((~(((/* implicit */int) arr_9 [i_0] [i_4 + 3] [i_2 + 1] [17U] [i_1] [i_0])))));
                            }
                        } 
                    } 
                    var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)111)), (var_3)))), (var_6)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) arr_9 [(signed char)2] [i_1] [i_1] [i_1] [i_0] [(signed char)2])) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_1] [i_1] [i_0 - 2] [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_11 [(unsigned char)10] [i_1]))) : (((var_4) * (var_4))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (var_2)))) + (var_4)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((long long int) var_1));
    var_16 = var_3;
    var_17 = ((min((((/* implicit */unsigned long long int) (+(549755813887LL)))), ((+(174596566017563134ULL))))) == (((/* implicit */unsigned long long int) ((var_2) + (((/* implicit */int) var_1))))));
}
