/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243295
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) var_18)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */int) (_Bool)1);
                arr_6 [14ULL] [14ULL] |= ((/* implicit */unsigned long long int) (~((~(arr_0 [4ULL])))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (arr_0 [i_0])))) ? ((~(((/* implicit */int) (unsigned char)218)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)218)) > (arr_0 [i_0]))))));
                arr_7 [i_0] [i_0] [i_1 + 1] = arr_5 [i_0 - 1];
            }
        } 
    } 
}
