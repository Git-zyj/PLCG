/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199405
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
    for (int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                for (unsigned char i_3 = 4; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_19 += 2803550632U;
                        arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_2 + 1]))))), ((-(((((-141431799) + (2147483647))) >> (((/* implicit */int) var_14))))))));
                        arr_13 [i_2 + 1] [i_2 + 1] [i_3] [i_2] |= ((/* implicit */long long int) min(((-(2331491333U))), (((/* implicit */unsigned int) var_8))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0]))))), (max((((((/* implicit */_Bool) (signed char)-1)) ? (arr_11 [i_0 + 1] [i_0 + 1]) : (64288496U))), (((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1]))))));
        arr_14 [i_0] = ((/* implicit */unsigned char) (((-(arr_11 [i_0 - 1] [i_0 + 1]))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (signed char)70))));
    }
    var_22 |= ((/* implicit */long long int) var_12);
}
