/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48783
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] &= ((/* implicit */unsigned long long int) max(((signed char)89), ((signed char)-100)));
                var_12 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)27862)) / (((/* implicit */int) (signed char)6)))) - (min((((/* implicit */int) arr_2 [i_0] [i_1])), ((-(((/* implicit */int) var_2))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            {
                arr_11 [i_2] = max(((short)27862), (((/* implicit */short) (signed char)84)));
                var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-27862)) | (((/* implicit */int) (short)27862)))) ^ (((arr_1 [i_3]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_3] [i_3] [i_2]))))))) ? (((unsigned int) 149087197U)) : (((((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_5 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) - (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) (signed char)-90))))))))));
            }
        } 
    } 
}
