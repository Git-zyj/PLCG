/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46778
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */int) (((_Bool)1) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_3]))))) : (((/* implicit */unsigned long long int) min((arr_10 [i_0 + 2] [i_0 + 2] [i_2 - 1] [i_3] [i_3]), (var_6))))));
                        var_12 += ((/* implicit */unsigned char) (~(arr_1 [i_0 + 2])));
                        var_13 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) - (arr_8 [i_2 - 3] [i_1] [i_0 + 2])));
                    }
                } 
            } 
        } 
        arr_11 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
    }
    var_14 = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (signed char)-65))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-127))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8)))));
    var_15 = ((/* implicit */_Bool) var_4);
    var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_3))));
}
