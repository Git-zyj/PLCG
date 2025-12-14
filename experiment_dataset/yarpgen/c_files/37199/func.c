/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37199
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (~(-1553332973))))));
                arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_5 [i_1 - 1]))) != (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-102)), (min((arr_3 [(unsigned char)16]), ((unsigned short)34006))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */long long int) (unsigned short)48380)), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (short)2033)))))) & (((var_6) << (((((/* implicit */int) var_1)) + (11894)))))));
}
