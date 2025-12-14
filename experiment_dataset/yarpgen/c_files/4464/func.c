/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4464
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = (-(((/* implicit */int) arr_1 [i_0] [i_0])));
        var_14 = ((/* implicit */unsigned char) ((unsigned int) arr_2 [i_0]));
        arr_3 [5LL] = ((/* implicit */short) ((arr_0 [i_0] [i_0]) >> (((((/* implicit */int) (signed char)90)) - (72)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [14] [i_1]))));
                        arr_13 [i_0] [i_0] [i_3] = ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (-26369447420510206LL))))) : ((-(arr_0 [i_0] [i_1]))));
                    }
                    arr_14 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((2147483647) & ((-(((/* implicit */int) var_5))))));
                    arr_15 [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (signed char)-121))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned short) 3796151733U)))));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)0))))));
    }
    var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) var_1)), ((+(var_0)))));
}
