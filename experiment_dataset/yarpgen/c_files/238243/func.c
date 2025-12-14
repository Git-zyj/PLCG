/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238243
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (short)-19541))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) min((((/* implicit */unsigned char) (signed char)-96)), (arr_1 [i_1] [i_1])))), (min((arr_2 [i_0]), (((/* implicit */short) arr_3 [i_0] [i_1])))))))) : (((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58))) : (756772735U)))));
                    arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 2] [i_1 - 2]))))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-96)), (var_5)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : (max((((/* implicit */unsigned int) var_10)), (var_13))))))));
    var_17 ^= ((/* implicit */short) var_8);
}
