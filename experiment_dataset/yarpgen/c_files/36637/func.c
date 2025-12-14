/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36637
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
    var_18 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) (((+(arr_5 [i_1 + 2] [i_1] [i_0 + 1]))) != (((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-707))) : (arr_5 [i_1 + 2] [i_1 - 1] [i_0 + 1])))));
                var_19 -= ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_1 + 2]);
                var_20 = ((/* implicit */unsigned int) 7872120441470847390ULL);
            }
        } 
    } 
}
