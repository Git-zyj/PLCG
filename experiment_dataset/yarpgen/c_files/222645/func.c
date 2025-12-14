/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222645
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) -1473233381);
                    arr_8 [i_0 - 1] [i_1] [i_0] = ((/* implicit */short) arr_3 [i_0] [i_0]);
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((unsigned char) arr_6 [i_1 + 1] [i_1 - 4])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 2) 
        {
            {
                arr_16 [i_3] [i_4] = ((/* implicit */unsigned int) arr_4 [i_4 - 2]);
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_8))));
                var_19 = ((/* implicit */signed char) ((unsigned int) var_13));
                arr_17 [i_4] |= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_5 [i_3] [i_4] [i_4])) ? (((unsigned long long int) arr_0 [i_3])) : (((/* implicit */unsigned long long int) arr_0 [i_4]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (var_16)));
    var_21 = var_3;
}
