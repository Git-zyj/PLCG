/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194541
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
    var_12 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    var_13 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (~(var_2)))))));
                    arr_8 [(signed char)22] [i_1] [i_1] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) arr_6 [i_2] [i_1] [i_0] [(signed char)4])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])))))));
                }
                arr_9 [(_Bool)1] = ((/* implicit */short) arr_3 [i_0] [(unsigned short)4]);
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_3))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (var_2))) : (var_2)));
}
