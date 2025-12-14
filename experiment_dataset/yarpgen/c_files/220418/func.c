/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220418
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_0 [(_Bool)1] [i_0]))));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned int) (-(arr_0 [i_0] [i_0])))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((arr_0 [6] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        arr_2 [i_0] = (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_12));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_11 [i_2] = ((/* implicit */long long int) var_8);
                        arr_12 [(unsigned char)12] [i_2] [(_Bool)1] [i_2] [7] = ((/* implicit */_Bool) (signed char)-25);
                        var_20 *= ((/* implicit */unsigned int) ((signed char) (signed char)92));
                        arr_13 [i_0] [(unsigned char)12] [i_2] &= ((/* implicit */unsigned char) ((var_5) ? ((~(arr_6 [i_2] [i_1] [i_2]))) : (arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1])));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */signed char) (~(var_10)));
}
