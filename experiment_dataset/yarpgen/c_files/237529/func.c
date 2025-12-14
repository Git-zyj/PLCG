/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237529
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) var_1);
                    var_11 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [16U] [i_2])))))) > ((-(2078196522645661108ULL))))))) > (max((2078196522645661108ULL), (((/* implicit */unsigned long long int) arr_8 [(unsigned char)18] [(unsigned char)18] [i_2] [i_2]))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [7ULL] [i_0]);
                    var_12 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [(signed char)16] [i_2])) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1 + 3] [i_0])) ? (var_5) : (((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_2] [i_0]))))))))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) arr_6 [i_0] [i_1]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) ^ (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 2078196522645661108ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (16368547551063890507ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))))))));
}
