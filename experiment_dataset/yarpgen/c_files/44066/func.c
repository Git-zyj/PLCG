/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44066
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
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_0 [i_0 - 2])))) ? (((/* implicit */int) max(((unsigned char)192), (((/* implicit */unsigned char) var_1))))) : (-1166752244)));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_10))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_5))));
}
