/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19248
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
    var_17 = ((/* implicit */signed char) ((unsigned long long int) var_5));
    var_18 = (_Bool)0;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -4LL)) ? (12LL) : (30LL)));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 4; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [i_1])) || (((/* implicit */_Bool) 2LL))))))))));
                        arr_11 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) > (((/* implicit */int) var_4)))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
    var_21 = (-(((((/* implicit */_Bool) max((3LL), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))));
}
