/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30659
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
    var_14 = ((/* implicit */unsigned short) (+(6314819037404681874LL)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((-1797334941) ^ (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-106))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (signed char)127);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (max((((/* implicit */unsigned long long int) var_11)), (var_0)))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_5 [i_2] [i_1]), (((/* implicit */signed char) (!(arr_11 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3]))))))) ? (max((((((/* implicit */_Bool) (unsigned short)30756)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-29)))), (((/* implicit */int) arr_0 [i_2])))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [12] [12])))))))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) | (arr_6 [i_1] [i_2] [i_3])))) ? (((arr_6 [i_0] [i_0] [i_2]) << (((arr_6 [i_0] [i_1] [i_2]) - (3096860744U))))) : (arr_6 [i_0] [i_1] [i_2])));
                        var_17 = ((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_1])))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned int) var_9);
}
