/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29665
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_12 += ((/* implicit */int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)10880))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (arr_3 [i_0])))))));
                    var_13 |= ((/* implicit */unsigned long long int) var_0);
                }
            } 
        } 
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (unsigned char)52))));
        var_15 = ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned char) (signed char)-96))));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        var_16 += ((/* implicit */unsigned long long int) 1857118038U);
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (var_3))), (((((/* implicit */int) max((var_5), (((/* implicit */unsigned char) arr_10 [i_3] [i_3]))))) % (((/* implicit */int) (short)20823))))));
    }
    var_17 = ((short) var_7);
    var_18 = ((/* implicit */unsigned char) var_2);
    var_19 = ((/* implicit */int) var_9);
}
