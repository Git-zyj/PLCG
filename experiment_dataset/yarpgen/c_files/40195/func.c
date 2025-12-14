/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40195
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
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) 400853970U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [7U] [i_1])) ? (arr_0 [i_0 - 4] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (11) : (((/* implicit */int) (!(((/* implicit */_Bool) 3607273739U))))))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) var_9);
                arr_8 [i_0] [i_0] [i_1] = (-(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208))) : (7235673039276675530ULL))));
            }
        } 
    } 
    var_15 = var_3;
    var_16 = ((/* implicit */signed char) var_3);
}
