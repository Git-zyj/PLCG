/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218577
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
    var_17 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max(((-(arr_11 [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_2]))), (arr_2 [i_4 - 1] [i_2 + 2] [i_4]))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_11 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0]), (((long long int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)29)))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (1379097689U)))), (var_15))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)4);
                    var_20 = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((var_6) != (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))), (arr_7 [i_0] [i_1] [i_2 + 2] [i_2])))) ? (((/* implicit */int) max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_0])))) : (var_10));
                }
            } 
        } 
    } 
}
