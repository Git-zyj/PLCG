/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229234
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
    var_20 = ((/* implicit */short) var_10);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)0))) ? (((((((/* implicit */int) var_9)) / (((/* implicit */int) var_5)))) * (((/* implicit */int) var_13)))) : (((((/* implicit */int) max(((unsigned char)182), ((unsigned char)255)))) & (((/* implicit */int) min((((/* implicit */short) var_14)), (var_9))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) || (((/* implicit */_Bool) (unsigned char)0)));
                    arr_9 [i_0 + 2] [i_1] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) (unsigned char)244)) - (230)))))), (max((var_17), (((/* implicit */long long int) var_9))))))));
}
