/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227133
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
    var_20 = ((/* implicit */int) (signed char)55);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_21 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-75))))) : (arr_0 [i_0]))));
                arr_4 [i_1] = ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-55)) - (((/* implicit */int) (signed char)-54))))) < (arr_3 [i_0])))), ((signed char)48)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((var_2) != (min((((unsigned long long int) var_18)), (var_1)))));
    var_23 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) var_15)))));
}
