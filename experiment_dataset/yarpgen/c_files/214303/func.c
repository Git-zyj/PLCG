/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214303
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_2 [i_1 + 2]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1]))))) <= (((int) max((979530838), (((/* implicit */int) arr_4 [i_0] [i_1 + 2])))))));
                arr_7 [11] [(signed char)7] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_1 - 1])) ^ (((/* implicit */int) arr_0 [i_1 + 2])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 + 1])) && (((/* implicit */_Bool) ((268427264) / (((/* implicit */int) (short)-4002))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                arr_14 [10LL] = ((/* implicit */unsigned int) arr_3 [i_3] [12]);
                var_17 = (+(((unsigned int) (-9223372036854775807LL - 1LL))));
                arr_15 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) max((min((arr_3 [i_2 - 2] [i_2 + 1]), (arr_3 [(signed char)13] [i_2 + 2]))), (((/* implicit */long long int) ((int) (-9223372036854775807LL - 1LL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_0))));
    var_19 = ((/* implicit */int) var_5);
}
