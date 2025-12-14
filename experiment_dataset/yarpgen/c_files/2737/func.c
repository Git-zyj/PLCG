/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2737
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
    var_17 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) var_13))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_2))));
                    var_19 &= ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
        var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */int) var_13))))) ? (min((((/* implicit */long long int) var_5)), (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (1073737728U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22700))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */int) var_5)))) : (min((((/* implicit */int) var_3)), (var_1))))))));
        arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((var_15), ((-(var_15)))))) ? ((+(min((var_4), (((/* implicit */long long int) var_13)))))) : (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_15)) : (var_4))) : (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        var_21 = ((/* implicit */short) (+(var_1)));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */int) var_10))));
        var_23 += ((/* implicit */long long int) var_3);
    }
}
