/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23535
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 3] [i_2])) ? (arr_6 [i_0] [i_1 - 1] [i_2]) : (arr_6 [i_0] [i_1 - 3] [i_2]))))));
                    var_21 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((var_11) % (((/* implicit */unsigned long long int) arr_6 [(signed char)0] [(signed char)2] [i_2])))) : (((arr_3 [i_1] [i_1 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_6 [6U] [6U] [i_2]) + (-56048401)))) != (var_4))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */int) (+(max((min((var_17), (((/* implicit */unsigned int) var_19)))), (((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0]))))));
                        arr_13 [i_0] [i_1] [i_2] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0] [i_0 - 1])))) | (arr_11 [i_3] [i_3] [i_3] [i_3 - 1]));
                    }
                    var_22 = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0 - 1] [i_0 - 1]);
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned int) ((signed char) var_6));
}
