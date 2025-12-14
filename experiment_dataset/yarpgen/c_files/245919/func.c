/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245919
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
    var_18 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [(unsigned short)22] [i_3] |= ((/* implicit */_Bool) arr_2 [i_0]);
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_3] [(_Bool)1]);
                    }
                } 
            } 
            arr_13 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_0 [i_0]))))));
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(((/* implicit */int) (short)29402)))))));
        }
        arr_14 [i_0] = ((/* implicit */unsigned short) ((arr_3 [i_0]) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
    }
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_2)))) ? (var_2) : (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) -1201865579)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-29423)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
}
