/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41488
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (int i_3 = 4; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */signed char) (!(((arr_9 [i_3] [i_3 - 3] [i_3] [i_3 - 2]) < (arr_9 [i_3] [i_3 - 3] [i_1] [i_1])))));
                        var_18 = ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */int) (signed char)0)), (((((/* implicit */int) var_10)) ^ (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9))))) ? (((unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((arr_9 [i_0] [i_0] [i_0] [i_0]) / (arr_5 [i_0] [i_0] [i_0] [i_0])))));
        var_20 = (~(((/* implicit */int) (_Bool)1)));
    }
    var_21 = min((((((/* implicit */int) (unsigned short)59663)) <= (((/* implicit */int) var_2)))), ((!(((/* implicit */_Bool) var_5)))));
    var_22 = ((/* implicit */unsigned short) ((long long int) ((unsigned short) (unsigned short)59663)));
}
