/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30806
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) 4294967295U))));
                    var_21 = ((/* implicit */unsigned long long int) var_11);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    var_22 += ((/* implicit */unsigned short) ((signed char) (unsigned char)67));
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_9 [i_3] [i_4] [i_4])))))) ? (((/* implicit */unsigned long long int) var_17)) : (arr_0 [i_4 - 1] [i_4 + 1])));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_5)) > (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (0U))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_11))));
}
