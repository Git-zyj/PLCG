/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49858
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((((unsigned long long int) ((int) 2032045641))), (((/* implicit */unsigned long long int) arr_2 [(signed char)9] [i_0] [i_0]))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (-2032045633)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), ((((_Bool)1) ? (((/* implicit */int) (short)-10708)) : (((/* implicit */int) (signed char)-81))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)5))));
    var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)6), (((/* implicit */unsigned short) var_8))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-96)), ((unsigned char)203)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2335978965U)));
}
