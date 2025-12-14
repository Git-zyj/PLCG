/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38520
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
    var_16 = ((/* implicit */int) ((signed char) (+(min((((/* implicit */int) var_8)), (var_7))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) ((unsigned char) ((min((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_3))) >> (((/* implicit */int) var_2)))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_10 [i_0] [i_1]) ? (((/* implicit */int) arr_10 [(unsigned short)2] [2])) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) min((var_0), (((/* implicit */signed char) var_11))))) ? (((var_14) >> (((((/* implicit */int) var_10)) - (29259))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        var_19 = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_0 [i_0] [i_0])))) - (min((min((((/* implicit */int) var_1)), (var_6))), (((((/* implicit */int) var_1)) & (((/* implicit */int) var_2))))))));
                    }
                } 
            } 
        } 
        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)8025)) : (((/* implicit */int) (short)32766))));
    }
}
