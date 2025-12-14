/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204884
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
    var_13 = ((/* implicit */long long int) var_12);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_0 + 1]), (arr_3 [i_0 - 2])))) ? (arr_4 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_0] [i_2] [i_1 - 3]), (((/* implicit */short) var_9))))))));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((unsigned char) arr_7 [i_0 - 2] [i_0 + 1] [i_0])))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) arr_2 [i_1]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((short) ((unsigned short) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_6))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((unsigned int) var_11)) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (short)3703))))), (((unsigned int) var_5))))));
    var_17 = ((/* implicit */unsigned int) ((long long int) min((max((var_11), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) (_Bool)1)))));
}
