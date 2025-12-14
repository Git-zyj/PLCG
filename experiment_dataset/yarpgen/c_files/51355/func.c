/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51355
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */unsigned short) arr_3 [(short)16]);
                var_20 = ((min((((/* implicit */int) arr_2 [i_0 - 1])), (1426576761))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) && (((/* implicit */_Bool) arr_2 [i_0 - 1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) (unsigned char)92))))) && (((((/* implicit */_Bool) -784157512)) && (((/* implicit */_Bool) (unsigned char)164))))))) : (((((/* implicit */_Bool) ((signed char) (unsigned char)91))) ? (((/* implicit */int) (short)938)) : (((/* implicit */int) max((var_5), (var_14)))))))))));
}
