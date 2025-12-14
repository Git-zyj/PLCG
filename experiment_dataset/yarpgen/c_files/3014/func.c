/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3014
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
    var_13 = ((/* implicit */long long int) max((var_13), (var_8)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39636))) : (arr_4 [i_1] [i_0])))) ? ((~(arr_4 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_2 [2LL] [2LL]))))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (15785727315614468844ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)-32767)), ((unsigned short)43087)))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_1] [i_1])))))))));
            }
        } 
    } 
}
