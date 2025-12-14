/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212074
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_12))));
    var_21 = ((/* implicit */signed char) var_13);
    var_22 = ((/* implicit */int) var_19);
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((unsigned long long int) arr_4 [i_0] [i_0 + 1] [i_0]);
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0 - 2] [i_0 + 1] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                var_23 += ((/* implicit */_Bool) ((long long int) arr_8 [(unsigned char)6] [(unsigned char)6]));
                arr_12 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((signed char) ((unsigned char) (signed char)73)));
                arr_13 [i_2] [i_2] = ((/* implicit */long long int) arr_10 [i_2] [i_2] [i_2]);
            }
        } 
    } 
}
