/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219919
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 2037036460)) ? (799157510) : (var_16))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (var_16))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = min((((int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (var_1) : (-1683212774)))), (min((((var_12) / (arr_3 [i_0] [i_1] [i_2]))), (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_5 [i_1] [i_2]) : (var_9))))));
                    var_18 = min((((-1683212774) / (1683212772))), (((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? ((-(arr_3 [i_0] [i_0] [i_0]))) : (arr_1 [i_1] [i_2]))));
                }
            } 
        } 
    }
    var_19 = ((int) ((((1683212772) | (var_13))) << (((((var_0) + (2019123460))) - (10)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            {
                var_20 = ((int) var_12);
                arr_12 [i_3] = ((((/* implicit */_Bool) 1808686934)) ? (-1018379274) : (1018379274));
            }
        } 
    } 
    var_21 = var_8;
}
