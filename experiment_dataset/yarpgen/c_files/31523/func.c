/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31523
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
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_11)), (var_4)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)9])))));
                    arr_11 [11LL] [11LL] [11LL] [i_0] = ((/* implicit */long long int) (unsigned char)242);
                    var_15 = ((signed char) (+(arr_3 [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (var_0)));
}
