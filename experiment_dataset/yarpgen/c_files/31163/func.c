/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31163
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
    var_18 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] = arr_5 [i_0] [i_0];
                var_19 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1698408642U)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (unsigned char)167))))) || (((/* implicit */_Bool) ((unsigned short) 5584241143202227865ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) arr_1 [i_0]))), ((unsigned char)100))))) : (((((/* implicit */_Bool) (unsigned char)184)) ? (1527862727U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89)))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) : (2767104552U)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1]) : (arr_0 [i_0]))) : (arr_0 [i_0])));
            }
        } 
    } 
    var_21 = var_13;
}
