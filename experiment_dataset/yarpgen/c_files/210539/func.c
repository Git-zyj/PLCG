/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210539
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_17 = (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1])))));
                arr_6 [i_0] [i_0] [(unsigned char)8] &= ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                arr_7 [i_0] [i_0] [15ULL] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-1))))) == (((((/* implicit */_Bool) arr_1 [(unsigned char)7])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_10);
}
