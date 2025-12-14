/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218282
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_7))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((signed char) arr_1 [i_0]))))) ? ((~(max((arr_3 [i_0]), (var_9))))) : ((~((-(arr_3 [i_0])))))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_9))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 10; i_2 += 1) 
    {
        for (long long int i_3 = 3; i_3 < 10; i_3 += 4) 
        {
            {
                var_20 += max(((-(((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_3])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (short)-26271)))))), (((max((((/* implicit */int) (_Bool)0)), (var_12))) / (((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 3] [i_3 + 1])))));
                arr_12 [(signed char)7] = (-(arr_3 [i_2]));
                arr_13 [i_2] [i_3 + 1] = ((/* implicit */int) ((signed char) (-(((/* implicit */int) ((unsigned short) 2780811194444507556LL))))));
            }
        } 
    } 
}
