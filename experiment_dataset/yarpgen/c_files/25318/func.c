/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25318
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_11 = (+(((/* implicit */int) ((signed char) arr_2 [i_0]))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) max((((arr_6 [8] [(unsigned char)0] [(short)2] [i_2 + 1]) / (arr_6 [(unsigned short)2] [4] [i_2] [i_2 + 1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))))))));
                    arr_8 [12ULL] [1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_1 [(unsigned char)4] [(unsigned char)4]) : (arr_1 [i_0] [i_0]))));
                    arr_9 [(short)12] [i_0] |= ((/* implicit */unsigned char) (-2147483647 - 1));
                    arr_10 [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_10)), (arr_1 [i_2] [i_2 - 1]))) | (((arr_1 [5ULL] [i_2 + 1]) & (arr_1 [(unsigned short)8] [i_2 - 1])))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_1))));
    var_14 -= ((/* implicit */_Bool) (-(var_3)));
    var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (var_8) : (min((2147483634), (var_2))))))));
}
