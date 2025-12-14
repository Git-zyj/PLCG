/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190177
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
    var_14 = ((/* implicit */unsigned long long int) var_7);
    var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_16 = max((((((/* implicit */_Bool) (-(arr_8 [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) (-(arr_10 [i_0] [i_0] [i_3])))) : (arr_8 [i_0] [i_1] [i_2]))), (((unsigned long long int) ((arr_1 [i_0] [i_0]) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_3]))))));
                        arr_11 [i_0] [i_0] [i_2] = ((unsigned long long int) arr_10 [i_0] [i_0] [i_0]);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_4))))));
    }
}
