/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216518
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-30466)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [8]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [(_Bool)0] [i_2]))) / (1996685328U))))))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [4] [i_2]))) >= (max((((/* implicit */unsigned int) arr_0 [0U])), (var_2)))))), (var_0))))));
                        var_22 -= ((/* implicit */long long int) ((unsigned char) var_14));
                    }
                } 
            } 
        } 
        var_23 -= ((/* implicit */signed char) ((unsigned long long int) arr_3 [i_0] [i_0]));
        arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) ((unsigned int) arr_0 [i_0])))));
    }
    var_24 = ((/* implicit */unsigned short) ((short) var_16));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) var_17)) <= (((/* implicit */int) var_4))));
}
