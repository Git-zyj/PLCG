/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198217
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                    arr_9 [i_0] [(signed char)5] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 135107988821114880ULL))))), (18311636084888436735ULL)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 923444410)) : (var_0)))))))));
    var_18 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) var_4)))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_0) * (var_0))) * (((/* implicit */unsigned long long int) var_1))))) ? (var_12) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)32752)))))));
}
