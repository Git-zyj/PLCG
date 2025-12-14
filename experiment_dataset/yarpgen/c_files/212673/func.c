/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212673
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
    var_12 = ((/* implicit */unsigned char) max((var_12), ((unsigned char)35)));
    var_13 = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)16252)) != (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max(((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_1)))))));
    var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_10))))) / (((/* implicit */int) var_2))))));
    var_15 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (_Bool)1))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 2])) : (((/* implicit */int) (_Bool)1))));
                    arr_7 [i_0] [i_2] [i_0] [i_0] &= ((/* implicit */short) min(((_Bool)1), (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2])) || (((/* implicit */_Bool) var_9)))))))));
                }
            } 
        } 
    } 
}
