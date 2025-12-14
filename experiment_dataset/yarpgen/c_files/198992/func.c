/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198992
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((((arr_0 [(short)10] [i_1]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_3 [(unsigned char)1] [i_0] [(short)18])) - (38182))))) & (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [(unsigned char)17]) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [(unsigned char)17])) || (((/* implicit */_Bool) arr_3 [(short)3] [(signed char)2] [i_1])))))))))))))));
                var_11 = 2044521284U;
                arr_4 [(short)2] = ((/* implicit */unsigned char) ((((((arr_0 [i_1] [i_0]) + (9223372036854775807LL))) >> (((arr_0 [i_1] [i_0]) + (9075030188106953781LL))))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_1] [i_0]) == (((/* implicit */long long int) arr_2 [i_0] [(unsigned char)1] [i_1]))))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_0);
}
