/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43416
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
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) ((signed char) ((arr_3 [i_1] [i_1] [i_1]) ? (var_11) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [8ULL] [8ULL] [i_3] [i_3] [i_1] |= (~(((/* implicit */int) (unsigned char)128)));
                            var_18 = ((/* implicit */_Bool) (signed char)-117);
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_0 + 1] [i_1]);
            }
        } 
    } 
    var_19 &= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((int) 17684166080042250965ULL))), (((unsigned long long int) (signed char)27)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) (short)32764)) <= (var_0)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-17719)))))))));
    var_20 = ((/* implicit */unsigned long long int) var_3);
    var_21 = ((/* implicit */signed char) var_5);
}
