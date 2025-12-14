/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25539
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
    var_20 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) var_7)), (var_5)))) | (((/* implicit */int) var_7))));
    var_21 = ((/* implicit */long long int) min(((+(min((561211475), ((-2147483647 - 1)))))), ((~((+(var_9)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [(unsigned char)9] [i_1] [11U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((561211475), (2147483626)))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) == (1551544312176799862ULL)))), (min((((/* implicit */unsigned int) var_13)), (arr_2 [i_1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [0LL])), (16895199761532751753ULL)))) ? (((/* implicit */unsigned int) -2147483624)) : (arr_2 [i_0] [i_1] [i_1])))));
                arr_5 [i_0] [i_1] [6ULL] = var_4;
            }
        } 
    } 
}
