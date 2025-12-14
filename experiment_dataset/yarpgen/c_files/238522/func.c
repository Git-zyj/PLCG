/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238522
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
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */int) (short)-32749)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (((min((8603190429859086915ULL), (((/* implicit */unsigned long long int) (signed char)-95)))) << ((-(((/* implicit */int) var_4))))))));
    var_15 = ((/* implicit */unsigned int) (unsigned short)16383);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) - (((((((/* implicit */int) (short)-32749)) + (2147483647))) >> (((arr_2 [i_0 + 1]) - (50149158U))))))))));
                var_17 = ((/* implicit */int) arr_5 [i_1] [i_1]);
            }
        } 
    } 
}
