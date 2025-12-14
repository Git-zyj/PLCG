/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190895
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
    var_11 += ((((/* implicit */_Bool) var_7)) ? (min((min((var_2), (var_3))), (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_4)) ? (max((var_2), (((/* implicit */int) (short)-25099)))) : (((((/* implicit */_Bool) (signed char)-72)) ? (-1595232308) : ((-2147483647 - 1)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_11 [(short)9] [i_2] [i_0] = ((((/* implicit */_Bool) arr_3 [1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) var_10)) : (arr_7 [i_0] [i_1] [i_0] [i_3]))))))) : (max((((((/* implicit */_Bool) -33554432)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (short)11499)))), (((/* implicit */int) max(((short)-29248), ((short)-27095)))))));
                            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 - 1])))) : (((/* implicit */int) (short)11499))));
                            var_13 = (~(((((var_2) >= (arr_4 [i_0]))) ? (((/* implicit */int) arr_9 [i_0] [i_0 - 1])) : (max((var_7), (((/* implicit */int) (short)11499)))))));
                            var_14 = ((int) max((((/* implicit */int) min((var_6), ((signed char)-66)))), ((+(((/* implicit */int) var_8))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) min(((short)-28717), (((/* implicit */short) (signed char)66))))) ? (((int) (short)-13603)) : (((/* implicit */int) (signed char)76)))))));
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)28133)) ? (1997022492) : (1595232312))))));
            }
        } 
    } 
}
