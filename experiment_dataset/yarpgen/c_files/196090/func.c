/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196090
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
    var_18 = var_9;
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_19 &= ((/* implicit */signed char) min((((_Bool) var_11)), (((var_10) >= (((/* implicit */long long int) var_5))))));
        arr_2 [12LL] &= ((/* implicit */_Bool) var_16);
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (signed char)-25))));
        var_21 ^= ((((/* implicit */_Bool) max((max((var_10), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_4))))));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max(((short)10353), ((short)-10362))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */_Bool) ((int) var_2));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                {
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((signed char) var_3)))));
                    var_25 += ((/* implicit */unsigned int) min((((/* implicit */int) min((var_1), ((short)-10353)))), (((int) 7484004688182790418LL))));
                    var_26 &= ((/* implicit */_Bool) var_12);
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */signed char) var_13);
        var_27 = ((/* implicit */signed char) ((long long int) var_2));
    }
}
