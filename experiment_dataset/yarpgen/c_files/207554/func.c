/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207554
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_16 &= ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
        var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) min(((short)-16118), ((short)0)))) <= (((/* implicit */int) (short)25430))))) : (((/* implicit */int) (short)0))));
    }
    /* LoopNest 3 */
    for (short i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (short i_3 = 2; i_3 < 23; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) (signed char)99))))));
                    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_4 [i_3])))) / (((/* implicit */int) arr_8 [i_2] [i_1 - 1] [i_1 + 1] [i_1]))))) ? (((/* implicit */int) max((arr_4 [i_3]), (arr_4 [i_3])))) : (((((((/* implicit */int) var_0)) <= (((/* implicit */int) (signed char)116)))) ? (((/* implicit */int) max(((signed char)-99), ((signed char)-87)))) : (((/* implicit */int) (signed char)-99))))));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) max(((signed char)-111), ((signed char)-98)))) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) var_0))))));
}
