/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39985
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) ((signed char) (_Bool)0))) < (((/* implicit */int) (short)-32749)))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) max((max((arr_3 [i_1]), (((/* implicit */short) var_2)))), ((short)-27121))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (signed char)-39);
    var_16 = ((/* implicit */long long int) ((short) (((!(((/* implicit */_Bool) (short)-1)))) && (((/* implicit */_Bool) max((var_9), (var_4)))))));
}
