/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21984
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (max((var_12), (1851094973U)))));
                    arr_6 [i_0] [i_1] = ((/* implicit */signed char) max((0U), (1U)));
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (max((var_6), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))))) != (((/* implicit */int) (signed char)-85))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 3) 
        {
            {
                var_18 &= ((signed char) (!(((/* implicit */_Bool) 2741964812U))));
                arr_12 [i_4 - 1] [i_4] [i_3] = max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) / (arr_10 [i_4] [i_4]))), (arr_10 [i_4] [i_4]));
                var_19 = max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [4U] [(signed char)5] [(signed char)20])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) : (arr_4 [i_3] [i_4] [(signed char)11]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85)))))), (2017528024U));
            }
        } 
    } 
}
