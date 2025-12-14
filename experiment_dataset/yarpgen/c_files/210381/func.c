/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210381
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
    var_18 = ((/* implicit */unsigned short) (short)31905);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */int) ((short) (unsigned short)0))) != (((/* implicit */int) max((((/* implicit */unsigned short) (short)-15693)), ((unsigned short)65522))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((short) var_10))), (max(((unsigned short)26), (((/* implicit */unsigned short) arr_4 [i_0])))))))));
                var_20 = ((/* implicit */unsigned short) (short)(-32767 - 1));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) != (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32763))))) : (((/* implicit */int) (unsigned short)26))))));
            }
        } 
    } 
}
