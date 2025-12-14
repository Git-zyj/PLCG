/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203946
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) arr_2 [10U] [i_0]);
        arr_3 [(unsigned char)0] [(unsigned char)0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2384297802U)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)11))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    {
                        arr_13 [i_3] [i_3] [i_0] [i_1] [i_0] = (-(max((arr_0 [i_0]), (var_5))));
                        var_19 = ((/* implicit */unsigned char) (-(2302411837U)));
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */unsigned char) ((unsigned int) 356221760U));
    }
    var_21 = min((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
}
