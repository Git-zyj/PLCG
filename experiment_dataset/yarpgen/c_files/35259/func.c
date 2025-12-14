/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35259
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
    var_19 += ((/* implicit */short) (~((+((-(((/* implicit */int) var_11))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 -= ((/* implicit */signed char) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (9990928690882420367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))))))), (min((var_10), (((/* implicit */int) var_8))))));
                    arr_10 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) (signed char)94)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 4; i_4 < 19; i_4 += 3) 
        {
            {
                var_21 = ((/* implicit */signed char) 15728640U);
                var_22 |= ((/* implicit */long long int) var_1);
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_13);
}
