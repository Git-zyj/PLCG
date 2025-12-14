/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192038
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_1 [i_0] [i_0 - 2]);
                var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-81)), (((((/* implicit */int) (signed char)88)) << (((((/* implicit */int) (signed char)63)) - (40)))))))) ? (min((arr_3 [i_0 - 2]), (((/* implicit */unsigned long long int) (signed char)-71)))) : (((/* implicit */unsigned long long int) var_1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-12633)))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_5)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))) + (1234965858U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-73), ((signed char)-103))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_2]))))))));
                arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)97))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2 + 3])))))) : (((((/* implicit */_Bool) arr_3 [i_2 + 2])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
            }
        } 
    } 
}
