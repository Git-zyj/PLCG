/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49041
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
    var_16 = ((/* implicit */unsigned char) var_13);
    var_17 -= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) ^ (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_2 + 3] [i_1] [(_Bool)0]), (arr_3 [i_2 - 1] [i_1] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_5 [i_0]), (var_8))))))) : (((/* implicit */int) var_15))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_11)) == (arr_5 [i_0]))))) - (4247587389U)));
                }
            } 
        } 
    } 
}
