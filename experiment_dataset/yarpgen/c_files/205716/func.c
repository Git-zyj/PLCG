/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205716
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 288230371856744448ULL)) && (((/* implicit */_Bool) var_0))))), (var_7)))) <= (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned char)112))))), (min((18158513701852807168ULL), (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_3 [i_0] [(_Bool)1] [(unsigned char)0]))) - (((/* implicit */unsigned int) max((((arr_1 [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_5 [i_2])))))));
                    arr_9 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) (unsigned char)144);
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) var_7);
                }
            } 
        } 
    } 
}
