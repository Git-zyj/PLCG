/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216020
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_3] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-14))));
                                var_14 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_4 - 2])) && (((/* implicit */_Bool) arr_9 [i_1] [i_2 + 1] [(_Bool)1] [i_4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_2 - 2] [i_1 - 1] [i_4])) || (((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_4]))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                                var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1 + 2]))))), (((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (arr_4 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [10] [i_1 + 3] [i_1 - 1] [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))))) || (((/* implicit */_Bool) 6000602728653319801LL))))) - (((/* implicit */int) arr_7 [9] [i_1 + 3] [i_0]))));
                    var_17 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0] [(unsigned char)2]))));
                    arr_16 [i_0] [i_0] [(unsigned char)3] [i_2 - 1] = ((/* implicit */unsigned char) (_Bool)1);
                    var_18 *= max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6000602728653319814LL)) ? (((/* implicit */int) arr_3 [(short)13])) : (((/* implicit */int) (short)-16456)))))))), ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */short) (~(var_9)));
}
