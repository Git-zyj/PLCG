/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47832
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
    var_20 |= ((/* implicit */unsigned char) min((((/* implicit */long long int) var_4)), (-2775862952459780233LL)));
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((2263592295204135185LL), (((/* implicit */long long int) -1844279331)))))));
    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-14554))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_12 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)97)) >= (((((/* implicit */_Bool) (+(arr_6 [i_0] [(signed char)2] [i_0])))) ? (((/* implicit */int) arr_7 [i_0 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))))));
                                arr_13 [i_0] [1LL] [i_0] [7] [i_2] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 0))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0 + 1] [(_Bool)1] [i_0] = ((/* implicit */signed char) max((-4657627225797890932LL), (((/* implicit */long long int) min((arr_10 [i_1 + 3] [i_1 + 3] [i_1 + 3]), (arr_10 [i_1 + 3] [(unsigned char)9] [i_1 + 1]))))));
                arr_15 [10LL] [10LL] [i_1 + 2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_6 [i_1 + 1] [12LL] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6825354183895168639LL)))));
                arr_16 [i_0] = ((/* implicit */_Bool) (((+(arr_6 [i_0] [i_0] [i_0]))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
            }
        } 
    } 
}
