/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242305
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [5] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_0 + 3])))) && (((/* implicit */_Bool) arr_5 [i_0] [i_0 + 2]))));
                var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(arr_1 [i_1])))) >= (arr_3 [i_0] [i_0 + 2] [i_0 + 2]))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_12 ^= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)-21)))) - (((((/* implicit */int) var_4)) - (1337802178)))));
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_6))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-15867)) ? (673652163) : (((/* implicit */int) (short)15867))));
    var_15 = var_9;
    var_16 = ((/* implicit */unsigned short) var_2);
}
