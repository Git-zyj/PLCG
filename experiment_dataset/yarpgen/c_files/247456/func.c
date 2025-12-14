/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247456
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
    var_11 = ((/* implicit */long long int) var_5);
    var_12 |= ((/* implicit */_Bool) (((+(1851976323))) * (((((/* implicit */int) var_2)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) 1851976321)) ? (-1851976323) : (((/* implicit */int) (_Bool)0)));
                    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1] [i_0])) ? (arr_4 [i_2 + 2] [i_2 - 2] [i_0]) : (arr_4 [i_0] [i_2 - 2] [i_0])))) ? (arr_4 [i_0] [i_2 + 4] [i_0]) : (((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1] [i_0])) ? (arr_4 [i_0] [i_2 + 2] [i_0]) : (arr_4 [i_0] [i_2 - 1] [i_0])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) ((unsigned int) var_1));
}
