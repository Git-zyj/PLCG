/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248648
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
    var_10 = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) ((unsigned short) var_8))))));
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((unsigned long long int) max(((unsigned short)22328), (((/* implicit */unsigned short) var_5))))))));
    var_12 = ((/* implicit */int) ((long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) var_0)) != (4294967295U)))), (var_0))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [0LL] [11U] = ((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) arr_5 [(short)9] [i_1] [(short)9]))));
                    var_13 += ((/* implicit */unsigned char) -1353156047062129779LL);
                    arr_11 [8U] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((signed char) var_8))) == (((/* implicit */int) (short)17204))))) >> (((((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0]))) - (93)))));
                }
            } 
        } 
    } 
}
