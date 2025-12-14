/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40344
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
    var_13 = ((/* implicit */long long int) var_8);
    var_14 = ((/* implicit */short) var_6);
    var_15 = min((((((/* implicit */_Bool) var_10)) ? (((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_11))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_2] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)-125)) : (((/* implicit */int) (signed char)-21))));
                        arr_12 [i_0 - 2] [i_1] [i_0 - 1] [i_0 - 1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_2 [i_3])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) var_12))))));
                    }
                } 
            } 
        } 
        arr_13 [14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 1]))))) ? (min((arr_6 [(unsigned short)14]), (((/* implicit */unsigned long long int) arr_7 [i_0 + 1] [i_0 + 2])))) : (((/* implicit */unsigned long long int) (~(arr_9 [i_0] [i_0] [i_0] [i_0]))))));
        arr_14 [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((arr_0 [i_0]) | (((/* implicit */int) var_12))))) : (var_11))), (((/* implicit */long long int) arr_10 [i_0] [i_0 + 3]))));
        arr_15 [i_0] = var_7;
    }
}
