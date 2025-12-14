/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52620
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_3] [i_1] [i_1] [i_1 + 1] [(unsigned char)7] = ((unsigned int) arr_12 [(signed char)5] [i_1 - 1] [(signed char)5] [i_2 - 1] [(signed char)5] [5]);
                                arr_15 [i_4] [i_4] [i_4] [(signed char)3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) > (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [(unsigned short)10] [(short)5] [(short)5] [(short)5] [6LL]))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_6 [5LL])))))));
    }
    var_13 = ((/* implicit */unsigned int) (+(min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) == (var_0)))), (var_3)))));
    var_14 |= ((/* implicit */_Bool) ((unsigned char) ((var_12) << (((((/* implicit */int) var_6)) - (246))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (short)32757)))) / ((-(((/* implicit */int) (signed char)-43))))))));
}
