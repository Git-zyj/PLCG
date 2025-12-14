/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217554
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
    var_16 = ((/* implicit */unsigned short) (+(var_8)));
    var_17 = ((/* implicit */int) (signed char)-70);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [(unsigned short)7] [i_2] [i_1] [(short)11] = ((/* implicit */unsigned int) var_15);
                    arr_11 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2113503143)) ? (-2113503143) : (((/* implicit */int) (short)-1))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) (~((-(max((((/* implicit */unsigned long long int) (short)-20258)), (arr_13 [i_0] [10] [5ULL] [i_0] [i_0])))))));
                                var_19 = ((/* implicit */signed char) var_11);
                                arr_18 [i_0] [i_2] [i_2] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2113503143)), (((var_1) ? (max((var_8), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2113503144))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
