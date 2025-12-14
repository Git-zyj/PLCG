/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209910
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_4)) : (arr_2 [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_1]) : (((/* implicit */int) (_Bool)1))))))) < (((/* implicit */long long int) ((/* implicit */int) min((var_2), ((unsigned char)105)))))));
                    var_10 = ((/* implicit */signed char) (unsigned char)3);
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) 16045872865074302910ULL)))));
}
