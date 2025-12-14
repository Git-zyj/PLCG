/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42307
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_6)))) != (((/* implicit */int) (_Bool)1))))));
        var_15 = ((/* implicit */unsigned short) (!((_Bool)1)));
        var_16 ^= ((/* implicit */_Bool) (+(var_8)));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] = ((/* implicit */long long int) ((_Bool) var_4));
                        arr_12 [i_2] [i_0] = ((var_12) ^ (-5153454720933793718LL));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_0))));
    var_18 += ((/* implicit */short) max((max((var_0), (((/* implicit */long long int) (!(((/* implicit */_Bool) 3813548456U))))))), (((/* implicit */long long int) var_7))));
}
