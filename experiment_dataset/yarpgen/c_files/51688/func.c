/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51688
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
    var_11 = max((var_10), (((/* implicit */unsigned long long int) var_8)));
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_9))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_13 &= ((/* implicit */signed char) ((arr_0 [i_0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))))) : ((~(((/* implicit */int) arr_1 [i_0 - 1]))))));
                    var_14 = ((/* implicit */short) (unsigned short)44908);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) var_7))), (((var_6) ? (((((/* implicit */_Bool) (unsigned short)1727)) ? (((/* implicit */int) (signed char)-107)) : (var_9))) : ((+(((/* implicit */int) var_8))))))));
}
