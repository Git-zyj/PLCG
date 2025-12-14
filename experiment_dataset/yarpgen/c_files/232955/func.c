/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232955
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)56272)) + (((/* implicit */int) var_9))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)56272)))))));
    var_13 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [2] [i_0] [i_1] |= ((/* implicit */int) arr_1 [(short)0]);
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((_Bool) min((((/* implicit */unsigned short) var_10)), ((unsigned short)56272)))) ? (-822333324) : (((/* implicit */int) (short)11614)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((var_6) > (((/* implicit */int) var_10))));
}
