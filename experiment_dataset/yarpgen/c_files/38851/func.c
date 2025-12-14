/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38851
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((-(var_1)))))));
    var_12 = min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9025628890997036749ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)213))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((unsigned long long int) ((((((/* implicit */unsigned long long int) -3691202518808546087LL)) < (9421115182712514876ULL))) ? (arr_0 [i_0]) : ((+(arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (+(arr_6 [i_0] [i_2] [i_1] [i_0])));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_0))));
        var_15 *= ((/* implicit */_Bool) (+(((((3090243454U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10572))))) ? ((+(arr_10 [i_3] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [7] [i_3])) * (((/* implicit */int) var_2)))))))));
    }
    var_16 = ((/* implicit */long long int) (~(9025628890997036748ULL)));
}
