/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191782
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
    var_17 = ((/* implicit */signed char) var_11);
    var_18 -= var_8;
    var_19 |= min(((-(((12582912U) % (var_14))))), (2577073035U));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) min(((((~(2089372787U))) & (((unsigned int) 1406136469U)))), (((unsigned int) max((((/* implicit */unsigned int) (signed char)-55)), (3297654493U))))));
                    arr_9 [i_1] = ((((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_8 [i_1]) : (arr_5 [i_0] [i_0] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3780856371U)))));
                }
            } 
        } 
        arr_10 [(signed char)12] = ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0])));
        var_21 = var_14;
    }
}
