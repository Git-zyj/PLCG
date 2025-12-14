/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206428
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
    var_18 -= ((/* implicit */int) ((((/* implicit */long long int) ((int) max((var_11), ((unsigned char)14))))) - (var_10)));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))), ((-(var_6))))))));
    var_20 = max((((((/* implicit */int) var_9)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_0))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0])))));
                    arr_10 [i_0] [i_0] [(unsigned short)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (arr_0 [i_1] [i_0]) : (((long long int) arr_7 [i_0] [i_1] [i_0]))));
                }
            } 
        } 
    } 
}
