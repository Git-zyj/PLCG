/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217313
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) var_14);
        var_19 += ((/* implicit */short) (+(((/* implicit */int) arr_2 [(signed char)20]))));
        arr_5 [22U] |= ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [(signed char)12])) >> (((((/* implicit */int) (unsigned short)51662)) - (51640)))))) : (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 3] [(unsigned short)12]))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) -1073741824))) ? (((/* implicit */int) arr_2 [4ULL])) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(arr_12 [i_1] [i_2]))))));
                        var_22 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) > (((/* implicit */int) arr_6 [i_3] [i_3])))))) : (arr_14 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 2]));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */int) ((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
}
