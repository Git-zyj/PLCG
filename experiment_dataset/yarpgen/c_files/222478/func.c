/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222478
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) var_10);
                            var_14 ^= ((((/* implicit */_Bool) (+(arr_6 [7] [i_3 - 2] [i_1 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_4)))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_4 [i_3 + 1] [i_1 + 2] [i_0])))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_16 += ((/* implicit */short) (+(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))), ((~(var_10)))))));
}
