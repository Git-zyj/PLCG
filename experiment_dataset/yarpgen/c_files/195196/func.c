/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195196
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_2)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((+(var_7))), (((/* implicit */unsigned int) arr_1 [i_0 - 1])))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((arr_5 [i_3 + 1] [i_1] [i_2] [i_2]) <= (((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 + 1] [i_2] [(unsigned short)9])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14162))) : (arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 2])))));
                        var_19 *= min((arr_1 [i_0]), (((/* implicit */short) ((signed char) (short)14161))));
                    }
                } 
            } 
        } 
    }
}
