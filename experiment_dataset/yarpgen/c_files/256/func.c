/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/256
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
    var_14 = ((/* implicit */unsigned short) 0ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1]))))), (var_5)))));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) arr_6 [i_2] [i_1] [i_0]);
                            var_17 *= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))))), (((((/* implicit */_Bool) arr_5 [i_2] [i_2 - 3] [i_2] [i_2 + 2])) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), ((unsigned char)197)))) : (((/* implicit */int) var_2))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
