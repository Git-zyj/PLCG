/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239074
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_4 [i_1 - 1] [i_1 - 1] [i_0 + 2]), (arr_4 [i_1] [i_1 - 1] [i_0 - 1]))))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (arr_2 [i_0]) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1 - 1]))) : (var_10))))))));
                arr_9 [i_0 + 2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (max((-1910517569), (-1910517574))) : (((/* implicit */int) arr_6 [i_0 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))) : (max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))))));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) 1910517569))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */int) (+(-3092265162722236698LL)));
        arr_13 [i_2 + 2] = (-(-3092265162722236710LL));
        arr_14 [i_2] = ((/* implicit */long long int) arr_10 [i_2 + 1] [i_2 + 2]);
    }
}
