/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48385
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) (((+(var_5))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1]))))) >= (((/* implicit */int) min(((unsigned short)26075), ((unsigned short)26090))))));
                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_2))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((long long int) var_17))))) ? (((/* implicit */long long int) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (unsigned short)39480))))))) : (var_10)));
}
